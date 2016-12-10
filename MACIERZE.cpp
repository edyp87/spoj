#include <iostream>
#include <vector>
#include <limits>

std::vector<std::vector<int>> buildDoubleSizeArray(int n, int m)
{
     std::vector<std::vector<int>> array(n);

     for (auto & subVector : array)
     {
          subVector.resize(m);
     }

     return array;
}

int compute(const std::vector<int>& matrixes)
{
     auto array = buildDoubleSizeArray(matrixes.size(), matrixes.size());

     for (int chainLength = 2; chainLength < matrixes.size(); ++chainLength)
     {
          int amountOfChainsOfThisLength = matrixes.size() - chainLength;
          for (int startOfThisChain = 1; startOfThisChain <= amountOfChainsOfThisLength; ++startOfThisChain)
          {
               int endOfThisChain = startOfThisChain + chainLength-1;
               array[startOfThisChain][endOfThisChain] = std::numeric_limits<int>::max();

               for (int split = startOfThisChain; split < endOfThisChain; ++split)
               {
                    int cost = array[startOfThisChain][split] +
                               array[split+1][endOfThisChain] +
                               matrixes[startOfThisChain-1] *
                               matrixes[split] *
                               matrixes[endOfThisChain];
                    if (cost < array[startOfThisChain][endOfThisChain])
                    {
                         array[startOfThisChain][endOfThisChain] = cost;
                    }
               }
          }
     }

     return array[1].back();
}

int main()
{
     int examples {};
     std::cin >> examples;

     while (examples--)
     {
          int numberOfMatrixes {};
          std::vector<int> matrixes {};
          std::cin >> numberOfMatrixes;
          numberOfMatrixes++;
          while (numberOfMatrixes--)
          {
               int matrixHeigh{};
               std::cin >> matrixHeigh;
               matrixes.push_back(matrixHeigh);
          }

          std::cout << compute(matrixes) << std::endl;
     }
}
