#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "lib.h"

int main(){
    char name[50];
    char second[50];
    char full_name[100]="";

    scanf("%s", name);
    scanf("%s", second);

    strcat(full_name, name);
    strcat(full_name, " ");
    strcat(full_name, second);

    puts(full_name);
}