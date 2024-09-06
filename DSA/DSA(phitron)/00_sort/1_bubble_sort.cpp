//bubbleSORT
/* check order between two element */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int count=1; count<n; count++){
        for(int i=0; i<n-count; i++){
            if(arr[i] > arr[i + 1]){
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
    return 0;
}