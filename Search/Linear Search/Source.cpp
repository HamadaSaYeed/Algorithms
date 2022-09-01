// Linear Search in C++

#include <iostream>
using namespace std;

int search(int arr[], int n, int elment) {

    // Going through array sequencially
    for (int i = 0; i < n; i++)

        if (arr[i] == elment && elment <= arr[i])   //  elment <= arr[i] : ãÊÑÊÈå ÈÖíÝ ÇáÔÑØ Ïå Array áæ 

            return i;

    return -1;
}


int main() {

    int arr[] = { 2, 4, 0, 1, 9 };

    int elment = 1;

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, elment);

    (result == -1) ? cout << "Element not found" : cout << "Element found at index : " << result << endl;
}