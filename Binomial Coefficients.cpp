//NO9. BINOMIAL COEFFICIENTS 
#include<stdio.h>
int binomial(int n,int k);
int main(){
	int n,k;
	printf("Enter n and k\n");
	scanf("%d%d",&n,&k);
	printf("\nBINOMIAL CO-EFFICENT is %d",binomial(n,k));

	return 0;
}
	int binomial(int n,int k){
		if(k>n) return 0;
		if(k==0||k==n)
			return 1;
			return binomial(n-1,k-1)+binomial(n-1,k);
	}
