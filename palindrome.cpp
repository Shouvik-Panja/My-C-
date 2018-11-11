#include <iostream>
using namespace std;

int main()
{
    int n,num,rev=0,rem;
    cout<<"Enter any number: ";
    cin>>n;
    num=n;
    while(n!=0)
    {
      rem=n%10;
      rev=rev*10+rem;
     n=n/10;
    }
   cout<<"Reverse of the above number is: "<<rev<<endl;
   if(rev==num)
   cout<<num<<" is a palindrome number";
   else cout<<num<<" is not a palindrome number";
    return 0;
}
