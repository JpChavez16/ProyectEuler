#include <iostream>
using namespace std;

int main()
{
	int aux=0;
	for(int i=0;i<1000;i++)
	{
	  
	  if(i%3==0)
	     aux=aux+i;
	  else if(i%5==0)
	      aux=aux+i;   
	}
	cout<<aux<<endl;
return 0;	
}