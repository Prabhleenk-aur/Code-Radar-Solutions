#include <stdio.h>


int main() {
    char a[1000],b[100];
    int c;
    scanf("%c %d %c", &a, &c, &b);
    printf("Name: %c \n Age: %d \n Hobby: %c",a,c,b);
    return 0;
}