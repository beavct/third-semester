#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int L, N;
    unsigned long long int total = 0;

    cin >> L >> N;

    total = N-1 + (L-N+1)*(L-N+1);

    cout << total << endl;

    return 0;
}