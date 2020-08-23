#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int a[100005], x[100005], y[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for(;t--;)
    {
	int k = 0, m = 1000000000, n;

	cin >> n;

	for(int i = 1; i <= n; i++)
	{
	    cin >> a[i];
	    m = min(m, a[i]);
	}

	for(int i = 1; i <= n; i++)
	{
	    if(a[i] % m == 0)
	    {
		x[k] = i;
		y[k] = a[i];
		k++;
	    }
	}

	sort(y, y + k);

	for(int i = 0; i < k; i++)
		a[x[i]] = y[i];

    k = 0; //My compiler needs the k=0 here. g++ -std=c++17 -o name name.cpp
	for(int i = 1; i < n; i++)
	{
	    if(a[i] > a[i+1])
	    k = 1;
	}

	if(k)
	    cout<<"NO"<<endl;
	else
	    cout<<"YES"<<endl;
    }
}
