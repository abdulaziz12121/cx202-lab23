#include <stdio.h>

int main() {
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
	
    if(num%2!=0 || num==2){
    printf("is  a prime number");

    
    }else {
    printf("is not a prime number");
    
    }

    return 0;
}
