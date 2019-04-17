#include <iostream>
using namespace std;

int a=1,b=2,aux,suma;

int main()
{
while(b<=4000000){
    aux=a+b;
    a=b;
    b=aux;
    if(a%2==0){
        suma+=a;
    }
}

cout<<suma;

return 0;
}