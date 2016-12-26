#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

vector<int> v;
vector<int>::iterator it1,it2;
v.push_back(1);
v.push_back(2);
v.push_back(4);
sort(v.begin(),v.end());
it1=upper_bound(v.begin(),v.end(),3);
it2=lower_bound(v.begin(),v.end(),2);
cout<<"Lower bound of 2 is: "<<it2[0]<<endl;
cout<<it1[0]<<endl;
return 0;
}
