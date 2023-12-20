// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

/**
 * to find solution of ax + by = c (c can be any integer)
 * (if a != 0 and b!= 0)
 * (analytic solution)
 *  ax congreunt c(mod b)
 *  by congreunt c(mod a)
 *
 *  x = ca-1(mod b)
 *  (refer cp-algorithms.com)
 *
 * (algorithmic solution)
 * ax + by = c;
 * ga'x + gb'y = c
 * a'x + b'y = c/g
 * if(c%g == 0) (we have solution) otherwise no solution
 * let say if we have solution
 * c should be = kg == k(gcd(a',b'))
 * now we can apply extended-euclidean and we can get solution of x and y
 *
 * ans_x = k*x
 * ans_y = k*y
 *
 * we can also find infinetly many solution
 *
 * ans_x_1 = ans_x + (b/g)t;
 * ans_y_1 = ans_y - (b/g)t
 *
 * change change t factor and you can find out multiple answer
 *
 */
int main()
{

    return 0;
}