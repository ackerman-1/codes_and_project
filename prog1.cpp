#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    vector<string> numbers;
    string number;

    while (inputFile >> number)
    {
        numbers.push_back(number);
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        outputFile << numbers[i] << endl;
    }

    return 0;
}
