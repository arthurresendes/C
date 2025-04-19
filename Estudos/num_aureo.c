#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 1, b = 1, prox;
    printf("Digite o número do termo Fibonacci: ");
    scanf("%d" , &n);
    if (n == 1 || n == 2){
        printf("Termo %d: 1\n" , n);
    } else{
        for(i = 3; i <= n ; i++){
            prox = a + b ;
            a = b;
            b = prox;
        }
        printf("Termo %d: %llu\n" , n , b);
        printf("Termo %d: %llu\n" , n - 1 , a);
        printf("Razão entre o termo %d e o termo %d: %.10f\n", n , n-1 ,(double)b/a);
        
    }
    
    return 0;
}