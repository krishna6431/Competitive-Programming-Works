#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

// You may assume that the array is non-empty and the majority element always exist in the array.

// Example 1:

// Input: [3,2,3]
// Output: 3
// Example 2:

// Input: [2,2,1,1,1,2,2]
// Output: 2

// this is the case when majority elements are always existed
// time complexity  ---> o(n)
// space complexity ---> o(1)
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int major = nums.at(0);
        int count = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums.at(i) != major)
            {
                count--;
                if (count == 0)
                {
                    major = nums.at(i);
                    count = 1;
                }
            }
            else
            {
                count++;
            }
        }
        //if majority element does not exist
        // int count2=0;
        // for(int i =0 ; i < nums.size() ; i++){
        //     if(nums.at(i)==major){
        //         count2++;
        //     }
        // }
        // if(count2 > nums.size()/2) return major;
        // else return -1;
        return major;
    }
};


//other approaches  

// 1---> brute force 
//     time complexity ---> o(n2)
//     space complexity --->o(1)

// 1---> using hashmap
//     time complexity ---> o(n)
//     space complexity --->o(n)

// 1---> sorting(sort all elements and return mid of the array)
//     time complexity ---> o(nlogn)
//     space complexity --->o(1) 

