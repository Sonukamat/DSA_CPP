#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
    // create vector , declare 
    vector<int>v;
    vector<int>v1(5,1);
    // size and capacity of vector
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    //update value
    v[1] =5;
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    // Delete value from vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(54);
    ans.push_back(125);

    //sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i =0; i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    //sort in decreasing order using greater<int>()
    sort(ans.begin(),ans.end(), greater<int>());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    //sort in decreasing order 2nd method using rbegin/rend
    sort(ans.rbegin(),ans.rend());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    //search in binary search
    cout<<binary_search(ans.begin(), ans.end(),55)<<endl;

    cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;

    //count
    int cnt = count(ans.begin(),ans.end(),54);
    cout<<cnt<<endl;

    //reverse
    reverse(ans.begin(),ans.end()); 

    //max min
    cout<<"Max: "<<*max_element(ans.begin(),ans.end())<<endl;
    cout<<"Min: "<<*min_element(ans.begin(),ans.end())<<endl;

    //lower bound and upper bound
    lower_bound(ans.begin(),ans.end(),54);
    upper_bound(ans.begin(),ans.end(),54);

    
}
