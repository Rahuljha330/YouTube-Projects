#include<iostream>
#include<process.h>
int main()
{
	void calc(int,int,char);
	int a,b;
	char ch;
	cout<<"Enter two intergers:\n";
	cin >>a>>b;
	cout<<"\nEnter airthmetic operator(+,-,*,/,%):\n";
	cin>>ch;
	calc(a,b,ch);
	return 0;
	
	
	
	}
	
	int calc(int x,int y,char c)
	{
		
		switch(c)
		{ case'+': cout<<"\nSum of"<<x<<"and"<<y<<"is"<<(x+y);
		           break;
		           
		  case '-':cout<<"\nDifference of"<<x<<"and"<<y<<"is"<<(x-y);
		            break;
					
		  case'*': cout<<"\nProduct of"<<x<<"and"<<y<<"is"<<(x*y);
		           break;
		  case'/': if(x/y)
		           { cout<<"\nFirst integer should be "<<"greater than second.";
		           exit(0);
		           
												}		   		          
			
			       cout<<"\nQuotient:"<<x<<"/"<<y<<"is"<<(x/y);
			       break;
		  case'%': if(x<y)
		  
		         {
		         	cout<<"\nFirst integer should be"<<"greater than second.";
		         	exit(0);
		         	
							}	  
							
					cout<<"\nRemainder:"<<x<<"%"<<y<<"is"<<(x%y);
					break;
		  default:  cout<<"\nWrong operator!!!";
		            break;				
							     
			
			
		}
		
		return 0;
		
		
		
		/* this is my calculator program which will
		help you add,subtrat,divide and multiply the integers and thus i wanna say
		that it is a very useful program to help in future
		*/
		
		
	}
