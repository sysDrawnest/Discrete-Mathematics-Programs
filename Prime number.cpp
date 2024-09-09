//NO11.check prime or not
#include<stdio.h>
	int main(){
		int n,counter=0;
		printf("Enter any number\t");
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			if(n%i==0){
				counter++;
			}
		}
		if(counter==2) {
			printf(" \t%d is a PRIME number\n",n);
		}
		
			else {
			printf("\t%d is not a prime number\t",n);
		}
		
		
	}
