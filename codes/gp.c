#include<stdio.h>
#include<math.h>
int main(){
  double q,sum=0;
  int r;
  printf("Enter the value of q:");
  scanf("%lf",&q);
  printf("\nEnter the value of r:");
  scanf("%d",&r);
  for(int i=0;i<=r;i++){
    sum+=pow(q,i);
    
  }
  double formula =(1/(1-q))-((pow(q,r+1))/(1-q));
  printf("Sum is %lf\n", sum);
  printf("The formula gave %lf\n",formula);
  if (sum==formula){
  printf("Both are equal\n");
  }
}
