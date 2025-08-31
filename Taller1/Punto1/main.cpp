#include "BubbleSort.hpp"
#include "QuickSort.hpp"
#include "InsertionSort.hpp"
#include <array>
#include <string>

int main(){
    std::array<int, 9> arr{2,55,7,3,1,0,-20,-19,80};
    InsertionSort<int> alg;
    alg.sort(arr.begin(), arr.end(),[](int a, int b){
        return a>b;
    });
    // alg.sort(arr.begin(), arr.end());
    for(auto i: arr){
        std::cout<<i<<", ";
    }
    return 0;
}