#include <stdio.h>

int main(){
	int a=0,b=0,c=0,d=0,distance1=0,distance2=0;
	printf("Enter four integer values for (a,b,c,d):\n");
	scanf("%d%d%d%d" ,&a,&b,&c,&d);
	
	if(a>=b)
	distance1 = a-b;
	else
	distance1= b-a;
	if(c>=d)
	distance2= c-d;
	else
	distance2= d-c;
	
	printf("Manhattan Result is: %d ", distance1+distance2);

	return 0;
}