//Prove that the average time Complexity of Push_back operation in Vector is O(1) time.
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> v;

//     for (int i = 1; i <= 10; i++) {

//         // Push element
//         v.push_back(i);

//         // Current size and capacity
//         cout << "After push_back(" << i << "): ";
//         cout << "Size = " << v.size();
//         cout << ", Capacity = " << v.capacity() << endl;
//     }

//     return 0;
// }


//How to find the number of Occurance of an element in a vector. You need to use STL here.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main() {
//     vector<int> v={1,2,3,2,4,2,5,2};
//     int element = 5;
//     int occurance = count(v.begin(),v.end(),element);
//     cout<<"Ocurrance of "<<element<<" = "<<occurance<<endl;
//     return 0;
// }

//How to find maximum and minimum elements from the vector. USE STL here.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main() {
//     vector<int> v={10,25,5,40,15,30};

//     //Find maximum element
//     int maximum =*max_element(v.begin(),v.end());

//     //Find minmum element 
//     int minimum =*min_element(v.begin(),v.end());

//     cout<<"Maximum element = "<<maximum<<endl;
//     cout<<"Minimum element = "<<minimum<<endl;

//     return 0;
// }


//Find Lower bound and Upper Bound of a given element in a sorted vector. USE STL here to find them.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// int main() {
//     using namespace std;
//      vector<int> v={10,20,20,20,30,40,50};
//      int element=20;

//      //Lower bound
//      auto lb=lower_bound(v.begin(),v.end(),element);
     
//      //Upper bound
//      auto ub=upper_bound(v.begin(),v.end(),element);

//      cout<<"Lower bound = "<<*lb<<endl;
//      cout<<"Upper bound = "<<*ub<<endl;

//      return 0;
// }



//How to pass a vector to a function. Write a small code for it.
#include<iostream>
#include<vector>

using namespace std;

//Funtion that takes a vector
void printvector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<< " ";
    }
}
int main() {
    vector<int> v={10,20,30,40,50};

    //passing vector to function
    printvector(v);

   return 0;
}