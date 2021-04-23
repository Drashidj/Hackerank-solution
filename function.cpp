#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int l,int m,int o,int p)
 {
    int max=0;
    
    if(max<l)
    {
        max=l;
    }
    if(max<m)
    {
        max=m;
    }
    if(max<o)
    {
        max=o;
    }
    if(max<p)
    {
        max=p;
    }
    return max;
 }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
