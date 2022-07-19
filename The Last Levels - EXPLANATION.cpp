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
	    cout<<"\nd : "<<d;
	    
	    if (a % 3 == 0 & a > 3)
	    {
	        e = (a / 3)-1;
	        cout<<"\ne : "<<e;
	        
	        f = e * c;
	        cout<<"\nf : "<<f;
	    }   
	    
	    else if (a == 3)
	    {
	        e = 0;
	        cout<<"\ne : "<<e;
	        
	        f = e * c;
	        cout<<"\nf : "<<f;
	    }
	    
	    else
	    {
	        e = (a / 3);
	        cout<<"\ne : "<<e;
	        
	        f = e * c;
	        cout<<"\nf : "<<f;
	    }
	    
	    g = d + f;
	    cout<<"\ng  : "<<g;
	    
	    cout<<"\n"<<g;
	}
	
	
	return 0;
}
