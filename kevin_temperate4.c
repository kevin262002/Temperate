#include<stdio.h>

main(){
	int n,f,l,sum=0;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	l=n%10;
	printf("Last Number Is : %d\n",l);
	
	while(n>10){
		
		n=n/10;
		
	}
	    printf("First Number Is : %d\n",n);
	   
	f=n;
	sum = f+l;
	printf("sum : %d",sum);
}
