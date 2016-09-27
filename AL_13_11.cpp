#include <iostream>
#include <vector>

unsigned max = 8000001u;
unsigned noValue = 0u;

std::vector<unsigned> generateSumOfAppropiateDivisors()
{
    std::vector<unsigned> tab(max, 0);

    for (unsigned i = 1; i < max; ++i)
    {
        for(unsigned j = i; j < max; j += i)
        {
            tab[j] += i;
        }
    }

    return tab;
}

std::vector<std::vector<unsigned>> createSumOfDivisors()
{
    auto sumOfAppropiateDivisors = generateSumOfAppropiateDivisors();
    std::vector<std::vector<unsigned>> sumOfDivisors(max, std::vector<unsigned>());

    for (int i = 1; i < max; ++i)
    {
        if (sumOfAppropiateDivisors[i] < max)
        {
            sumOfDivisors[sumOfAppropiateDivisors[i]].push_back(i);
        }
    }

    return sumOfDivisors;
}



unsigned findSmallest(const std::vector<unsigned>& numbers, unsigned a, unsigned b)
{
    for (unsigned num : numbers)
    {
        if (num >= a)
        {
            if (num <= b)
            {
                return num;
            }
            else
            {
                return noValue;
            }
        }
    }
    return noValue;
}

void solution(const std::vector<std::vector<unsigned>> & sumOfDivisors)
{
    unsigned a, b, n;
    scanf("%u %u %u", &a, &b, &n);

    unsigned num = findSmallest(sumOfDivisors[n], a, b);
    if (num != noValue)
    {
        printf("%u\n", num);
    }
    else
    {
        printf("brak\n");
    }
}

unsigned getNumberOfRepetitions()
{
    unsigned rep;
    scanf("%u", &rep);
    return rep;
}

int main()
{
    auto sumOfDivisors = createSumOfDivisors();

    auto rep = getNumberOfRepetitions();
    while (rep--)
    {
        solution(sumOfDivisors);
    }
}
