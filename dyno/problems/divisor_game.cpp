// Divisor Game

// Alice and Bob take turns playing a game, with Alice starting first.

// Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

// Choosing any x with 0 < x < n and n % x == 0.
// Replacing the number n on the chalkboard with n - x.
// Also, if a player cannot make a move, they lose the game.

// Return true if and only if Alice wins the game, assuming both players play optimally.

// Example 1:

// Input: n = 2
// Output: true
// Explanation: Alice chooses 1, and Bob has no more moves.
// Example 2:

// Input: n = 3
// Output: false
// Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.

// Constraints:

// 1 <= n <= 1000

// CODE START
//
//

// // Let's consider dynomic approach to solve this problem.
// Let dp[i] be true if Alice wins and false for the opposite case. Each i such that 1 <= i <= N is either winning or losing position for Alice.
// It's easy to see that if 0 < x < i such  that i % x == 0 and if position i - x is winning position for Alice i.e. dp[i - x] == true,
// then she can just subtract x from i and move to winning position, therefore for her i is also winning position.
//  Now it's only left to consider all possible cases where Alice can win and return dp[N].

// class Solution {
// public:
//     bool divisorGame(int N) {
//         bool dp[N+1];
//         memset(dp, false, N+1);
//         for(int i=2; i <= N; i++)
//             for(int j = 1; j*j <= i;j++){
//                 if(i % j == 0 && !dp[i - j])
//                     dp[i] = true;
//             }

//         return dp[N];
//     }
// };