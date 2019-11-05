#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,temp,temp1;
	int A[1000];
	long double total,total1;

	scanf("%d",&N);
	for(temp=0;temp<N;temp++){
		cin >> A[temp];
	}
	for(temp=0,total=0;temp<N;temp++){
		total+=(1/(long double)A[temp]);
	}
	total1=1/total;
	cout << total1;
}