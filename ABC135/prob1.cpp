#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int A,B,K,temp,temp1;

	scanf("%d %d",&A,&B);

	K=A+B;
	if(K%2==1){
		printf("IMPOSSIBLE\n");
	}
	else{
		printf("%d\n",K/2);
	}
}