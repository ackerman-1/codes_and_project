#include <iostream>
using namespace std;
int main()
{

    // int A[5] = {};
    //  cout << sizeof(A) << endl;
    int n;
    cout << "Enter the value of N: " << endl;
    cin >> n;
    int Ab[n] = {1, 2, 3, 4};
    for (int x : Ab)
    {
        cout << x << endl;
    }
    return 0;
}
