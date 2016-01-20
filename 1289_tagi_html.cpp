#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const char openingTagSymbol = '<';
const char closingTagSymbol = '>';

string convertLine(const string& inputLine);

int main()
{
    string input;
    while(getline(cin, input))
    {
        cout << convertLine(input) << endl;
    }
    return 0;
}


string convertLine(const string& inputLine)
{
    bool isInsideTag = false;

    string outputString = "";
    for (int i = 0; i < inputLine.size(); ++i)
    {
        char currentChar = inputLine[i];
        if (currentChar == openingTagSymbol)
        {
            isInsideTag = true;
            outputString += currentChar;
        }
        else if (inputLine[i] == closingTagSymbol)
        {
            isInsideTag = false;
            outputString += currentChar;
        }
        else if (isInsideTag)
        {
            outputString += toupper(currentChar);
        }
        else
        {
            outputString += currentChar;
        }
    }

    return outputString;
}

