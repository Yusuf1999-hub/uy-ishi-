#include <stdio.h>
#include <string.h>

// strtok()

int main(){

    char arr[50] = "salom dunyo kim nima qachon", natija[50];

    char *ptr = strtok(arr, " ");
    
    while(ptr){
        // if(strlen(ptr) >= 5){
        //     puts(ptr);
        // }
        strcpy(natija, ptr);
        ptr = strtok(NULL, " ");
    }

    puts(natija);
}