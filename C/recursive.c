#include <stdio.h>
#include <string.h>
#include <ctype.h>

// iteravite 
void togri_iterative(int a){
    for(int i=1; i<=a; i++){
        printf("%d ", i);   
    }
}

// recursive

// void olma(void){
//     togri_iterative(4);
//     puts("Karam");
//     olma();
// }

void teskari(int a){
    if(a==0){
        return;
    }
    printf("%d ", a);
    teskari(a-1);
}

void togri(int a){
    if(a==0){
        return;
    }
    togri(a-1);
    printf("%d ", a);
}

int sum(int a){
    if(a==1){
        return 1;
    }
    return a + sum(a-1);
}

int main(){
    // togri_iterative(5);
    // olma();
    // teskari(5);
    // togri(5);

    int a;
    scanf("%d", &a);

    int natija = sum(a);
    printf("%d", natija);
}