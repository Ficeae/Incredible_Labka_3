#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];
    int count;
    int i;
    i = 0;
    count = 0;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }

        else if (str[i] >= '0' && str[i] <= '9'){
            count++;
        }
        i++;
    }

    printf("\nThere is %d letters&numbers in your string", count);
    return 0;
}