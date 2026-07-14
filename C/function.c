#include "lib.h"

int Olti(int a){
    int count = 0;

    for(int i=1; i<=a; i++){
        if(a % i == 0){
            count++;
        }
    }

    return count;
}

int Toqqiz(char el){
    if(el>='a' && el<='z'){
        return el - 96;
    }else if(el>='A' && el<= 'Z'){
        return el - 64;
    }else{
        return 0;
    }
}


int main(){

    // int son;
    // scanf("%d", &son);

    // int natija = Olti(son);

    // printf("%d da %d ta bo'luvchi bor", son, natija);

    // -------------------------------

    char harf;
    printf("Harf kiriting: ");
    scanf("%c", &harf);

    int natija = Toqqiz(harf);
    printf("%c %d - o'rinda joylashgan", harf, natija);
}