
/*

    insertion sort : 
                    ·Ê ·ﬁÌ  ⁄‰’— «ﬁ· „‰ «·⁄‰’— «·Ì ﬁ»·Â «ﬁ«—‰Â »«·⁄‰’— «·ﬁ»· «·Ï ﬁ»·Â
    Ex:
                    2         5     <-( 1 )
                    
                    2     <-( 1 )       5
                    
                    1         2         5


*/

// C++ program for insertion sort

#include <iostream>
#include <algorithm>

using namespace std;



void insertionSort(int arr[], int n)
{

                                  // 0   1   2   3   4   5   6 
    for (int i = 1; i < n; i++) //  80 | 90  60  30  50  70  40
    {               
                   // arr [1]
        int key = arr[i]; // 90


        int j = i - 1; // j = (1 - 1) = 0


        while (j >= 0 && arr[j] > key)  // arr[80] > 90    |     «⁄„· ‘Ì›   arr[80] > 90 ·Ê 
        {
            arr[j + 1] = arr[j];

            j -= 1;
        }

        arr[j + 1] = key;  // 90
        //  0 + 1  = 1 index
    }
}



void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";

    cout << endl;
}



int main()
{
    int size;
    cout << "Enter a size of array : ";
    cin >> size; // 5

    int arr[size]; // arr [5]


    // input Array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // 8 3 4 7 5
    }

    insertionSort(arr, size);

    cout << "Array is sorted : ";


    printArray(arr, size); // Array is sorted :  3 4 5 7 8 

    return 0;
}
// This is code is contributed by rathbhupendra