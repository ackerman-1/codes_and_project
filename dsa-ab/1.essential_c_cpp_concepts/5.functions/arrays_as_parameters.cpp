#include <bits/stdc++.h>
using namespace std;
void fun(int *arr, int n) // you can replace the star with the square brackets, it will still work
{
    // since we are passing the array as pointer here, if we make changes here, they will be changed in the actual array as well
    cout << sizeof(arr) / sizeof(int) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;
    // for (int x : A)
    //     cout << x << endl;
    fun(A, n);

    return 0;
}
