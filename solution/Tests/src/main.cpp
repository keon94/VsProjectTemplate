#include <gmock/gmock.h>
#include <vld.h>

int main(int argc, char** argv) {
    ::testing::InitGoogleMock(&argc,argv);
    RUN_ALL_TESTS();
}