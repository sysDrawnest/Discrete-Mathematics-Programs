//NO14 SHORTEST PATH PAIR IN A PLANE

#include<stdio.h>
#include<math.h> 
int main(){
	float s,a,b,c,x0,y0,z0,d;
	printf("enter value of points(x0,y0,z0)");
	scanf("%lf%lf%lf",&x0,&y0,&z0);
	printf("enter co-ordinate of plane\n");
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	s=((a*x0)+(b*y0)+(c*z0)+d)/sqrt(pow(a,2)+pow(b,2)+pow(c,2));
	printf("\n Shortest distance between point and plane or path pair in a palne %lf",s);
	
	
}
