#include <iostream>
#include <vector>

// !!!!!! TODO slow

int gcd(int u, int v)
{
     while (v)
     {
         int r = u % v;
         u = v;
         v = r;
     }
     return u;
}

int solve(const std::vector<int> & array)
{
     if (array.size() == 0) return 0;

     std::vector<int> helpArray (array.size());

     int currentMax = 0;

     for (int prefixLength = 0; prefixLength < array.size(); ++prefixLength)
     {
          std::cout << prefixLength << std::endl;
          int solutionForThisPrefix = 1;
          for (int index = 0; index < prefixLength; ++index)
          {
               if (gcd(array[index], array[prefixLength]) > 1 &&
                   solutionForThisPrefix < helpArray[index] + 1)
               {
                    solutionForThisPrefix = helpArray[index] + 1;
               }
          }
          helpArray[prefixLength] = solutionForThisPrefix;

          if (solutionForThisPrefix > currentMax)
          {
               currentMax = solutionForThisPrefix;
          }
     }

     return currentMax;
}

int main()
{
      int examples {};
      scanf("%d", &examples);

      std::vector<int> array (examples);
      int number {};

      for (int i = 0; i < examples; ++i)
      {
           scanf("%d", &number);
           array[i] = number;
      }

      printf("%d\n", solve(array));

}
