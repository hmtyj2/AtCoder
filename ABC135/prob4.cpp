#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int total=0;
int odd[4]={0,};
int even[4]={0,};
int total_length;

void dfs(int idx,int current,int sum){
	int temp;
	if(idx==7){
		if(sum%13==5 || sum%13==-8){
			total++;
			total=(total%1000000007);
		}
		return;
	}
	if(current==0){
		idx++;
		if(idx<=3){
			current=odd[idx];
		}
		else{
			current=even[idx-3];
		}
		dfs(idx,current,sum);
	}
	else if(idx<=3){
		for(temp=0;temp<=9;temp++){
			dfs(idx,current-1,sum+(int)pow(10,(double)(3-idx))*temp);
		}
	}
	else{
		for(temp=0;temp<=9;temp++){
			dfs(idx,current-1,sum-(int)pow(10,(double)(3-(idx-3)))*temp);
		}
	}
}

int main(){
	string s; 
	int temp,temp1,temp2;
	int count;
	int odd_index=0,even_index=0,index=0;
	int odd_count,even_count;
	int length;
	int flag=0;

	cin >> s;
	for(temp=s.size()-1,count=1;temp>=0;temp--,count++){
		if(flag==0){
			if(s[temp]=='?'){
				odd[4-count]++;
			}
			else{
				odd_index+=(s[temp]-48)*(int)pow(10,(double)(count-1));
			}
		}
		else{
			if(s[temp]=='?'){
				even[4-count]++;
			}
			else{
				even_index+=(s[temp]-48)*(int)pow(10,(double)(count-1));
			}		
		}
		if(count==3){
			count=0;
			if(flag==0){
				flag=1;
			}
			else{
				flag=0;
			}
		}
	}
	for(temp=1,odd_count=0,even_count=0;temp<=3;temp++){
		odd_count+=odd[temp];
		even_count+=even[temp];
	}
	dfs(1,odd[1],odd_index-even_index);
	printf("odd index= %d / even index=%d\n",odd_index,even_index);
	printf("odd= %d / %d / %d / even= %d / %d / %d\n",
		odd[1],odd[2],odd[3],even[1],even[2],even[3]);
	printf("total=%d\n",total);
}