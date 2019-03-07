//#include<stdio.h>
int det(int* arr, int order){
	//printf("Order=%d\n",order);
	
	int nrr[order-1][order-1];
	int i,j,p,q,m,n=1,s=0,a=0,b=0;
	int x,y;
	
	//printing array
	/*for(x=0;x<order;x++){
	for(y=0;y<order;y++){
		printf("%4d",*(arr+x*order+y));
	}
		
	}
	printf("\n");
	*/
	
	//actual program starting point
	if(order==1)
	 return *arr;
	else{
		for(p=0;p<order;p++){
		//printf("p=%d\n",p);
			for(q=0;q<order;q++){
			//printf("q=%d\n",q);
				for(i=0;i<order;i++){
				//printf("i=%d\n",i);
					for(j=0;j<order;j++){
					//printf("j=%d\n",j);
						if(p!=i && q!=j){
						
							nrr[a][b]=*(arr+i*order+j);
							//printf("Not matched position! %d\n",nrr[a][b]);
							b++;
							if(b>=order-1){
								b=0;
								a++;
							}
						
						}//end of if
						
						/*else{
							printf("Matched position!\n");
						}*/
					
					}//end of j loop
				}//end of i loop
			
				/*for(x=0;x<order-1;x++){
					for(y=0;y<order-1;y++){
						printf("%4d",nrr[x][y]);
					}
				}*/
				m=*(arr+0*order+q)*det(*nrr,order-1);
				//printf("\nm=%d\n",m);
				s=s+n*m;
				n=-1*n;
				a=0;
				b=0;
			}//end of q loop
			break; //for this program only;
		}
		return s;
	}//end of else
}

/*
int main(){
	int arr[2][2]={
	{5,2},{2,5}
	};
		
	int a;
	a=det(*arr,2);
	printf("Result: %d",a);
	printf("\n");
	return 0;

}
*/

