#ifndef CUBBYMATH_ARRAY_H
#define CUBBYMATH_ARRAY_H

#include <array>

namespace CubbyMath
{
    template <typename T>
    class Array final
    {
    public:
        Array();

        void Set(const T& value);

        void Set(const Array& other);

        void Clear();

        T& At(size_t i);

        const T& At(size_t i) const;

        size_t size() const;

        T* data();

        const T* data() const;

        void Swap(Array& other);

        T& operator[](size_t i);

        const T& operator[](size_t i) const;

        Array<T>& operator=(const T& value);

	    Array<T>& operator=(const Array& other);


    private:
        std::array<T, 1> m_data;
    };
}

#include <C:\Users\zxcvber\Desktop\CMake\source\Array-Impl.h>
#endif
