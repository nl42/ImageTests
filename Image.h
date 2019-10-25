
#ifndef IMAGE_H
#define IMAGE_H

#include <memory>

class Image
{
  public :
    Image()=default;
    Image(unsigned int _width, unsigned _height, unsigned int _channels=3);
    ~Image() noexcept =default;
    Image(const Image &)=default;
    Image & operator=(const Image &)=default;
    Image(Image &&)=default;
    Image & operator=(Image &&)=default;
    unsigned int width() const noexcept;
    unsigned int height() const noexcept;
    unsigned int channels()const noexcept;
    unsigned char* pixels();

private :
    unsigned int m_width=0;
    unsigned int m_height=0;
    unsigned int m_channels=3;
    std::unique_ptr<unsigned char[]> m_pixels;
};

#endif
