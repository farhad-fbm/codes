#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot=arr[e];
    int pidx=s;
    for(int i=s; i< e; i++){
        if(arr[i] < pivot){
            swap(arr[pidx++],arr[i]);
            // pidx++;
        }
    }
    swap(arr[pidx],arr[e]);
    return pidx;
}
void QuickSort(int arr[], int s, int e){
    if(s>=e) return;
    int pidx = partition(arr, s, e);
    QuickSort(arr, s, pidx-1);
    QuickSort(arr, pidx+1, e);
}
int main(){
    int n; cin>>n; int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    QuickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)cout<<arr[i]<<' ';
    return 0;
}