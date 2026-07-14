#include <stdio.h>

void Last(int a){
    if(a==7){
        printf("Siz kiritgan son 7");
    }
}

int daraja(int a, int b){
    int natija = 1;
    for(int i=1; i<=b; i++){
        natija *= a; // natija = natija * a;
    }
    return natija;
}

void isArmstrongNumber(int son){
    int xona=0, kaskader = son, sum=0;

    while(kaskader){
        xona++;
        kaskader/=10;
    }

    kaskader = son;

    while(kaskader){
        int r = kaskader%10;
        int natija = daraja(r, xona);
        sum += natija;
        kaskader/=10;
    }

    if(son==sum){
        puts("Armstrong Son");
    }else{
        puts("Armstrong son emas");
    }
}

int factorial(int a){
    int kopaytma = 1;
    for(int i=1; i<=a; i++){
        kopaytma *= i;
    }
    return kopaytma;
}

void isStrong(int a){
    int kaskader = a, sum=0;

    while(kaskader){
        int r = kaskader%10;
        int natija = factorial(r);
        sum += natija;
        kaskader/=10;
    }

    if(sum == a){
        puts("Strong Number");
    }else{
        puts("Not Strong Number");
    }
}

void Juftmikin(int son){
    if(son%2==0){
        printf("%d ", son);
    }
}

void PrintArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void ScanArr(int arr[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

int SumArr(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int MaxArr(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int CountArr(int *arr, int n, int x){
    int count=0;
    for(int i=0; i<n; i++){
        int kaskader = arr[i];
        while(kaskader){
            int r = kaskader % 10;
            if(r == x){
                count+=1;
                break;
            }
            kaskader /= 10;
        }
    }
    return count;
}

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int x=0; x<n-1-i; x++){
            if(arr[x] > arr[x+1]){
                int c = arr[x];
                arr[x] = arr[x+1];
                arr[x+1] = c;
            }
        }
    }
}

int Farq(int arr[], int n){
    for(int i=0; i<99; i++){
        if(arr[i+1]-arr[i] == 2){
            return arr[i] + 1;
        }
    }
}

void Maosh(int *arr, int n, int soat){
    for(int i=0; i<n; i++){
        printf("[%d] - ishchining maoshi %d\n", i+1, arr[i] * soat);
    }
}

float AvgArr(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum / (float)n;
}

void ChangeArr(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }
}

void SecondMax(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        if(arr[i] != arr[i-1]){
            printf("\n%d", arr[i-1]);
        }
    }
}


void ScanMultiArr(int n, int m, int arr[n][m]){
    for(int i=0; i<n; i++){
        for(int x=0; x<m; x++){
            scanf("%d", &arr[i][x]);
        }
    }
}