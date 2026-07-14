#include <stdio.h>
#include <ctype.h>

int main(){
    int son;
    printf("Son kiriting: ");

    scanf("%d", &son);

    // switch(son>=0 && son<=9){
    //     case 1:
    //         printf("RAQAM");
    //         break;
    //     case 0:
    //         printf("RAQAM KIRITMADINGIZ!");
    // }

    switch(son > 0){
        case 1:
            puts("Musbat son");
            break;
        case 0:
            switch(son == 0){
                case 1:
                    puts("NEYTRAL");
                    break;
                case 0:
                    puts("Manfiy");
            }
    }
}