#include <bits/stdc++.h>

using namespace std;

multimap <char,int> mm;

int main(){
	string s,t;
	long long temp=0,temp1=0,temp2=0;
	long long s_size,t_size;
	long long count=0;
	long long s_index=0,t_index=0;
	long long index;
	long long flag=0;
	map<int,int>::iterator lower_iter;

	cin >> s >> t;
	s_size=s.size();
	t_size=t.size();
	for(temp=0;temp<s_size;temp++){
		mm.insert(pair<char,int>(s[temp],temp+1));
	}
	for(temp=0,index=0;temp<t_size;temp++){
		if(mm.count(t[temp])<=0){
			printf("-1\n");
			return 0;
		}
		lower_iter = mm.lower_bound(t[temp]);

	}	
}