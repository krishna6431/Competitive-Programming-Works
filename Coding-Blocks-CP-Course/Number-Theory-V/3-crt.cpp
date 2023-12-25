// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

/*
    find a number x such that
    x % 2 = 1   === x = 1 mod 2
    x % 7 = 5   === x = 5 mod 7
    x % 3 = 2   === x = 2 mod 3

    nums = [2,3,7]
    rem =  [1,2,5]
    formula = (i=0 to k-1)summation(rem[i]*pp[i]*inv[i])%prod

    rem[i] = array of remainder
    prod = prod of all numver
    pp[i] = prod of all number except that number
    inv[i] = modular multiplicative inverse of pp[i] wrt to number (6 * y) % 7 = 1


    x = bucket1(2s remainder) + bucket2(3s remainder) + bucket3(7s remainder)
    x = multiple of 3,7 + multiples of 2,7 + multiples of 2,3
    pp[i] = prod/nums[i]
*/
int main()
{
    return 0;
}