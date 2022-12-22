#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int max = 1000, buff = 3;
  vector<int> primes = {2};
  // scanf("%d", &max);
  printf("2 ");
  for (; buff < max; buff++)
  {
    for (int i = 0; i < primes.size(); i++)
    {
      if (buff % primes[i] == 0)
        goto SKIP;
    }
    primes.push_back(buff);
    printf("%d ", buff);
  SKIP:
    printf("");
  }
  printf("\n");
}