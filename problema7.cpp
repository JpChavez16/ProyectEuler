#include <iostream>
using namespace std;

int main()
{
    long count, n, primo;
    
    primo = 1;
    
    for (n = 3; primo != 10001; n += 2)
	{
	
        for (count = 3; count < n; count = count + 2) 
        {
            if (n % count == 0)
                break;
        }
        
        if (count == n)
            primo++;
    }
    
    cout<<count<<endl;
    return 0;
}