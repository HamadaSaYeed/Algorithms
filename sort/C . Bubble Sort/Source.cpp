
/*

 Bubble Sort :   
              �� ����� ��� ���� ���� �����   swap   ������   Array  �� ����� ����� ���� ��� �� 

*/

// C++ program for implementation 
// of Bubble sort
#include <iostream>
#include <algorithm>

using namespace std;



void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)

        for (int j = 0; j < n - i - 1; j++) // start end
                                         
            //������ �� �����  Array  ��� 
            if (arr[j] > arr[j + 1]) //�� ����� ���� �� ����� ��� ����    

                swap(arr[j], arr[j + 1]); // swap ���� 
                     //  9   >-<   3 
                     //  3         9

}



void print_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;
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

    bubbleSort(arr, size);

    cout << "Array is sorted : ";

    print_Array(arr, size); // Array is sorted :  3 4 5 7 8 

    return 0;
}

// This code is contributed by rathbhupendra