#include "BubbleSort.hpp"
#include "QuickSort.hpp"
#include "InsertionSort.hpp"
#include <array>
#include <string>

void printArr(const std::array<int, 9>& arr){
    for(int e: arr){
        std::cout<<e<<", ";
    }
    std::cout<<std::endl;
}

int main(){
    std::array<int, 9> arr1{2,55,7,3,1,0,-20,-19,80};
    std::array<int, 9> arr2{2,55,7,3,1,0,-20,-19,80};
    std::array<int, 9> arr3{2,55,7,3,1,0,-20,-19,80};
    InsertionSort<int> insertion;
    BubbleSort<int> bubble;
    QuickSort<int> quick;
    insertion.sort(arr1.begin(), arr1.end(),[](const int& a, const int& b){
        return a>b;});
    bubble.sort(arr2.begin(), arr2.end(), [](const int& a, const int& b){
        return a>b;
    });
    quick.sort(arr3.begin(), arr3.end(),[](const int& a, const int& b){
        return a<b;});
    printArr(arr1);
    printArr(arr2);
    printArr(arr3);
    return 0;
}