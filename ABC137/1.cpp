#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int A,B,sum,dif,mul;

	scanf("%d %d",&A,&B);
	sum=A+B;
	dif=A-B;
	mul=A*B;
	if(sum>=dif && sum>=mul){
		printf("%d",sum);
	}
	else if(dif>=sum && dif>=mul){
		printf("%d",dif);
	}
	else if(mul>=dif && mul>=sum){
		printf("%d",mul);
	}
}