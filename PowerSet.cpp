//NO7 POWER SET 
#include<stdio.h>
#include<math.h>
using namespace std;
int i,j;
void power(char set[],int size){
	int psize=pow(2,size);
	for(i=0;i<psize;i++){
		for(j=0;j<size;j++) {
			if(i&(1<<j))
			printf("%c",set[j]);
		}
		printf("\n");
	}
}
		int main(){
				char set[3] ={'S','Y','S'};
				power(set,3);
				return 0;
		}
