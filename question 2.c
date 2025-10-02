#include<stdio.h>

int main(){
	int n;
	int a;
	int mul;
	int div = 0;
	
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter a: ");
	scanf("%d", &a);
	
	for(int i=0;i < a;i++){
		mul += n;
	}
	printf("Mul: %d\n", mul);
	
	//int temp = n;
	while(n >= a){
		n -= a;
		div++;
	}
	printf("Div: %d", div);
	
}