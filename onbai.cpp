#include<stdio.h>

void input(int a[][200]){
    for(int i=0;i<=1;i++){
        for(int j=0;j<=30;j++){
            printf("nhap nhiet do ngay %d thang %d: ",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
    }
}

float average_min(int a[][200]){
    float sum=0;
    for(int i=1;i<=1;i++){
        for(int j=0;j<=30;j++){
            sum+=a[i][j];
        }
    }
    return sum/30;
}

float average_max(int a[][200]){
    float sum=0;
    for(int i=0;i<1;i++){
        for(int j=0;j<=30;j++){
            sum+=a[i][j];
        }
    }
    return sum/30;
}

void low_temp(int a[][200],int *low,int *day){
    *low=a[1][0];
    *day=1;
    for(int i=1;i<=1;i++){
        for(int j=0;j<=30;j++){
            if(a[i][j]<*low){
                *low=a[i][j];
                *day=j;
            }
        }
    }
}

void high_temp(int a[][200],int *high,int *day){
    *high=a[0][0];
    *day=1;
    for(int i=0;i<1;i++){
        for(int j=0;j<=30;j++){
            if(a[i][j]>*high){
                *high=a[i][j];
                *day=j;
            }
        }
    }
}

int main(){
    int a[200][200];
    input(a);
    float avg_min=average_min(a);
    int avg_max=average_max(a);
    int low, low_day;
    int high, high_day;
    low_temp(a,&low,&low_day);
    high_temp(a,&high,&high_day);
    printf("(i) Nhiet do thap nhat trung binh: %d\n", avg_min);
    printf("(ii) Nhiet do cao nhat trung binh: %d\n", avg_max);
    printf("(iii) Nhiet do thap nhat trong thang la %d vao ngay %d\n", low, low_day+1);
    printf("(iv) Nhiet do cao nhat trong thang la %d vao ngay %d\n", high, high_day+1);
}