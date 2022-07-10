#include "b.h"
#include <gtest/gtest.h>

TEST(B, add) { ASSERT_EQ(3, B::add(1, 2)); }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
