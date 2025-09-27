#include <gtest/gtest.h>
#include "bracket.h"

TEST(BracketTest, EmptyString) {
    EXPECT_TRUE(isValidParentheses(""));
}

TEST(BracketTest, SimpleValid) {
    EXPECT_TRUE(isValidParentheses("()"));
    EXPECT_TRUE(isValidParentheses("[]"));
    EXPECT_TRUE(isValidParentheses("{}"));
}

TEST(BracketTest, MixedValid) {
    EXPECT_TRUE(isValidParentheses("()[]{}"));
    EXPECT_TRUE(isValidParentheses("({})[()]"));
}

TEST(BracketTest, NestedValid) {
    EXPECT_TRUE(isValidParentheses("({[]})"));
    EXPECT_TRUE(isValidParentheses("{[()]}"));
}

TEST(BracketTest, InvalidUnclosed) {
    EXPECT_FALSE(isValidParentheses("("));
    EXPECT_FALSE(isValidParentheses("["));
    EXPECT_FALSE(isValidParentheses("{"));
}

TEST(BracketTest, InvalidUnopened) {
    EXPECT_FALSE(isValidParentheses(")"));
    EXPECT_FALSE(isValidParentheses("]"));
    EXPECT_FALSE(isValidParentheses("}"));
}

TEST(BracketTest, InvalidOrder) {
    EXPECT_FALSE(isValidParentheses(")("));
    EXPECT_FALSE(isValidParentheses("]["));
    EXPECT_FALSE(isValidParentheses("}{"));
}

TEST(BracketTest, InvalidMismatch) {
    EXPECT_FALSE(isValidParentheses("(]"));
    EXPECT_FALSE(isValidParentheses("[)"));
    EXPECT_FALSE(isValidParentheses("{]"));
}

TEST(BracketTest, ComplexInvalid) {
    EXPECT_FALSE(isValidParentheses("([)]"));
    EXPECT_FALSE(isValidParentheses("{(})"));
}


int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
