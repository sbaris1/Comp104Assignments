#include <stdio.h>

int main(){
	int a,sum=0;
	printf("Enter an integer:");
	scanf("%d" , &a);
	for(int i=1; i<a; i++){
		if(a%i == 0)
			sum +=i;
	}
	if(sum==a)
		printf("%d is a perfect number" , a);

	else
		printf("%d is NOT a perfect number" , a);
	
	return 0;
}


