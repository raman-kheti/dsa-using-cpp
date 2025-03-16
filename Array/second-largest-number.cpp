#include <iostream>
using namespace std;

// Find Second Largest Numner 

int main() {
    int arr[7] = {10,18,16,9,67,8,9};
    int length =sizeof(arr)/ sizeof(arr[0]);
    int first = 0;
    int second = 0;
    
    for(int i = 0; i < length; i++){
        if(first < arr[i]){
            second = first;
            first = arr[i];
        }else if (arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    
    cout << "Second Largest Numner is:  " << second << endl;
    
    return 0;
}