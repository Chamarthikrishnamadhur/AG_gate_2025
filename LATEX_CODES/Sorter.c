#include <stdio.h>

void swap(int*a,int i,int j);
int partition(int*a, int low, int high);
int quicksort(int*a,int low,int high);


int main(){
  int a[]={130,137,138,138,144,146,149,154,156,160};
  int q=sizeof(a)/sizeof(a[0]);
  //Printing original array
  printf("The original array is : [");
  for(int k=0;k<q;k++){
    printf("%d ",a[k]);
  }
  printf("]\n");
  //printf("%d\n", q);
  quicksort(a,0,q-1);
  printf("The sorted array is: [");
  for(int k=0;k<q;k++){
    printf("%d ",a[k]);
  }
  printf("]\n");
  double m;
  if (q%2==0){
    m=(a[(q/2)]+a[(q/2-1)])/2;
    printf("\nThe median is : %lf\n", m);
  }
  else {
  m=(a[(q-1)/2]);
  printf("\nThe median is : %lf\n", m);
  }
}

int partition(int* a,int low, int high){
  int pivot = a[high];
  int i=low-1;
  for (int j=low;j<high;j++){
    if(a[j]<pivot){
      i+=1;
      swap(a,i,j);
    }
  }
  swap(a,i+1,high);
  return i+1;
}
int quicksort(int *a, int low ,int high){
  if(low<high){
    int pi=partition(a,low,high);
  quicksort(a,low,pi-1);
  quicksort(a,pi+1,high);
  }
}

void swap(int*a,int i,int j){
  int temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
