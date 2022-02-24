#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abc";
    cout << s << endl;

    //string using pointer
    string *sp = new string;
    *sp = "mno";
    cout << sp << endl;
    cout << *sp << endl;

    //2d implementation of string
    vector<string> v;
    v.push_back(s);
    v.push_back("hello");

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }

    string s2;
    s2 = "def";
    cout << s2 << endl;
    string s3;

    //input line from user
    //for character array cin.getline(name , size , delimator)
    //getline(cin, s3);
    // cout<<s3<<endl;

    //string class is mutable
    s3 = "abcabc";
    cout << s3[1] << endl;
    s3[0] = 'd';
    cout << s3 << endl;

    //string concatnation
    string s4 = "";
    s4 += s3 + s2 + "hello coding";
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    //find size of string
    //s.size(), s.length() return same value
    cout << s4.size() << endl;
    cout << s4.length() << endl;

    //.substr(start index of substring u want)
    cout << s4.substr(3) << endl;
    //.substr(start index of substring u want , no of charcters from that index)
    string s5 = s4.substr(3, 5);
    cout << s5 << endl;

    //.finds("substring") returns the first index when it occur
    cout << s4.find("abc") << endl;

    int a = 123;
    string s6 = to_string(a); // convert interger to string
    cout << s6 << endl;
    s6[1] = '4';
    cout << s6 << endl;

    s6.push_back('5');
    cout << s6 << endl;

    a = atoi(s6.c_str()); // convert string to integer
    cout << a << endl;

    return 0;
}
