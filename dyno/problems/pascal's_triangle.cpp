// Example 1 :

//     Input : numRows = 5 Output : [ [1], [ 1, 1 ], [ 1, 2, 1 ], [ 1, 3, 3, 1 ], [ 1, 4, 6, 4, 1 ] ] Example 2 :

//     Input : numRows = 1 Output : [[1]]

//                                  Solved using Dynamic Programming
//                                  Approach(Tabulation
//                                           : Bottom Up)

// CODE START

// class Solution
// {
// public:
//     vector<vector<int>> generate(int numRows)
//     {
//         vector<vector<int>> output(numRows);
//         for (int i = 0; i < numRows; i++)
//         {
//             output[i].resize(i + 1, 1); // resize all the n small boxes to contain n+1 vectors in each of them
//             for (int j = 1; j < i; j++)
//             {
//                 output[i][j] = output[i - 1][j - 1] + output[i - 1][j];
//             }
//         }
//         return output;
//     }
// };

// CODE START

////     1
//   1   1
//  1  2  1
// 1  3  3 1
// 1  4  6 4 1

// vec{
//
//   vec {1}
//   vec {1} {1}
//   vec {1} {1} {1}
//   vec {1} {1} {1} {1}
//   vec ....
// }