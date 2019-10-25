
#ifndef IMAGE_H
#define IMAGE_H
class Image
{
  public :
    Image()=default;
    ~Image() noexcept =default;
    Image(const Image &)=default;
    Image & operator=(const Image &)=default;
    Image(Image &&)=default;
    Image & operator=(Image &&)=default;
    unsigned int width() const noexcept;
    unsigned int height() const noexcept;
    unsigned int channels()const noexcept;

private :
    unsigned int m_width=0;
    unsigned int m_height=0;
    unsigned int m_channels=3;
};

#endif
