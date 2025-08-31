#pragma once
#include <algorithm>
#include <functional>
#include "ISort.hpp"

template <typename T>
class QuickSort : public ISortAlgorithm<T> {
public:
    virtual void sort(T* begin, T* end) override {
        const int size = end-begin;
        if(size == 0) return;
        int pivot = rand() % size;
        int i = -1;
        int cond = 0;
        for(int j=0; j<size; j++){
            if(begin[j] < begin[pivot]){
                i++;
                cond = begin[i];
                begin[i] = begin[j];
                begin[j] = cond;

                if(pivot == i) pivot = j;
                else if(pivot == j) pivot = i;
            }
        }
        i++;
        cond = begin[i];
        begin[i] = begin[pivot];
        begin[pivot] = cond;
        pivot = i;
        sort(begin, begin+pivot);
        sort(begin+pivot+1, end);
    }

    virtual void sort(T *begin, T *end,std::function<bool(const T&, const T&)> comp){
        const int size = end-begin;
        if(size == 0) return;
        int pivot = rand() % size;
        int i = -1;
        int cond = 0;
        for(int j=0; j<size; j++){
            if(comp(begin[j], begin[pivot])){
                i++;
                std::swap(begin[i], begin[j]);
                if(pivot == i) pivot = j;
                else if(pivot == j) pivot = i;
            }
        }
        i++;
        std::swap(begin[i], begin[pivot]);
        pivot = i;
        sort(begin, begin+pivot, comp);
        sort(begin+pivot+1, end, comp);
    }
};