#include <iostream>  
using namespace std;  
int main()  
{  
  //try reverse number using recursion
int n, reverse=0, rem;    
cout<<"Enter a number: ";    
cin>>n;    
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
 cout<<"Reversed Number is : "<<reverse<<endl;     
return 0;
  
 
}  
