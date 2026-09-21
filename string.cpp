#include<iostream>
using namespace std;
int main() {
    string s="rohit";
    //Reverse string
    int start = 0,end=s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<s;
    //size of string
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<endl;
    cout<<size<<" ";
    //palindrome
    string s2="naman";
    start =0,end=s2.size()-1;
    while(start<end)
    {
        if(s2[start]!=s2[end])
        {
            cout<<"Not a Palindrom";
            return 0;
        }
        start++,end--;
    }
    cout<<"It is a palindrome";

}