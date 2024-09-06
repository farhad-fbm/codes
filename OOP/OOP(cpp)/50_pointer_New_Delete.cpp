#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=4; 
    int* ptr=&a;
    cout<<a<<"="<<*ptr<<endl; // a == *ptr
    cout<<&a<<"="<<ptr<<endl; //&a == ptr


    int* arr= new int[2];   //******
    arr[0] = 3;
    *(arr+1) = 34;         //***** assign by pointer

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;


    delete[] arr;         //delete the arry
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    return 0;
}