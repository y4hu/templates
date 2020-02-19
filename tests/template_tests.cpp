#include "gtest/gtest.h"
#include <string>
#include <vector>

using namespace std;

TEST(template_test, first) {
    ASSERT_EQ(13, 13);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
