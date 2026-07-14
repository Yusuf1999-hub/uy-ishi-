#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Nechta son kiritasiz: ");
    scanf("%d", &n);

    while(n){
        int son;
        scanf("%d", &son);
        sum += son;
        n--;
    }

    printf("%d", sum);
}