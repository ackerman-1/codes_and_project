// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

// Example 1:

// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
// Example 2:

// Input: n = 3
// Output: 2
// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
// Example 3:

// Input: n = 4
// Output: 3
// Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

// Constraints:

// 0 <= n <= 30

// CODE START
//
// class Solution {
// public:
//     int fib(int n) {
//         if(n==0 || n==1) return n;
//         int prev2=0;
//         int prev=1;
//         for(int i=2;i<=n;i++){
//             int curr_i = prev2+prev;
//             prev2=prev;
//             prev=curr_i;
//         }
//         return prev;
//     }
// };
//
//
//
// CODE END
// learnt
//
//  Memoization is a technique used in computer programming to optimize the execution time of a function by caching its results.
//  It involves storing the results of expensive function calls and returning the cached result when the same inputs occur again,
// instead of recomputing the function. This can significantly improve the performance of a program by avoiding redundant calculations.