#include <stdio.h>

int main() {
    int num, i;
    long long final_num = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        final_num *= i;
    }
    
    printf("The Factorial of %d is %lld", num, final_num);
    
    return 0;
}