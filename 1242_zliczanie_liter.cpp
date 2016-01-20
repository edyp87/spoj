#include <iostream>
#include <string>

const int alphabetSize = 57;
const int lettersBeginInAscii = 65;
using namespace std;

int main()
{
    unsigned int charAmount[alphabetSize+1] = {0};
    unsigned int howManyStrings = 0;

    cin >> howManyStrings;
    cin.get();
    while (howManyStrings--)
    {
        std::string inputText = "";
        getline(cin, inputText);
        for (int i = 0; i < inputText.size(); ++i)
        {
            charAmount[inputText[i] - lettersBeginInAscii]++;
        }
    }

    for (int i = 32; i <= alphabetSize; ++i)
    {
        if (charAmount[i] != 0)
        {
            cout << static_cast<char>(i + lettersBeginInAscii) << " " << charAmount[i] << endl;
        }
    }
    for (int i = 0; i < 32; ++i)
    {
       if (charAmount[i] != 0)
        {
            cout << static_cast<char>(i + lettersBeginInAscii) << " " << charAmount[i] << endl;
        }
    }
    
}
