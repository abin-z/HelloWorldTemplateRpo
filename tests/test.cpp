#include <stdexcept>

#include "doctest/doctest.h"
#include "module/math.hpp"

TEST_CASE("module add returns expected result")
{
  CHECK(module::add(1, 1) == 2);
  CHECK(module::add(2, 3) == 5);
  CHECK(module::add(-1, 1) == 0);
}

TEST_CASE("doctest basic assertions")
{
  CHECK(1 + 1 == 2);
  CHECK_FALSE(1 + 1 == 3);
  REQUIRE(2 * 3 == 6);

  SUBCASE("positive path")
  {
    CHECK(5 > 0);
  }

  SUBCASE("non-negative path")
  {
    CHECK(5 >= 0);
  }
}

TEST_CASE("doctest message and exception style")
{
  CHECK_MESSAGE(module::add(2, 2) == 4, "addition should work for simple integers");

  REQUIRE_THROWS_AS([]() { throw std::runtime_error("boom"); }(), std::runtime_error);
}
