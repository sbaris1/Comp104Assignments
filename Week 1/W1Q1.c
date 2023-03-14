#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter 3 integers:");
	scanf("%d%d%d" , &a , &b ,&c);
	if(a<=0 || b<=0 || c<=0){
		printf("Warning! Enter valid integers");
	}
	if(a+b>c && a+c>b && b+c>a){
		printf("Its a valid triangle");
	}
	else{
		printf("Its not a valid triangle");
	}	
	return 0;
}
