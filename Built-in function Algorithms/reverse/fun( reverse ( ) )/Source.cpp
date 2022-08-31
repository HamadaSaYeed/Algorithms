#include <algorithm>  
#include <iostream>  
#include <string>  

using namespace std;

int main()
{
    string str = "Hello Myself Nikita";
    cout << "Before Reverse : " << str << endl; // Hello Myself Nikita


    reverse(str.begin(), str.end()); // ÊÚßÓ ÇáäÕ
    cout << "After Reverse  : " << str << endl; // atikiN flesyM olleH

    return 0;
}