#include<iostream>
using namespace std;

//Sort an array in wave form

/*
    Wave Sort Algorithm:
    
    - Arrange elements in a wave-like pattern:
        * Even index (i):  arr[i+1] > arr[i]   ✅ (Next number should be greater)
        * Odd index (i):   arr[i+1] < arr[i]   ✅ (Next number should be smaller)
    
    - Traverse the array and swap adjacent elements where necessary.
    - Ensures a wave-like order in **O(n) time** with **O(1) space**.
    
    Example:
    Input:  {4, 7, 3, 2}
    Output: {4, 7, 2, 3}
*/



void sortArrayInWave(int *arr, int size){

    for (int i = 0; i < size; i+=2){

        if (i>0 && arr[i-1] > arr[i] )
        swap(arr[i], arr[i-1]);

    // If current even element is smaller than next
    if (i<size-1 && arr[i] < arr[i+1] )
        swap(arr[i], arr[i + 1]);

    }
}

int main(){
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArrayInWave(arr, size);

    for (int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
}

//arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5]