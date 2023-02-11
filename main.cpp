#include <iostream>
#include <vector>
#include <unistd.h>

int main(void)
{
  int max = 1000, current = 3;
  std::vector<int> primes = {2};
  // std::cout << "input max:";
  // std::cin >> max;
  std::cout << "2\n";
  while (current <= max)
  {
    bool flag = true;
    for (int prime : primes)
      if (!(current % prime))
      {
        flag = false;
        break;
      }
    if (flag)
    {
      primes.push_back(current);
      std::cout << current << "\n";
      sleep(1);
    }
    current++;
  }
}