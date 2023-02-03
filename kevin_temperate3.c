#include<stdio.h>

main(){
	int i=0;
	int n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		n/=10;
		i++;
	}
	
	while(n!=0);
		
		printf("Count Digit : %d\n",i);
	
}
