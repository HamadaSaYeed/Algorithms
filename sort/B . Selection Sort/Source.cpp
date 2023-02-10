
/*

	Selection Sort :
	               Ê‰»œ·Â „⁄ «·⁄‰’— «·Ì »‰ Õﬁﬁ „‰Â   Array   ÿ—ÌﬁÂ ··⁄ÀÊ— »‘ﬂ· „ ﬂ—— ⁄·Ì «’€— ﬁÌ„Â ··

*/


// C++ program for implementation of
// selection sort
#include <iostream>
#include <algorithm>

using namespace std;

void selection_sort(int arr[], int n)
{
    int min_value;

    for (int i = 0; i < n - 1; i++)
    {
        min_value = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_value]) //   «ﬂ»— „‰ ﬁ«∆„Â «·«⁄œ«œ «·„œŒ·Â  arr[min_value] ·Ê
            {
                min_value = j;  // «ﬁ· ﬁÌ„Â Ì”«ÊÌ ﬁ«∆„Â «·«⁄œ«œ «·„œŒ·Â
            }
        }
        swap(arr[i], arr[min_value]);
    }


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
    cout << "Enter a size of array : "; // 5
    cin >> size; 

    int arr[size]; // arr [5]


    // input Array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // 8 3 4 7 5
    }

    selection_sort(arr, size);
   
    cout << "Array is sorted : ";
   
    print_Array(arr, size); // Array is sorted :  3 4 5 7 8 

    return 0;
}
// This is code is contributed by rathbhupendra




/*
   <64>    	   25   	   12   	   22   	  (11)    // low numper == 11    

   (11)   	   25   	   12   	   22   	  <64>

	11   	   25   	   12   	   22   	   64

	11   	   12   	   25   	   22   	   64

	11   	   12   	   25   	   22   	   64

	11   	   12   	   22   	   25   	   64

*/
