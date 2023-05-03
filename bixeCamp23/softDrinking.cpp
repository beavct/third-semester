#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool comp(int a, int b)
{
 return (a < b);
}
int main(){
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(k*l/nl,min(c*d,p/np))/n << endl;
    // tanto faz qual dos minimos pegamos, mas temos sempre que pegar dois

    return 0;
}