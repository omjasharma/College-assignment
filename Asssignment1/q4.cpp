#include<iostream>
using namespace std;
int main()
{
  int num,rev=0,rem,copy;
  cout<<"enter any no;"<<endl;
  cin>>num;
  copy=num;
  while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
     }
     if(rev==copy)
        cout<<"palindrome no";
     else
        cout<<"not palindrome";
     return 0;
} 
