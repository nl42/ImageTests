
#include "Image.h"

Image::Image(unsigned int _width, unsigned _height, unsigned int _channels)
{
    m_width = _width;
    m_height = _height;
    m_pixels = std::make_unique<unsigned char[]>(m_width * m_height + m_channels);
}


unsigned Image::width() const noexcept {
    return m_width;
}

unsigned Image::height() const noexcept {
    return m_height;
}

unsigned Image::channels() const noexcept {
    return m_channels;
}

unsigned char* Image::pixels() {
    return m_pixels.get();
}


