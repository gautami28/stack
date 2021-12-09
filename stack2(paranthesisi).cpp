#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Stack {
    int t,a[100]; 
	
}s;

class brackets
{
	public:
	void push(int num)
	{
        	s.a[s.t + 1] = num;
        	s.t++;
	}
	
	int pop() 
	{
        s.t = s.t - 1;
        return s.a[s.t+1];
    }
    
    bool input_data(string c)
	{   
		s.a[s.t] = -1;
		int x=1;
		for(int i=0;i<sizeof(c);i++)
		{
			if (c[i]=='('||c[i]=='['||c[i]=='{') 
			{
				push(c[i]);	
			}
			
			switch (c[i]) 
			{
            	case ')'	: 	c = s.t;
               			 		pop();
               				 if (c[i]=='{' || c[i]=='[')
               				{
                  				return false;
                  				break; 
							}
             			
           		case '}'	: 	c = s.t;
               						pop();
               				if (c[i]=='(' || c[i]=='[')
               				{
                  				return false;
                  				break; 
							}
							
				case ']'	: 	c = s.t;
               						pop();
               				if (c[i]=='(' || c[i]=='{')
               				{
                  				return false;
                  				break; 
							}
			}
		}
		
		 if(s.a[s.t] == -1)
        {   
           cout<<"\nPARENTHESIZED";
        	return true;
       }
       else
        {   
             cout<<"\nNOT PARENTHESIZED";
             return false;
       }

	
}
};

int main()
{
	string a1;
	int n;
	brackets b;
	cout<<"enter expression: ";
	cin>>a1;
	b.input_data(a1);
	return 0;
}


