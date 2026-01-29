#include<iostream>
using namespace std;
int main() {
    int row,col;
    for(row=1;row<=5;row+=1){
        //space
        for(col=1;col<=5-row;col+=1)
            cout<<" ";
        //* printing
        for(col=1;col<=2*row-1;col+=1)
            cout<<"*";
            cout<<endl;
    }
}