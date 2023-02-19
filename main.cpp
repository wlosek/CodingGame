#include <bitset>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string message;
    getline(cin, message);

    string bitset_message;
    for (const char c : message)
    {
        bitset_message += std::bitset<7>(c).to_string();
    }

    std::string result;
    for (int i = 0; i < bitset_message.size(); ++i)
    {
        if (i != 0 && i <= bitset_message.size() - 1)
        {
            result += " ";
        }
        const char bit = bitset_message[i];
        result += bit == '0' ? "00 " : "0 ";
        for (int j = i; j < bitset_message.size(); ++j)
        {
            if (bitset_message[j] == bit)
            {
                result += "0";
                i = j;
            }
            else
            {
                break;
            }
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
}