#include <bits/stdc++.h>

using namespace std;

int main(){
    double d, L, v1, v2;
    
    cin >> d >> L >> v1 >> v2;

    double resto = L-d;
    v1+=v2;
    cout << setprecision(20) << resto/v1 << endl;

    return 0;
}