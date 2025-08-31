#pragma once
#include <functional>

template <typename T>
class ISortAlgorithm{
public:
    virtual void sort(T *begin, T *end) = 0;
    virtual void sort(T *begin, T *end,std::function<bool(const T&, const T&)> comp) = 0;

    ~ISortAlgorithm() = default;
};