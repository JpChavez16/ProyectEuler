#include <iostream>
using namespace std;

int main()
{
	int n=1;
	for(n=1;n!=0;n++)
	{
        for (int i=1;n<=20;i++)
        {
        	if(n%i==0)
        		cout<<n<<endl;
        }
	}
}