#include "MyCppTemplate/Public.hpp"
#include <gtest/gtest.h>

TEST(Public, sayHello)
{
  ok::Public p;
  EXPECT_TRUE(p.sayHello());
}
