#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wave(int arr[][4],int row,int col)
{
    for(int j=0;j<col;j++)
    {
        //
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        else
        {
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}

int main() 
{
    // create 2d vector
    int n,m;
    cout<<"enter rows and cols of 2d vector"<<endl;
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m,1));
    // for(int i = 0; i < matrix.size(); i++) 
    // {
    //     for(int j = 0; j < matrix[i].size(); j++) 
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout<<"Rows ="<<matrix.size()<<endl;
    // cout<<"Cols ="<<matrix[0].size()<<endl;
    
    // for(int i=0;i<n;i++)
    // for(int j=0;j<m;j++)
    // cin>>matrix[i][j];


    // for(int i=0;i<n;i++)
    // {
    // for(int j=0;j<m;j++)
    // cout<<matrix[i][j]<<" ";
    // cout<<endl;
    // }   


}
