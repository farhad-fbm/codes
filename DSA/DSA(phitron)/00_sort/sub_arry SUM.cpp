//  sub_arry
/* for n element, 
		sub_arry= nC2 + n
		= n*(n+1)/2

		sub_sequence = 2^n
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}


	//satrt
	int sum=0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			sum += arr[j];
		}
	}
	

	cout<<sum;

	return 0;
}
