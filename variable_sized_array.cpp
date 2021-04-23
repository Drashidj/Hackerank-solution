#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,s,p1,p2;
    vector<vector<int>>vec;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {   vector<int>v;
        int w;
        cin>>s;
        for(int j=0;j<s;j++)
        {
           cin>>w;
           v.push_back(w);
        }
        vec.push_back(v);
    }
    for(int h=0;h<q;h++)
   {
        cin>>p1>>p2;
        cout<<vec[p1][p2]<<endl;
    }
    
    return 0;
}
