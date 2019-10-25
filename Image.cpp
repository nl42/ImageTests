
#include "Image.h"

unsigned Image::width() const noexcept {
    return m_width;
}

unsigned Image::height() const noexcept {
    return m_height;
}

unsigned Image::channels() const noexcept {
    return m_channels;
}
