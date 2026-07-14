#include <stdio.h>

int main(){
    // int a=5;
    // scanf("%d", &a);

    // switch(a){
    //     case 1:
    //         puts("Dushanba");
    //         break;
    //     case 2:
    //         puts("Seshanba");
    //         break;
    //     case 3:
    //         puts("Chorshanba");
    //         break;
    //     case 4:
    //         puts("Payshanba");
    //         break;
    //     case 5:
    //         puts("Juma");
    //         break;
    //     case 6:
    //         puts("Shanba");
    //         break;
    //     case 7:
    //         puts("Yakshanba");
    //         break;
    //     default:
    //         puts("Bunday kun yo'q");
    // }

    // -------------------------------------------

    int oy;
    scanf("%d", &oy);

    switch(oy){
        case 1:
        case 2:
        case 12:
            puts("Qish");
            break;
        case 3 ... 5:
            puts("Bahor");
            break;
        case 6:
        case 7:
        case 8:
            puts("Yoz");
            break;
        case 9:
        case 10:
        case 11:
            puts("Kuz");
            break;
        default:
            puts("bunday oy yo'q");
    }
}