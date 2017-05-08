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
            Matrix::Matrix(Matrix const& other)
                : _array(other._array)
            {}
            template<typename T, std::size_t height, std::size_t width>
            Matrix::Matrix(Matrix && other)
                : _array(std::move(other._array))
            {}
            template<typename T, std::size_t height, std::size_t width>
            Matrix::~Matrix(void)
            {}

            template<typename T, std::size_t height, std::size_t width>
            Matrix & operator =(Matrix const& other) noexcept
            {
                _array = other._array;

                return *this;
            }
            template<typename T, std::size_t height, std::size_t width>
            Matrix & operator =(Matrix && other) noexcept
            {
                _array = std::move(other._array);

                return *this;
            }
            template<typename T, std::size_t height, std::size_t width>
            void swap(Matrix & other)
            {
                using std::swap;
                swap(_array, other._array);
            }

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

            template<typename T, std::size_t height, std::size_t width>
            friend std::ostream & operator <<(std::ostream & os, Matrix const& matrix)
            {
                os << "[" << std::endl;
                for(std::size_t row(0); row != height; ++row)
                {
                    os << "[";
                    for(std::size_t col(0); col != width; ++col)
                        os << matrix.at(row * width + col ) << ", ";
                    os << matrix.at((row + 1) * width - 1 ) << "]," << std::endl;
                }
                os << "]" << std::endl;
                return os;
            }

            template<typename T, std::size_t height, std::size_t width>
            void swap(Matrix & lhs, Matrix & rhs)
            {
                lhs.swap(rhs);
            }
        }
    }
}