#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n,*p;
    p=&n;
    scanf("%d",p);
    printf("%d",*p);
}
