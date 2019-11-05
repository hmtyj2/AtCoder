#include <bits/stdc++.h>

using namespace std;

int main(){
	int temp,temp1,temp2,n;
	std::vector<long double> v;
	long double gar,gar1;

	scanf("%d",&n);
	for(temp=0;temp<n;temp++){
		cin >> gar;
		v.push_back(gar);
	}
	sort(v.begin(),v.end());
	gar1=(v[0]+v[1])/2;
	for(temp=2;temp<n;temp++){
		gar1=(gar1+v[temp])/2;
	}
	cout << gar1;
}