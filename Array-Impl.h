#ifndef CUBBYMATH_ARRAY_IMPL_H
#define CUBBYMATH_ARRAY_IMPL_H

#include <cassert>

namespace CubbyMath
{
    template <typename T>
    Array<T>::Array()
    {
        // Do Nothing!
    }

    template <typename T>
    void Array<T>::Set(const T& value)
    {
        for (auto& v : m_data)
        {
            v = value;
        }
    }

    template <typename T>
	void Array<T>::Set(const Array& other)
	{
        std::copy(other.m_data.begin(), other.m_data.end(), m_data.begin());
	}

    template <typename T>
	void Array<T>::Clear()
	{
		for (auto& v : m_data)
        {
            v = T();
        }
	}

    template <typename T>
	T& Array<T>::At(size_t i)
	{
		return m_data[i];
	}

    template <typename T>
    const T& Array<T>::At(size_t i) const
    {
        return m_data[i];
    }

    template <typename T>
	size_t Array<T>::size() const
	{
		return m_data.size();
	}

    template <typename T>
	T* Array<T>::data()
	{
		return m_data.data();
	}

	template <typename T>
	const T* Array<T>::data() const
	{
		return m_data.data();
	}

    template <typename T>
	void Array<T>::Swap(Array& other)
	{
		std::swap(other.m_data, m_data);
	}

    template <typename T>
    T& Array<T>::operator[](size_t i)
    {
        return m_data[i];
    }

    template <typename T>
	const T& Array<T>::operator[](size_t i) const
	{
		return m_data[i];
	}

    template <typename T>
	Array<T>& Array<T>::operator=(const T& value)
	{
		Set(value);
		return *this;
	}

    template <typename T>
	Array<T>& Array<T>::operator=(const Array& other)
	{
		Set(other);
		return *this;
	}

}

#endif
