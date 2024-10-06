#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,i=0;
    cout<<"enter the decimal number to be converted:";
    cin>>num;
    while(num!=0)
    {
        rem=num%2;
        sum=sum+rem*pow(10,i);
        i++;
        num=num/2;
    }
    cout<<"the binary conversion is: "<<sum;

}