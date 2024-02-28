#include <stdio.h>
#include<string.h>

int main()
{    int i;
    char a[10];
    char b[10];
    char c[10]="uday";
    printf("hello\n");
    gets(b);
    printf("what is your name???\n");
    gets(a);
    i=strcmp(a,c);
    if(i==0){
        printf("hello uday :D\n");
    }
    else{
        printf("go awayy");
    }
    return 0;
}
