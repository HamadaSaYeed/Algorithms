
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int countere;
    cin >> countere;

    int flag = 0;

    while (countere--)
    {
        int n;
        cin >> n;

        int array[n];

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }


        for (int i = 0; i < n; i++)
        {
            cout << *max_element(array, array + n) << endl;   // print maxuime numper
            break;
        }
    }

    return 0;
}
