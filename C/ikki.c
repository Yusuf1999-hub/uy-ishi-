#include <stdio.h>

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
   
    // int kun;
    // printf("Hafta kunini kiriting: ");

    // scanf("%d", &kun);

    // if(kun>=1 && kun<=5){ 
    //     puts("ISH KUNI");
    // }else if(kun==6 || kun==7){ 
    //     puts("DAM OLISH KUNI");
    // }else{
    //     puts("BUNDAY HAFTA KUNI MAVJUD EMAS");
    // }

    // -----------------------------------------------------

    // char el;

    // scanf("%c", &el);

    // if(el>='a' && el<='z'){
    //     printf("KICHIK HARF");
    // }else if(el>='A' && el<='Z'){
    //     printf("KATTA HARF");
    // }else{
    //     printf("HARF EMAS ");
    //     if(el>='0' && el<='9'){
    //         printf("RAQAM");
    //     }else{
    //         printf("BELGI");
    //     }
    // }

    // -----------------------------------------------

    int a, b, c, count_j=0, count_t=0;

    printf("3 ta son kiriting: ");

    scanf("%d%d%d", &a, &b, &c);

    if(a%2==0){
        count_j=count_j+1;
    }else{
        count_t=count_t+1;
    }
    
    if(b%2==0){
        count_j += 1;
    }else{
        count_t += 1;
    }
    
    if(c%2==0){
        count_j++;
    }else{
        count_t++;
    }

    printf("%d ta JUFT SON\n", count_j);
    printf("%d ta TOQ SON\n", count_t );
}