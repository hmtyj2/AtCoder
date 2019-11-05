#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int temp,temp1,temp2;
	int N,flag;
	int arr[51];

	scanf("%d",&N);
	for(temp=1;temp<=N;temp++){
		scanf("%d",&arr[temp]);
	}

	for(temp=1,flag=0;temp<=N;temp++){
		if(arr[temp]!=temp){
			if(flag==0){
				temp1=arr[temp];
				arr[temp]=temp;
				arr[temp1]=temp1;
				flag++;
			}
			else{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}