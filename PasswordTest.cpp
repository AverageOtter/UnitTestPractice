/**
 *
 * Unit Tests for Password class
 **/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
protected:
	PracticeTest() {}		   // constructor runs before each test
	virtual ~PracticeTest() {} // destructor cleans up after tests
	virtual void SetUp() {}	   // sets up before each test (after constructor)
	virtual void TearDown() {} // clean up after each test, (before destructor)
};

TEST(PasswordTest, smoke_test)
{
	ASSERT_TRUE(1 == 1);
};
TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
};
TEST(PasswordTest, lower3)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aaafafaq");
	ASSERT_EQ(3, actual);
};
TEST(PasswordTest, upper3)
{
	Password my_password;
	int actual = my_password.count_leading_characters("BBBaseB");
	ASSERT_EQ(3, actual);
};
TEST(PasswordTest, mixedcase)
{
	Password ps;
	EXPECT_TRUE(ps.has_mixed_case("aA"));
};
TEST(PasswordTest, empty)
{
	Password ps;
	EXPECT_FALSE(ps.has_mixed_case(""));
};
TEST(PasswordTest, CaptialOnly)
{
	Password ps;
	EXPECT_FALSE(ps.has_mixed_case("AA"));
};
TEST(PasswordTest, LowerCaseOnly)
{
	Password ps;
	EXPECT_FALSE(ps.has_mixed_case("aa"));
};
TEST(PasswordTest, Chat10)
{
	Password ps;
	EXPECT_TRUE(ps.has_mixed_case("AsfaA"));
};
