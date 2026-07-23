#include <iostream>

#include "module/math.hpp"

int main()
{
  std::cout << "Hello World!" << std::endl;
  std::cout << "2 + 3 = " << module::add(2, 3) << std::endl;
  return 0;
}
