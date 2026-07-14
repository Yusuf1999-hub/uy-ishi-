#include <stdio.h>
#include "lib.h"

int main(){
    int arr[5] = {1,45,23,12,2};

    for(int i=0; i<5; i++){
        printf("%x\n", &arr[i]);
    }

    printf("\n\n%x", arr);

    int *ptr = arr;
    ptr = ptr + 1;
}