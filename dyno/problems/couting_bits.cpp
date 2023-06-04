// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
// setbits means bits with value 1
// Example 1:

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// Example 2:

// Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101
// basically ho kya raha hai is i &(i-1) drops the lowest set bit.
// For example: i = 14, its binary representation is 1110, so i-1 is 1101, i&(i-1) = 1100, the number of "1" in its binary representation decrease one, so ret[i] = ret[i&(i-1)] + 1.
// new thing learnt, while i%2 gives the reminder when i is divided by 2, i>>1 gives the quotient, ignoring the reminder ( not its actual use tho)
class Solution
{
public:
    vector<int> countBits(int num)
    {
        vector<int> ret(num + 1, 0);
        for (int i = 1; i <= num; ++i)
            ret[i] = ret[i & (i - 1)] + 1;
        return ret;
    }
};
// vector<int> ret(num+1, 0) makes a vector named 'ret' of size num+1 amd initializes all the values present in it to 0
// ok so what actually happening is, suppose we took 1 number, say 12 now in binary it is 1100, now what we are doing is, doing '&' operation of this number with 1 less
// of it, i.e. 11 in this case which is 1011. now the hidden power used here is that the & of these things will give you a decimal number which is the result of the &
// 1100 & 1011 = 1 (gives value as number of 1s matching) = 1 here and adds 1 to it. which is basically the answer (number of 1 present in the bin rep of the number(i))