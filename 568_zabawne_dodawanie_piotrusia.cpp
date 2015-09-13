/**
	@name:     568_zabawne_dodawanie_piotrusia
	@author:   Marek Jenda
	@revision: 1.0
	@date:     13.09.2015
	@info:     pl.spoj.com/problems/BFN1/
**/

#include <iostream>

using namespace std;

int reverseNumber(int number)
{
   int reversedNumber = 0;
   int digit = 0;
   while (number > 0)
   {
        digit  = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;
   }
   return reversedNumber;
}

int main()
{
    int numberOfCases = 0;
    cin >> numberOfCases;

    while (numberOfCases--)
    {
        int number = 0;
        cin >> number;
        for (int trial = 0;; ++trial)
        {
            int reversedNumber = reverseNumber(number);

            if (reversedNumber == number)
            {
                cout << number << " " << trial << '\n';
                break;
            }
            else
            {
                number += reversedNumber;
            }

        }

    }
}
