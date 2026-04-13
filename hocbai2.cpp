#include <stdio.h>
#include <stdlib.h>

void min(int a[200],int n,int *min1,int *min2, int *min3){
    *min1=a[0];
    *min2=a[1];
    *min3=a[2];
     int temp;
     if(*min1<*min2){
        temp=*min1;
        *min1=*min2;
        *min2=temp;
     }
     if (*min1<*min3){
        temp=*min1;
        *min1=*min3;
        *min3=temp;
     } 
     for (int i=3;i<n;i++){
        if(a[i]<*min1 && a[i]>*min2 && a[i]>*min3){
            *min1=a[i];
        }
        else if(a[i]<*min1 && a[i]<*min2 && a[i]<*min3){
            if(*min2<*min3){
                temp=*min2;
                *min2=*min3;
                *min3=temp;
                *min1=a[i];
            }
        }
     }
}