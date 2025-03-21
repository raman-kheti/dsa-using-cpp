#include<iostream>
#include <cmath>

using namespace std;


void rotateArrayCounterClockwise(int *array, int size, int k) {

    if(k > size-1)
        return;
    for (int i = 0; i < k; i++)
    { // Move next until reach to the k

        for (int j = 0; j < size - 1; j++)
        {                            // Swipe the index to n -1           // Do not need to check grater number since we are not sorting just rotating the array
            int tamp = array[j];     // Store the index value as tamp
            array[j] = array[j + 1]; // Assign the index + 1 value into index
            array[j + 1] = tamp;     // Assign tamp value into index + 1
        }
    }
}


int main() {
    // Test array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16};
    
    int k = 15;
    
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    // Call the function to reverse in groups
    rotateArrayCounterClockwise(arr, size, k);

    // Output the modified array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
