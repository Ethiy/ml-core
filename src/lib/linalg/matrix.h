#pragma once

#include <vector>
#include <initializer_list>

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
                ~Matrix(void);

                T& at(std::size_t const& index) noexcept;
                T const& at(std::size_t const& index) const noexcept;
                T& operator [](std::size_t const& index);
                T const& operator [](std::size_t const& index) const;
                T* data(void) noexcept;
                T const* data(void) const noexcept;

                using iterator = std::array<typename T, height * width>::iterator;
                using const_iterator = std::array<typename T, height * width>::const_iterator;

                iterator begin(void) noexcept;
                const_iterator begin(void) const noexcept;
                const_iterator cbegin(void) const noexcept;
                iterator end(void) noexcept;
                const_iterator end(void) const noexcept;
                const_iterator cend(void) const noexcept;
            private:
                std::array<T, height * width> _array;
            };
        }
    }
}
