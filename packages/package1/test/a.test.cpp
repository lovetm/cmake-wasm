#include "a.h"
#include <gtest/gtest.h>

TEST(A, add) { ASSERT_EQ(3, A::add(1, 2)); }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
