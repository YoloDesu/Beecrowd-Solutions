#include <stdio.h>

int main(void){
    int n;
	scanf("%d", &n);
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", n/365, n%365/30, n%365%30);
	return 0;
}
