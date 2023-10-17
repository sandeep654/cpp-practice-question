#include<iostream>
using namespace std;

int main(){

    int num,i=0,x=0;
    cout<<"Enter a number ";
    cin>>num;

    if(num<2)
    cout<<"invalid number";

    while(num>2)
         {  
            i=i+1;
            x=i*i;
            if(num==x)
             { cout<<"Square root of "<<num<<" is "<<i;
               break;}
            if(num<(i+1)*(i+1))
                 {
                    cout<<"Square root of "<<num<<" is "<<i;
                    break;
                 }
         }

        
}