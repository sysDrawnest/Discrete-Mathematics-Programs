//NO12 EUCLIDEAN DISTANCE BETWEEN 2 POINTS
#include<stdio.h>
#include<math.h>
/*int main(){
		float x1,y1,x2,y2,distance;
		printf("Enter point1(x1,y1)");
		scanf("%f%f",&x1,&y1);
		printf("Enter point2(x2,y2)"); 
		scanf("%f%f",&x2,&y2);
		
		distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); 
		printf("Distance between(%0.2f,%0.2f)and(%0.2f,%0.2f)\n = %2.lf",x1,y1,x2,y2,distance);
		return 0;
} */
		//OR OR OR OR 
														
		float distance(int x1,int y1,int x2,int y2) {
		return sqrt(pow(x2-x1,2)+pow(y2-y1,2)*1.0);
}
	int main(){
	
		printf("distance is %.2f ",distance(6,0,8,0));
	return 0;	
	}
