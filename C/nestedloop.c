#include <stdio.h>

int main(){
    // int n;

    // for(int x=1; x<=3; x++){
    //     int count=0;
    //     scanf("%d", &n);

    //     for(int i=1; i<=n; i++){
    //         if(n%i==0){
    //             count++;
    //         }
    //     }
        
    //     if(count == 2){
    //         printf("%d Tub son\n", n);
    //     }else{
    //         printf("%d Tub son emas\n", n);
    //     }
    // }

    // -------------------------------------------

    // int n;
    // scanf("%d", &n);

    // for(int x=5; x<=n; x++){
    //     int count=0;

    //     for(int i=1; i<=x; i++){
    //         if(x%i==0){
    //             count++;
    //         }
    //     }
        
    //     if(count == 2){
    //         printf("%d ", x);
    //     }
    // }
    
    // -----------------------------------------------------------

    // for(int x=1; x<=3; x++){
    //     printf("\n[x] ->%d", x);
    //     for(int i=1; i<=x; i++){
    //         printf("\n\ti -> %d", i);
    //     }
    // }

    // ----------------------------------------------------------

    int n;
    scanf("%d", &n);

    for(int x=1; x<=n; x++){
        for(int i=1; i<=n; i++){
            printf("* ");
        }
        puts("");
    }

    // ----------------------------------------------------------


}