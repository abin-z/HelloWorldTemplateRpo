#include <fmt/core.h>

#include "module/math.hpp"

int main()
{
  fmt::print("Hello World from fmt!\n");
  fmt::print("2 + 3 = {}\n", module::add(2, 3));
  return 0;
}
