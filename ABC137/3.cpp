#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int temp,temp1;
	string s;
	long long cnt=0;
	std::map<string, int> m;

	cin >> n;

	for(temp=0;temp<n;temp++){
		cin >> s;
		sort(s.begin(),s.end());
		if(m[s]==0){
			m[s]++;
		}
		else{
			cnt+=m[s];
			m[s]++;
		}
	}
	cout << cnt << "\n";
}