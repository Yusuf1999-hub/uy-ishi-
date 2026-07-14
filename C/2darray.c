// multidimesional array -> 

#include <stdio.h>

void ScanMultiArr(int n, int m, int arr[n][m]){
    for(int i=0; i<n; i++){
        for(int x=0; x<m; x++){
            scanf("%d", &arr[i][x]);
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];

    ScanMultiArr(n, n, arr);

    // for(int i=0; i<n; i++){
    //     for(int x=0; x<n; x++){
    //         if(i==x){
    //             printf("* ");
    //         }else{
    //             printf("%d ", arr[i][x]);
    //         }
    //     }
    //     puts("");
    // }


    for(int i=0; i<n; i++){
        for(int x=0; x<n; x++){
            if(i==0 || x==0 || i==n-1 || x==n-1){
                printf("* ");
            }else{
                printf("%d ", arr[i][x]);
            }
        }
        puts("");
    }
}
