#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int K,X,temp,temp1;

	scanf("%d %d",&K,&X);

	for(temp=-1000000;temp<=1000000;temp++){
		if(temp>=X-K+1 && temp<=X+K-1){
			printf("%d ",temp);
		}
	}
}