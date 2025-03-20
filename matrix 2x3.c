#include <stdio.h>
int main()
{
	int i,j,A[2][3];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("enter matrix numbers A[%d][%d]",i,j);
			scanf("%d",&A[i][j]);
			
		}
	}
		printf("array number is\n");
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
	}
	

