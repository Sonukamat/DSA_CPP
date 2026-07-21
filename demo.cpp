#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter a number:";
    cin>>num;
    int mul=1,ans=0,rem;
    while(num>0){
        rem=num%10;
        num=num/10;
        ans=ans+rem*mul;
        mul=mul*2;
    }
    cout<<"the decimal value is:"<<ans;
    return 0;
}