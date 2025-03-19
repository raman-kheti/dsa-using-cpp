#include <iostream>
using namespace std;

int moveToEnd[] = {0, 23, 0, 0, 0, 0, 0, 6, 0, 0, 0, 43, 9, 8, 7, 0};

int main()
{

    int length = sizeof(moveToEnd) / sizeof(moveToEnd[0]);

    for (int element = 0; element < length; element++)
    {
        if (moveToEnd[element] == 0)
        {
            int latestIndex = element;
            while (moveToEnd[latestIndex] == 0 && latestIndex < length - 1)   // Get the non-zero index for sequence order.
            {
                latestIndex++;
            }
            int tamp = moveToEnd[element];                                  // Store the 0 in tamp variable
            moveToEnd[element] = moveToEnd[latestIndex];                    // Store the non zero value in the 0 element
            moveToEnd[latestIndex] = tamp;                                  // Store the 0 in the non zero element
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << "Final result: " << moveToEnd[i] << endl;
    }

    return 0;
}