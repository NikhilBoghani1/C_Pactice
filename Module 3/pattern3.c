#include<stdio.h>
main(){
	int i,j,x=1;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			
			printf(" %d",x);
			x=x+1;
				
		}
		printf("\n");
	}
	
}
