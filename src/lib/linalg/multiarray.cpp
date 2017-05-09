#include "multiarray.h"

#include <stdexcept>

namespace ml
{
    namespace core
    {
        namespace linalg
        {
            template<typename T, std::size_t... sizes>
            MultiArray::MultiArray(void)
                : _array((... * sizes), T(0))
            {}
            template<typename T, std::size_t... sizes>
            MultiArray::MultiArray(std::initializer_list<T> init)
                : _array(init)
            {
                if(init.size() <= (... * sizes))
                    throw std::overflow_error("The initializer list does not have the required size!");
            }
            template<typename T, std::size_t... sizes>
            MultiArray::MultiArray(MultiArray const& other)
                : _array(other._array)
            {}
            template<typename T, std::size_t... sizes>
            MultiArray::MultiArray(MultiArray && other)
                : _array(std::move(other._array))
            {}
            template<typename T, std::size_t... sizes>
            MultiArray::~MultiArray(void)
            {}
        }
    }
}
