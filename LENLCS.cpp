#include <iostream>
#include <vector>

std::vector<std::vector<int>> buildDoubleSizeArray(int n, int m)
{
     std::vector<std::vector<int>> array(n);

     for (auto & subVector : array)
     {
          subVector.resize(m);
     }

     return array;
}


int lcs(const std::string& word_first, const std::string& word_second)
{
     auto array = buildDoubleSizeArray(word_first.length()+1, word_second.length()+1);

     for (int i = 1; i <= word_first.length(); ++i)
     {
          for (int j = 1; j <= word_second.length(); ++j)
          {
               if (word_first[i-1] == word_second[j-1])
               {
                    array[i][j] = array[i-1][j-1] + 1;
               }
               else
               {
                    array[i][j] = std::max(array[i-1][j], array[i][j-1]);
               }
          }
     }

     return array.back().back();
}


int main()
{
     int examples {};
     std::cin >> examples;

     while (examples--)
     {
          int devnull {};
          std::string word_first, word_second;

          std::cin >> devnull;
          std::cin >> word_first;
          std::cin >> devnull;
          std::cin >> word_second;
          std::cout << lcs(word_first, word_second) << std::endl;
     }
}
