// C++ program for implementation of Heap Sort

#include <iostream>
using namespace std;



// heap ØÑíŞå áÖÈØ ŞæÇÚÏ
void heapify(int arr[], int N, int i) // heapify :-->  åí ØÑíå áÇÍĞİ ÇßÈÑ ÚäÕÑ ãä ÇáŞÇÆãå æÊÑÊíÈå
{

	// Initialize largest as root
	int max = i;


	int l = 2 * i + 1;  // left = 2*i + 1


	int r = 2 * i + 2;  // right = 2*i + 2


	if (l < N && arr[l] > arr[max])  // parent root ÇßÈÑ ãä child áæ
		max = l;


	if (r < N && arr[r] > arr[max])
		max = r;


	if (max != i) {  // parent    ÇĞÇ ßÇä ÇáÇßÈÑ áíÓ 

		swap(arr[i], arr[max]);


		heapify(arr, N, max);
	}
}





void heapSort(int arr[], int N)
{


	for (int i = N / 2 - 1; i >= 0; i--)  //  "0"   Array  ÊÑÊíÈ     

		heapify(arr, N, i);


	for (int i = N - 1; i > 0; i--) {

		swap(arr[0], arr[i]); // Çæá ÚäÕÑ åäÈÏáå ãÚ ÇÎÑ ÚäÕÑ


		heapify(arr, i, 0); // ãæŞÊÇ root ÇÓÊÏÚÇÁ ÇßÈÑ Şíãå Çáì
	}
}







void printArray(int arr[], int N)
{
	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
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

	heapSort(arr, size);

	cout << "Array is sorted : ";

	printArray(arr, size); // Array is sorted : 3 4 5 7 8 

	return 0;
}
