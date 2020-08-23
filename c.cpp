#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, min, aux;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> arr(n+1);
        cin >> min;
        arr[0] = min;
        for(int i=1; i<n; ++i)
        {
            cin >> aux;
            arr[i] = aux;
            if(aux<min)
                min=aux;
        }
        if(n==1)
        {
            cout << "YES\n";
        }
        else {
            int i = 1;
            if(arr[0] > arr[1])
            {
                if( gcd(arr[0],arr[1])==min )
                {
                    aux=arr[i+1];
                    arr[i+1] = arr[0];
                    arr[0] = aux;
                }
                else
                {

                }
            }
            while(i<n)
            {
                if(arr[i] > arr[i+1])
                {
                    aux=arr[i+1];
                    arr[i+1] = arr[0];
                    arr[]
                }
                ++i;
            }
        }
    }
    return 0;
}
