/**
	@name:     708_problem_collatza
	@author:   Marek Jenda
	@revision: 1.0
	@date:     18.09.2014
	@info:     pl.spoj.com/problems/PTCLTZ/
**/

#include <iostream>

class Collatz
{
public:
    Collatz() {}
    unsigned int findFirstN(unsigned int p_initialNumber)
    {
        unsigned int l_sequenceNumber = 0;
        unsigned int l_value = p_initialNumber;
        while(l_value != 1)
        {
            l_value = computeNextValue(l_value);
            ++l_sequenceNumber;
        }
        return l_sequenceNumber;
    }
private:
    bool isEven(unsigned int p_number)
    {
        return !(p_number % 2);
    }
    unsigned int computeValueForEven(unsigned int p_number)
    {
        return p_number = p_number / 2;
    }
    unsigned int computeValueForOdd(unsigned int p_number)
    {
        return p_number = 3 * p_number + 1;
    }
    unsigned int computeNextValue(unsigned int p_value)
    {
        if(isEven(p_value))
        {
            p_value = computeValueForEven(p_value);
        }
        else
        {
            p_value = computeValueForOdd(p_value);
        }
        return p_value;
    }
};

int main()
{
    unsigned int l_numberOfTests;
    std::cin >> l_numberOfTests;
    
    Collatz collatz;
    while(l_numberOfTests-- != 0)
    {
        unsigned int l_initValue;
        std::cin >> l_initValue;
        std::cout << collatz.findFirstN(l_initValue) << std::endl;
    }
}
