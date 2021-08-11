#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int n, i, lastDigit, sum = 0;
    scanf("%d", &n);
    
    for(i = 0; i < 5; i++) {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n - lastDigit;
        n = n / 10;
    }
    
    printf("%d\n", sum);
    return 0;
}