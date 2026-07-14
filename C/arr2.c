#include <stdio.h>
#include "lib.h"

int main(){

    int n, tub_count = 0;
    printf("N: ");
    scanf("%d", &n);

    int arr[n];

    ScanArr(arr, n);

    for(int i=0; i<n; i++){
        int count = 0;
        for(int x=1; x <= arr[i]; x++){
            if(arr[i] % x == 0){
                count++;
            }
        }
        if(count==2){
            tub_count ++;
        }
    }

    printf("%d ta tub son bor", tub_count);
}