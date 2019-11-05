#include <bits/stdc++.h>

using namespace std;

int N,M;
std::vector<pair<int,int>> v;

int main(){
	int temp,temp1,temp2;
	int today;
	int index;
	int maxi;
	int total;

	scanf("%d %d",&N,&M);
	for(temp=0;temp<N;temp++){
		cin >> temp1 >> temp2;
		v.push_back(make_pair(temp1,temp2));
	}
	sort(v.begin(),v.end());
	
	for(today=1;today<=M;today++){
		for(temp=0,maxi=0;temp<N;temp++){
			if(today>=v[temp].first){
				if(v[temp].second>=maxi){
					maxi=v[temp].second;
					index=temp;
				}
			}
			else{
				break;
			}
		}
		total+=maxi;
		v[index].second=0;
	}
	cout << total << "\n";
}