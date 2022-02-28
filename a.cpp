#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <bits/stdc++.h>

std::ifstream in;
std::ofstream out;

typedef std::map<std::string, int> Skills;
typedef std::map<int, int> SkVals;
typedef std::vector<std::pair<int, int>> SkReqs;

struct Proj
{
    std::string name;
    int days, score, bb;
    SkReqs sk;
};

struct Contr
{
    std::string name;
    SkVals sk;
};

struct Res
{
    std::string name;
    std::list<Contr *> a;
};

Skills skills;
int skills_count;
std::vector<Contr> contr;
std::vector<Proj> proj;
std::list<Res> res;

bool compare_bb(const Proj &p1, const Proj &p2)
{
    return (p1.bb < p2.bb);
}

int skill_id(const std::string &s)
{
    auto i = skills.find(s);
    if (i == skills.end())
    {
        auto j = skills.insert({s, skills_count++});
        i = j.first;
    }
    return i->second;
}

void contr_read(Contr &c)
{
    int n;
    in >> c.name >> n;
    for (int i = 0; i < n; ++i)
    {
        std::string s;
        int sk;
        in >> s >> sk;
        c.sk[skill_id(s)] = sk;
    }
}

void proj_read(Proj &p)
{
    int n;
    in >> p.name >> p.days >> p.score >> p.bb >> n;
    for (int i = 0; i < n; ++i)
    {
        std::string s;
        int sk;
        in >> s >> sk;
        p.sk.push_back({skill_id(s), sk});
    }
}

bool try_proj_slow(Proj &p, Res &r)
{
    bool mentors = false;
    std::vector<bool> used(contr.size());
    for (auto s : p.sk)
    {
        bool found = false;
        for (int c = 0; c < contr.size(); ++c)
        {
            if (used[c])
                continue;

            if (contr[c].sk[s.first] >= s.second)
            {
                used[c] = true;
                r.a.push_back(&contr[c]);
                found = true;
                break;
            }
        }
        if (!found)
        {
            r.a.push_back(NULL);
            mentors = true;
        }
    }
    if (mentors)
    {
        auto a = r.a.begin();
        for (auto s : p.sk)
        {
            if (!*a)
            {
                for (auto m : r.a)
                {
                    if (m && m->sk[s.first] >= s.second)
                    {
                        for (int c = 0; c < contr.size(); ++c)
                        {
                            if (used[c])
                                continue;
                            if (contr[c].sk[s.first] == s.second - 1)
                            {
                                used[c] = true;
                                *a = &contr[c];
                                break;
                            }
                        }
                    }
                }
            }
            if (!*a)
            {
                return false;
            }
            ++a;
        }
    }
    return true;
}

void stupid()
{
    int curtime = 0;
    int count = 0;
    for (Proj &p : proj)
    {
        std::cout << "Trying project " << count++ << "\n";
        if (curtime + p.days >= p.bb + p.score)
            continue;
        Res r;
        if (try_proj_slow(p, r))
        {
            curtime += p.days;
            r.name = p.name;
            res.push_back(r);
            auto a = r.a.begin();
            for (auto s : p.sk)
            {
                if ((*a)->sk[s.first] <= s.second)
                    ++(*a)->sk[s.first];

                ++a;
            }
        }
    }
}

void stupid2()
{
    int curtime = 0;
    std::list<Proj *> cur, next;
    for (Proj &p : proj)
        next.push_back(&p);

    while (true)
    {
        cur.clear();
        cur.swap(next);

        bool added = false;
        for (auto p : cur)
        {
            if (curtime + p->days >= p->bb + p->score)
                continue;
            Res r;
            if (try_proj_slow(*p, r))
            {
                curtime += p->days;
                r.name = p->name;
                res.push_back(r);
                auto a = r.a.begin();
                for (auto s : p->sk)
                {
                    if ((*a)->sk[s.first] <= s.second)
                        ++(*a)->sk[s.first];

                    ++a;
                }
                added = true;
            }
            else
            {
                next.push_back(p);
            }
        }
        if (!added)
            break;
    }
}

void print_res()
{
    out << res.size() << "\n";
    for (auto r : res)
    {
        out << r.name << "\n";
        for (auto a : r.a)
        {
            out << a->name << " ";
        }
        out << "\n";
    }
}

int main(int argc, char **argv)
{
    if (argc < 3)
        return 1;

    in.open(argv[1]);
    out.open(argv[2]);

    int cc, pp;
    in >> cc >> pp;
    contr.resize(cc);
    for (Contr &c : contr)
        contr_read(c);

    proj.resize(pp);
    for (Proj &p : proj)
        proj_read(p);

    std::sort(proj.begin(), proj.end(), compare_bb);

    stupid2();
    print_res();
}