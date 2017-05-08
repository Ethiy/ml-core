#pragma once

#include <vector>

#include <ostream>

namespace ml
{
    namespace core
    {
        namespace linalg
        {
            template<typename T, std::size_t height, std::size_t width>
            class Matrix
            {
            public:
                Matrix(void);
                Matrix(Matrix const& other);
                Matrix(Matrix && other);
                ~Matrix(void);

                Matrix & operator =(Matrix const& other) noexcept;
                Matrix & operator =(Matrix && other) noexcept;

                void swap(Matrix & other);

                T& at(std::size_t const& index) noexcept;
                T const& at(std::size_t const& index) const noexcept;
                T& operator [](std::size_t const& index);
                T const& operator [](std::size_t const& index) const;
                T* data(void) noexcept;
                T const* data(void) const noexcept;

                using iterator = std::array<typename T, height * width>::iterator;
                using reverse_iterator = std::array<typename T, height * width>::reverse_iterator;
                using const_iterator = std::array<typename T, height * width>::const_iterator;
                using const_reverse_iterator = std::array<typename T, height * width>::const_reverse_iterator;

                iterator begin(void) noexcept;
                const_iterator begin(void) const noexcept;
                const_iterator cbegin(void) const noexcept;
                iterator rbegin(void) noexcept;
                const_iterator rbegin(void) const noexcept;
                const_iterator crbegin(void) const noexcept;
                iterator end(void) noexcept;
                const_iterator end(void) const noexcept;
                const_iterator cend(void) const noexcept;
                iterator rend(void) noexcept;
                const_iterator rend(void) const noexcept;
                const_iterator crend(void) const noexcept;
            private:
                std::array<T, height * width> _array;

                friend std::ostream & operator <<(std::ostream & os, Matrix const& matrix);
            };

            template<typename T, std::size_t height, std::size_t width>
            void swap(Matrix & lhs, Matrix & rhs);
        }
    }
}
