#pragma once

#include <valarray>

#include <ostream>

namespace ml
{
    namespace core
    {
        std::size_t sum(std::size_t s)
        {
            return s;
        }
        std::size_t sum(std::size_t s, std::size_t... sizes)
        {
            return s + sum(sizes...);
        }

        namespace linalg
        {
            template<typename T, std::size_t... sizes>
            class MultiArray
            {
            public:
                MultiArray(void);
                MultiArray(MultiArray const& other);
                MultiArray(MultiArray && other);
                ~MultiArray(void);

                MultiArray & operator =(MultiArray const& other) noexcept;
                MultiArray & operator =(MultiArray && other) noexcept;

                void swap(MultiArray & other);

                T& at(std::size_t const& index) noexcept;
                T const& at(std::size_t const& index) const noexcept;
                T& operator [](std::size_t const& index);
                T const& operator [](std::size_t const& index) const;
                T* data(void) noexcept;
                T const* data(void) const noexcept;

                using iterator = std::valarray<typename T, sum(sizes...)>::iterator;
                using reverse_iterator = std::valarray<typename T, sum(sizes...)>::reverse_iterator;
                using const_iterator = std::valarray<typename T, sum(sizes...)>::const_iterator;
                using const_reverse_iterator = std::valarray<typename T, sum(sizes...)>::const_reverse_iterator;

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
                std::valarray<T, sum(sizes...)> _array;

                friend std::ostream & operator <<(std::ostream & os, MultiArray const& MultiArray);
            };

            template<typename T, std::size_t height, std::size_t width>
            void swap(MultiArray & lhs, MultiArray & rhs);
        }
    }
}
