#include <bits/stdc++.h>

using namespace std;
int main() {
    int t, a, k;
    cin >> t;
    while(t--)
    {
            cin >> a >> k;
            if(k >= a)
                cout << k-a << "\n";
            else
                cout << (k%2^a%2) << "\n";
    }
    return 0;
}
