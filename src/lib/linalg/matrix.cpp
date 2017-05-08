#include "matrix.h"

namespace ml
{
    namespace core
    {
        namespace linalg
        {
            template<typename T, std::size_t height, std::size_t width>
            Matrix::Matrix(void)
            {}
            template<typename T, std::size_t height, std::size_t width>
            Matrix::~Matrix(void)
            {}

            template<typename T, std::size_t height, std::size_t width>
            T& Matrix::at(std::size_t const& index) noexcept
            {
                return _array.at(index);
            }
            template<typename T, std::size_t height, std::size_t width>
            T const& Matrix::at(std::size_t const& index) const noexcept
            {
                return _array.at(index);
            }
            template<typename T, std::size_t height, std::size_t width>
            T& Matrix::operator [](std::size_t const& index)
            {
                return _array[index];
            }
            template<typename T, std::size_t height, std::size_t width>
            T const& Matrix::operator [](std::size_t const& index) const
            {
                return _array[index];
            }
            template<typename T, std::size_t height, std::size_t width>
            T* Matrix::data(void) noexcept
            {
                return _array.data();
            }
            template<typename T, std::size_t height, std::size_t width>
            T const* Matrix::data(void) const noexcept
            {
                return _array.data();
            }

            template<typename T, std::size_t height, std::size_t width>
            Matrix::iterator Matrix::begin(void) noexcept
            {
                return _array.begin();
            }
            template<typename T, std::size_t height, std::size_t width>
            Matrix::const_iterator Matrix::begin(void) const noexcept
            {
                return _array.begin();
            }
            template<typename T, std::size_t height, std::size_t width>
            Matrix::const_iterator Matrix::cbegin(void) const noexcept
            {
                return _array.cbegin();
            }
            template<typename T, std::size_t height, std::size_t width>
            Matrix::iterator Matrix::end(void) noexcept
            {
                return _array.end();
            }
            template<typename T, std::size_t height, std::size_t width>
            Matrix::const_iterator Matrix::end(void) const noexcept
            {
                return _array.end();
            }
            template<typename T, std::size_t height, std::size_t width>
            Matrix::const_iterator Matrix::cend(void) const noexcept
            {
                return _array.end();
            }
        }
    }
}