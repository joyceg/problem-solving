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
it1=upper_bound(v.begin(),v.end(),3);
cout<<it1[0];
return 0;
}
