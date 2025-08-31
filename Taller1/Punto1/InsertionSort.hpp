#pragma once
#include <algorithm>
#include "ISort.hpp"

template <typename T>
class InsertionSort : public ISortAlgorithm<T>{
public:

    virtual void sort(T* begin, T* end) override {
        const int size = end-begin;
        int insertElement = 0;
        for(int i=1; i<size; i++){
            insertElement = i;
            for(int j=i-1; j>=0; j--){
                if(begin[insertElement] < begin[j]){
                    std::swap(begin[insertElement], begin[j]);
                    insertElement = j;
                }
                
            }
        }
    }
    virtual void sort(T* begin, T* end, std::function<bool(const T&, const T&)> comp) override {
        const int size = end-begin;
        int insertElement = 0;
        for(int i=1; i<size; i++){
            insertElement = i;
            for(int j=i-1; j>=0; j--){
                if(comp(begin[insertElement], begin[j])){
                    std::swap(begin[insertElement], begin[j]);
                    insertElement = j;
                }
                
            }
        }
    }
};