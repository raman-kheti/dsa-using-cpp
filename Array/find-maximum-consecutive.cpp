#include<iostream>
using namespace std;

//Maximum consecutive one’s (or zeros) in a binary array

int main()
{
    int binaryArray[] = {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 ,1, 1, 1, 1, 1, 1, 1, 1};
    int arrayLength = sizeof(binaryArray) / sizeof(binaryArray[0]);

    int maximum = 0;
    int count = 0;

    for (int i = 0; i < arrayLength; i++){

        if(binaryArray[i] == 1){
            count++;
        }
        else
        {
            if(count >= maximum){
                maximum = count;
            }
            count = 0;
        }

        if (arrayLength -1 == i && count >= maximum){
            maximum = count;
        }
    }
    cout << "Maximum consecutive 1 is: " << maximum << endl;
}