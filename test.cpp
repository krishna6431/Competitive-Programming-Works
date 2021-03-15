Problem 3. Given a set of N intervals, find a maximum subset S’ of S such that no pair of intervals in S’ overlaps.
Algorithm:
Sort the intervals according to their end points.
Now, traverse through all the intervals, if we get two overlapping intervals, then greedily choose the interval with lower end point, since choosing it will ensure that intervals further can be accommodated without any overlap.
Apply the same procedure for all the intervals and print all the intervals which satisfy the above criteria.
 
Pseudo Code:
Input- The list of intervals and number of intervals.
maxSubset(intervals, n)
{
}
Complexity Analysis : Time Complexity : O(N log N)[where N is the number of sets of intervals] Space Complexity : O(1)[No extra space is required]