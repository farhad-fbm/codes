/*
//merged[x]=arr[i1];
// x++; i1++;
merged[x++]=arr[i1++];

*/

#include<bits/stdc++.h>
using namespace std;

void conquer(int arr[], int s, int m, int e){
    int merged[e-s+1];
    int i1=s;
    int i2=m+1;
    int x=0;
    while(i1<=m && i2<=e){
        if(arr[i1] <= arr[i2]){
            merged[x++]=arr[i1++];
        }
        else{
            merged[x++]=arr[i2++];
        }
    }
    while(i1<=m){
        merged[x++]=arr[i1++];
    }
    while(i2<=e){
        merged[x++]=arr[i2++];
    }
    for(int i=0, j=s; i<(e-s+1); i++, j++){
        arr[j]=merged[i];
    }
}
void divide(int arr[], int s, int e){
    if(s>=e) return;
    int m= s+(e-s)/2;
    divide(arr, s, m);
    divide(arr, m+1, e);
    conquer(arr, s, m, e);
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    divide(arr, 0, n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

}