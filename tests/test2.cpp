#include "gtest/gtest.h"
#include "singleton.h"

TEST(SingletonTest, Restart) {
    Singleton::restart();
    Singleton* s = Singleton::get();

    EXPECT_NE(s, nullptr);
}
