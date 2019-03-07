#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arr,i,j,row,col,res;
	printf("Enter row number:");
	scanf("%d",&row);
	printf("Enter col number:");
	scanf("%d",&col);
	arr=(int*)malloc(sizeof(int)*row*col);
	
		for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		scanf("%d",arr+i*row+j);
		
		printf("Printing array ...\n");
		printf("=========================\n");
		printf("Row=%d      Column=%d\n",row,col);
		printf("-------------------------\n");
		for(i=0;i<row;i++){
		for(j=0;j<col;j++)
		printf("%4d",*(arr+i*row+j));
		printf("\n");
		}
		printf("=========================\n");
		
		//check if it is square
		if(row==col){
			res=det(arr,row);	
			printf("Determinant = %d",res);
		}else{}
		
		
		
	printf("\n");
	return 0;
}
