#include<iostream>
using namespace std;

int main(){
    int num,ans=0,rem;
    cout<<"Enter a number ";
    cin>>num;
    int x=num;
   
    while(num){
    rem=num%10;
    num=num/10;
    ans=ans*10+rem;
     }
 cout<<ans<<" " <<rem<<endl;
    if(x<0)
    {
        cout<<"false";
    }
    else if (ans==x)
       {
        cout<<"Yes,"<<x<< " is palindrome number";
       }
    else
      {
        cout<<"Sorry,"<<x<<" is not palindrome number";
      }

}