#include <stdio.h>
void sort(int a[],int);
int main(){
	int n,i;
	printf("enter any no");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter array no");
		scanf("%d",&a[i]);
	}
	sort(a,n);
}
void sort(int a[],int n){
	int i,temp,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
