//suma cuadrada y suma de cuadrados
#include <iostream>
using namespace std;

int main()
{
   int sum_a = 0,sum_b = 0;
   for(int i=1;i<=100;i++){
       sum_a=sum_a+i*i;
       sum_b=sum_b+i;
   }
   sum_b=sum_b*sum_b;       
   cout<<sum_b-sum_a;
}
