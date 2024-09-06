
//sort_insertion

/* placed the correct positon 
		5 2 8 3 6
	=>  2 3 (5) 8 6

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;cin>>n;int arr[n];
	for(int i=0; i<n; i++)cin>>arr[i];



	// tmp positioning 
	for(int i=1; i<n; i++){
		int tmp=arr[i];
		int j = i-1;
		while((arr[j] > tmp) && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=tmp;
	}






	for(int i=0; i<n; i++)cout<<arr[i]<<' ';
	return 0;
}
