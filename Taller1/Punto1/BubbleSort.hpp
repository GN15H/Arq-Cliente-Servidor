#pragma once
#include "ISort.hpp"
#include <iostream>
#include <functional>

template <typename T>
class BubbleSort : public ISortAlgorithm<T> {
public:
    virtual void sort(T* begin, T* end) override{
        const int size = end-begin;
        int cond=0;
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-1; j++){
                if(*(begin+j)>*(begin+j+1)){
                    cond = *(begin+j);
                    *(begin+j) = *(begin+j+1);
                    *(begin+j+1) = cond;
                }
            }
        }
    }

    virtual void sort(T* begin, T* end, std::function<bool(const T&, const T&)> comp) override{
        const int size = end-begin;
        int cond=0;
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-1; j++){
                if(comp(0,1)){
                    if(!comp(*(begin+j),*(begin+j+1))){
                        cond = *(begin+j);
                        *(begin+j) = *(begin+j+1);
                        *(begin+j+1) = cond;
                    }
                }else{
                    if(!comp(begin[j], begin[j+1])){
                        cond = *(begin+j+1);
                        *(begin+j+1) = *(begin+j);
                        *(begin+j) = cond;
                    }
                }

            }
        }
    }
};