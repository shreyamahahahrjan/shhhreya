#include <stdio.h>
int main(){
	int n=3,i,j,temp,arr[i];
	for(i=0;i<n;i++){
		printf("enter any elements [%d]",i);
		scanf("%d",& arr[i]);
		
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	
	}
	printf("sorted elements are\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	
}
