// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

/**
 * phi(n) : count of integers which are co-prime with n
 * phi(n) = n[1 - 1/p1][1-1/p2]....[1-1/pk]
 * n = (p1^k1)(p2^k2)...(pc^kc)
 *
 *
 * compute divisors/prime factors
 * 1) bruteforce
 * 2) sqrt(n) : i and n/i is divisors
 * 3) seive() method
 *   {precomute
 *    1. mark multiple of 2 then 3 then 5 (only which are not marked by previous, hence we we get
 *     smallest prime factor for all the numbers)
 *    }
 *    1  2  3  2  5  2  7  2  3   2  11  2   13   2  3   2   17   2  19   2   3   2  23 spf
 *    1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  22  23 numbers
 *
 *    we can also use this to find phi(n) coz we can find out all spfs in logn time
 */
int main()
{
    return 0;
}