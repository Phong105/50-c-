#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float min_temp[31],max_temp[31];
    for (int i=1;i<=n;i++){
        printf("Ngay %d - Nhap nhiet do Thap nhat va Cao nhat: ", i);
        scanf("%f%f",&min_temp[i],&max_temp[i]);
    }
    int min_sum=0,max_sum=0;
    int lowest=min_temp[1];int lowest_day=1;
    int highest=max_temp[1];int highest_day=1;
    for (int i=1;i<=n;i++){
        min_sum+=min_temp[i];
        max_sum+=max_temp[i];

        if (highest<max_temp[i]){
            max_temp[i]=highest;
            highest_day=i;}

        if (lowest>min_temp[i]){
            min_temp[i]=lowest;
            lowest_day=i;
        }
    }
    printf("(i) Nhiet do thap nhat trung binh: %.2f\n", min_sum / n);
    printf("(ii) Nhiet do cao nhat trung binh: %.2f\n", max_sum / n);
    printf("(iii) Nhiet do thap nhat trong thang la %.2f vao ngay %d\n", lowest, lowest_day);
    printf("(iv) Nhiet do cao nhat trong thang la %.2f vao ngay %d\n", highest, highest_day);

}