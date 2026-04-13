#include <stdio.h>

void bubbleSort(int a[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
              int temp = a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
}

int Binary_search(int a[], int n, int x){
   int left= 0, right = n-1;
   while (left <= right){
     int mid= (left +right)/2;
     if (a[mid]==x){
       return mid;
     }
     else if (a[mid]<x){
       left = mid+1;
     }
     else if (a[mid]>x){
       right = mid-1;
     }
   }
   return -1;
}

int main(){
  int n, x=12;
  scanf("%d", &n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  bubbleSort(a,n);
  for(int i=0;i<n;i++){
    printf("%d ", a[i]);
  }
  if (Binary_search(a,n,x)!=-1){
    printf("\nFound at index: %d", Binary_search(a,n,x));
  }
  else{
    printf("\nNot Found");
  }
}

