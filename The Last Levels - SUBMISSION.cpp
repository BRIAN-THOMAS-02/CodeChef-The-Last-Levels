The Last Levels - "https://www.codechef.com/submit/LASTLEVELS"

#include <iostream>
using namespace std;

int main() 
{
	int a,b,c,d,e,f,g;
	int t;
	
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    
	    d = a * b;
	    
	    if (a % 3 == 0 & a > 3)
	    {
	        e = (a / 3)-1;
	        f = e * c;
	    }   
	    
	    else if (a == 3)
	    {
	        e = 0;
	        f = e * c;
	    }
	    
	    else
	    {
	        e = (a / 3);
	        f = e * c;
	    }
	    
	    g = d + f;
	    
	    cout<<"\n"<<g;
	}
	
	
	return 0;
}
