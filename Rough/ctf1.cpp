#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    // Generate a random seed based on the current time
    srand(time(NULL));

    // Define the key
    string key = "SecretKey123!";

    // Get user input
    string input;
    cout << "Enter the key: ";
    getline(cin, input);

    // Check if the input key matches the actual key
    if (input != key)
    {
        cout << "Invalid key." << endl;
        return 0;
    }

    // Generate a random number between 1 and 100
    int randomNum = rand() % 100 + 1;

    // Generate a random string of characters
    string randomString;
    for (int i = 0; i < randomNum; i++)
    {
        randomString += (char)(rand() % 26 + 'a');
    }

    // Generate the flag based on the random number and string
    stringstream flagStream;
    flagStream << "CTF{";
    flagStream << pow(randomNum, 2) << "-";
    for (int i = 0; i < randomString.length(); i++)
    {
        flagStream << (int)randomString[i] << "-";
    }
    flagStream << "}" << endl;
    string flag = flagStream.str();

    // Output the flag
    cout << flag << endl;

    return 0;
}
