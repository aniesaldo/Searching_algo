//For BinarySearch algo, The array should be in sorted order.
#include <iostream>
#include <vector>

constexpr int notFound=-1;
/**
 * @brief 
 * 
 * @param element - element to be found
 * @param arr - Array where element is to be searched
 * @param size - Size of the array
 * @return int - position of the found element else returns -1
 */
int BinarySearch(int element, const int* arr, int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        int middle=(left+right)/2;
        if(arr[middle]==element){
            //element found
            return middle;
        }
        else if(arr[middle]<element){
            //Search in right half(middle+1..right)
            left=middle+1;
        }
        else if(arr[middle]>element){
            //Search in left half(left..middle-1)
            right=middle-1;
        }
    }
    return notFound;//element not found
}

int main(){
    std::vector<int> v{10,20,30,40,50};
    std::cout<<BinarySearch(40,v.data(),v.size());
    return 0;
}