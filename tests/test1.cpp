#include "gtest/gtest.h"
#include "singleton.h"

TEST(SingletonTest, Creation) {
    Singleton* s1 = Singleton::get();
    Singleton* s2 = Singleton::get();

    EXPECT_EQ(s1, s2);
}
