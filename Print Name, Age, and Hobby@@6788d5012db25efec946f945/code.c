#include <stdio.h>


int main() {
    char a[100];
    char b[100];
    int c;
    scanf("%c",&a);
    scanf("%d",&c);
    scanf("%c",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",c);
    printf("Hobby: %s",b);
    return 0;
}