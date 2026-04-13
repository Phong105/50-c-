#include <stdio.h>
#include <math.h>


void nhap(int a[][200], int n,int m){
    for (int i=0; i<n;i++){
        for (int j=0;j<m;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void xuat(int a[][200],int n,int m){
    for (int i=0; i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int prime(int n){
    if(n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}


int main(){
    int a[200][200],n,m;
    scanf("%d%d",&n,&m);
    nhap(a,n,m);
    xuat(a,n,m);
    int b[200][200],n1,m1;
    scanf("%d%d",&n1,&m1);
    nhap(b,n1,m1);
    xuat(b,n1,m1);
    int tich[200][200];
    for (int i=0;i<n;i++){
         for(int j=0;j<m1;j++){
            tich[i][j]=0;
            for(int k=0;k<m;k++){
                tich[i][j]+=a[i][k]*b[k][j];
            }
         }
    }
    xuat(tich,n,m1);
}