#include <stdio.h>


int main() {
    char a[100];
    char b[100];
    int c;
    scanf("%c",&a);
    scanf("%d", &c);
    scanf("%c", &b);
    printf("Name: %c\n",a);
    printf("Age: %d\n",c);
    printf("Hobby: %c",b);
    return 0;
}