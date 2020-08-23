#include <bits/stdc++.h>

using namespace std;
int main() {
    int t, a0, a1, a2, b0, b1, b2, sum, aux;
    cin >> t;
    while(t--)
    {
        cin>>a0>>a1>>a2>>b0>>b1>>b2;
        aux = min(b2,a0);
        b2-=aux;
        a0-=aux;
        aux=min(b2,a2);
        b2-=aux;
        a2-=aux;
        sum = min(a2,b1)*2-min(b2,a1)*2;
        cout << sum << "\n";
    }
    return 0;
}
