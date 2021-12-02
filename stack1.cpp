#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Stack {
    int t, a[100];
}s;
 
class palin
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

};

int main() 
{
	palin p;	
    char b[100], c;
    int i, n;
    s.t = -1;
    cout<<"Enter a string"<<endl;
    gets(b);
    n = strlen(b);
    for(i = 0; i < n; i++){
        p.push(b[i]);
    }
    for(i = 0; i <n; i++)
	{
        if(p.pop() != b[i]) 
		{
            cout<<"Not a Palindrome String\n"<<endl;
            return 0;
        }
        else
        {
        	cout<<"Palindrome String\n"<<endl;
        	return 0;
		}
    }
 
    
    return 0;
}