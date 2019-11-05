#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int temp,temp1,temp2,temp3;
	int N;
	int monsters[100002];
	int heros[100001];
	long long total;

	scanf("%d",&N);
	for(temp=1;temp<=N+1;temp++){
		scanf("%d",&monsters[temp]);
	}
	for(temp=1;temp<=N;temp++){
		scanf("%d",&heros[temp]);
	}

	for(temp=N;temp>=1;temp--){
		if(heros[temp]>=monsters[temp+1]){
			total+=(long long)monsters[temp+1];
			heros[temp]-=monsters[temp+1];
			monsters[temp+1]=0;
		}
		else{
			total+=(long long)heros[temp];
			monsters[temp+1]-=heros[temp];
			heros[temp]=0;
		}
		if(heros[temp]>=monsters[temp]){
			total+=(long long)monsters[temp];
			heros[temp]-=monsters[temp];
			monsters[temp]=0;
		}
		else{
			total+=(long long)heros[temp];
			monsters[temp]-=heros[temp];
			heros[temp]=0;
		}
	}
	printf("%lld\n",total);
}