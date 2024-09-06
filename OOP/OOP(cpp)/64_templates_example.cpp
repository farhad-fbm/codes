#include <bits/stdc++.h>
using namespace std;

template <class T>
class vec{
    public:
    T *arr;
    int size;
    vec(int m){
        size = m;
        arr = new T[size];  //create arr with size
    }
    T dotProduct( vec &v){
        T d=0;
        for(int i=0; i<size; i++){
            d+= this->arr[i] * v.arr[i];
        }
        return d;
    }
};


int main() {
    vec<int> v1(2);
    v1.arr[0]=2;
    v1.arr[1]=4;
    vec<int> v2(2);
    v2.arr[0]=6;
    v2.arr[1]=3;
    cout<<v1.dotProduct(v2)<<endl;  //arg (& dont need)
   
    vec<float> v11(2);
    v11.arr[0]=2.0;
    v11.arr[1]=4.5;
    vec<float> v22(2);
    v22.arr[0]=6.0;
    v22.arr[1]=3.0;
    cout<<v11.dotProduct(v22)<<endl;  //arg (& dont need)

    return 0;
}