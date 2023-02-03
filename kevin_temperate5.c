#include<stdio.h>

main(){
	int i=1,n,fact=1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(n>=i){
		fact*=n;
		n--;
	}
		printf("%d\n",fact);

}
