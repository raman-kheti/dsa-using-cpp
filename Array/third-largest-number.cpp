#include <iostream>
using namespace std;

// Third Largest Number  

int main() {
    int arr[7] = {10,18,16,9,67,8,9};
    int length =sizeof(arr)/ sizeof(arr[0]);
    int first = 0;
    int second = 0;
    int third = 0;
    
    for(int i = 0; i < length; i++){
        if(first < arr[i]){
            third = second;
            second = first;
            first = arr[i];
        }else if (arr[i] > second && arr[i] != first){
            third = second;
            second = arr[i];
        }else if (arr[i] > third && arr[i] != second)
            third = arr[i];
    }

 cout << "Third Largest Number is: "  << third << endl;   
    return 0;
}