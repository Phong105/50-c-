#include<stdio.h>
#include<limits.h>

void  bubblesort(int *p,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(p+j)>*(p+j+1)){
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[200],*p;
    p=a;
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    bubblesort(p,n);
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }

}