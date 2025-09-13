#include <gtest/gtest.h>
#include "../include/lab1.h"

TEST(EliminateUnsetBitsTest, BasicTestSet)
{
    ASSERT_EQ(elimenate_unset_bits("1101010101010101"), 511);
}

TEST(EliminateUnsetBitsTest, BasicTestSet2)
{
    ASSERT_EQ(elimenate_unset_bits("11010101010101"), 255);
}

TEST(EliminateUnsetBitsTest, BasicTestSet3)
{
    ASSERT_EQ(elimenate_unset_bits("111"), 7);
}

TEST(EliminateUnsetBitsTest, BasicTestSet4)
{
    ASSERT_EQ(elimenate_unset_bits("1000000"), 1);
}

TEST(EliminateUnsetBitsTest, BasicTestSet5)
{
    ASSERT_EQ(elimenate_unset_bits("000"), 0);
}

TEST(EliminateUnsetBitsTest, EmptyString)
{
    ASSERT_EQ(elimenate_unset_bits(""), 0);
}

TEST(EliminateUnsetBitsTest, OnlyOnes)
{
    ASSERT_EQ(elimenate_unset_bits("11111111"), 255);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}