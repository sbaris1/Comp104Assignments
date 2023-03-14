#include <stdio.h>

int main() {
    int n, num20, num10, num5, num1;

    printf("Enter an amount in TL: ");
    scanf("%d", &n);
    if(n<20){
		printf("n  must be greater than or equal to 20.\n");
	}else{
		 num20 = n / 20;
    n %= 20;
    num10 = n / 10;
    n %= 10;
    num5 = n / 5;
    n %= 5;
    num1 = n;
	
    printf("20tl bills:%d\n", num20);
    printf("10tl bills:%d\n", num10);
    printf("5tl bills:%d\n", num5);
    printf("1tl bills:%d", num1);	
	}
    return 0;
}
