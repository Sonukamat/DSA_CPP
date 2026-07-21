#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter a number:";
    cin>>num;
    int mul=1,ans=0,rem;
    while(num>0){
        rem=num%10;
        mul=mul*2;
        ans=ans+rem*mul;
        num=num/10;
    }
    cout<<"the decimal value is :"<<ans;
    return 0;
}