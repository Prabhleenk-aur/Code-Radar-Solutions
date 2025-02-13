#include <stdio.h>


int main() {
    char a[1000],b[100];
    int c;
    scanf("%c",&a);
    scanf("%d", &c);
    scanf("%c", &b);
    printf("Name: %c\n",a);
    printf("Age: %d\n",c);
    printf("Name: %c",b);
    return 0;
}