#include <bits/stdc++.h>

using namespace std;

int main(){
	long long L,R;
	long long x,y;
	long long ans=0,remain,xo;
	long long temp,temp1,temp2;

	cin >> L >> R;
	for(y=L;y<=R;y++){
		for(x=y;x>=L;x--){
			if(y^x>=x){
				break;
			}
			if(y%x==y^x){
				ans++;
			}
		}
	}
	cout << ans;
}