#include "Image.h"
#include <gtest/gtest.h>
using namespace ::testing;
// for more details on gtest see here https://github.com/google/googletest/blob/master/googletest/docs/primer.md
// my lecture https://nccastaff.bournemouth.ac.uk/jmacey/PP/slides/testing/slides.html#/
TEST(Image, defaultCtor)
{
    Image i;
    EXPECT_EQ(i.width(), 0);
    EXPECT_EQ(i.height(), 0);
    EXPECT_EQ(i.channels(), 3);
    EXPECT_EQ(i.pixels(), nullptr);
}

TEST(Image, userCtor)
{
    Image i(100,100);
    EXPECT_EQ(i.width(), 100);
    EXPECT_EQ(i.height(), 100);
    EXPECT_EQ(i.channels(), 3);
    EXPECT_NE(i.pixels(), nullptr);
}

TEST(Image, setOriginGetOriginPixel)
{
    Image i(100,100);
    i.setPixel(0, 0, 255, 0, 0); //set pixel to red
    unsigned char r,g,b;
    i.getPixel(0,0,r,g,b);
    EXPECT_EQ(r, 255);
    EXPECT_EQ(g, 0);
    EXPECT_EQ(b, 0);
}

TEST(Image, setOtherGetOriginPixel)
{
    Image i(100,100);
    i.setPixel(32, 76, 255, 255, 255); //set pixel to red
    unsigned char r,g,b;
    i.getPixel(0,0,r,g,b);
    EXPECT_NE(r, 255);
    EXPECT_NE(g, 255);
    EXPECT_NE(b, 255);
}

TEST(Image, setOtherGetOtherPixel)
{
    Image i(100,100);
    i.setPixel(32, 76, 255, 255, 255); //set pixel to red
    unsigned char r,g,b;
    i.getPixel(32,76,r,g,b);
    EXPECT_EQ(r, 255);
    EXPECT_EQ(g, 255);
    EXPECT_EQ(b, 255);
}


