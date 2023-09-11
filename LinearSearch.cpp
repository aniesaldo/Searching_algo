#include <iostream>

constexpr int notFound=-1;
/**
 * @brief 
 * 
 * @param element - element to be found
 * @param arr - Array where element is to be searched
 * @param size - Size of the array
 * @return int - position of the found element else returns -1
 */
int Search(int element, const int* arr , int size){
    for(int i=0;i<size;i++){
        if(arr[i]==element)
            return i;
    }
    return notFound;
}

int main(){
    int arr[]={10, 20, 30, 40, 50};
    std::cout<<Search(2, arr, 5)<<std::endl;
    //returns -1 if not found else returns index
    //of the position.
}