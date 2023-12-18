#include <bits/stdc++.h>
using namespace std;
int calc(int src, int des)
{
  if (des == src)
    return 0;

  if (des == 0 || des == 1) // this will also handle the useless (subtract or divide case)
    return 1;

  int op1 = 1e9, op2 = 1e9;

  if (des % 2 == 0)
    op1 = 1 + calc(src, des / 2);

  int temp = sqrt(des);
  if (temp * temp == des)
    op2 = 1 + calc(src, temp);

  return min(op1, op2);
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int src, des;
    cin >> src >> des;
    int ans = calc(src, des);
    if (ans >= 1e9)
      ans = -1;
    cout << ans << endl;
  }

  return 0;
}