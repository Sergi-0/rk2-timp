#include "gtest/gtest.h"
#include "singleton.h"

TEST(SingletonTest, Tell) {
    testing::internal::CaptureStdout();
    Singleton::get()->tell();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "This is Singleton.\n");
}
