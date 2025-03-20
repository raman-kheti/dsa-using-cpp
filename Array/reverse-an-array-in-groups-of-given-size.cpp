#include<iostream>
#include <cmath>

using namespace std;

// Reverse an Array in groups of given size
// Example: {4, 3, 2, 1, 8, 7, 6, 5, 10, 9}

void reverseArrayByGroup(int *array, int size, int k) {

    // Static variables to retain values between recursive calls.
    // count → Number of groups to reverse (ceiling of size/k)
    static int count = ceil(size / double(k));
    
    // indexToBeMove → Keeps track of the starting index of the current group
    static int indexToBeMove = 0;

    // Outer loop is unnecessary but harmless here — actual work happens in the while loop.
    for (int i = 0; i < size; i++) {
        int index = indexToBeMove; // Start from the beginning of the current group

        // Reverse the elements in the current group
        // Continue swapping until the group is reversed or we reach the end of the array
        while (index < indexToBeMove + k - 1 && index < size - 1) {
            int tamp = array[index];
            
            // Swap if the next element is greater than the current one
            if (tamp < array[index + 1]) {
                array[index] = array[index + 1];
                array[index + 1] = tamp;
            }

            index++;
        }
    }

    // If there are more groups to reverse, call the function recursively
    if (count != 1) {
        indexToBeMove += k; // Move to the next group
        count--;
        reverseArrayByGroup(array, size, k);
    }
}

int main() {
    // Test array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16};
    
    int k = 3; // Group size (if k > size, it should reverse the whole array)
    
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    // Call the function to reverse in groups
    reverseArrayByGroup(arr, size, k);

    // Output the modified array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
