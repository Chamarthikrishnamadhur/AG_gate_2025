#include <stdio.h>
#include<math.h>
int main(void){
  double x= 0.00001;
  double y=(x*cos(x)-sin(x))/(pow(x,2)*sin(x));
  printf("%lf\n", y);
  x=-1*x;
  y=(x*cos(x)-sin(x))/(pow(x,2)*sin(x));
  printf("%lf\n",y);
}
  
