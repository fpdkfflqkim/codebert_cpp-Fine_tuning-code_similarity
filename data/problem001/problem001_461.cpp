#include <iostream>

int main()
{
  int r, D, x;
  std::cin >> r >> D >> x;

  for(int i=0; i<10; i++) {
    int xx = r * x - D;
    std::cout << xx << std::endl;
    x = xx;
  }

  return 0;
}
