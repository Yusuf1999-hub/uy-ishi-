#include "lib.h"

int main(){
    

    int n, sum=0;
    printf("Nechta son kiritasiz: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]*arr[i]);
    }

}