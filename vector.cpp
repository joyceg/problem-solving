#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
vector<int> test;
int a;
a=20;
test.push_back(a);
test.push_back(a);
vector<int> b;
b=lower_bound(test.begin(),test.end(),10);
cout<<test[0];
return 0;

}

