#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	long long temp=0,temp1=0,temp2=0;
	long long s_size,t_size;
	long long count=0;
	long long s_index=0,t_index=0;
	long long flag=0;

	cin >> s >> t;
	s_size=s.size();
	t_size=t.size();

	for(count=1;t_index<t_size;count++){
		if(s[s_index]!=t[t_index]){
			s_index=(s_index+1)%s_size;
			flag++;
		}
		else{
			t_index++;
			s_index=(s_index+1)%s_size;
			flag=0;
		}
		if(flag==s_size){
			break;
		}
	}
	if(flag==s_size){
		printf("-1\n");
	}
	else{
		cout << count-1;
	}
	
}