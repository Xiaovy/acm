#include <bits/stdc++.h>
#define pb emplace_back
#define ll long long
#define lson rt << 1
#define rson rt << 1 | 1
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
int main(){ 
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int x1,y1,z1,x2,y2,z2;
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;
		ll ans = 0;
		int p = min(z1 , y2); z1 -= p; y2 -= p;
		ans += 2ll * p;
		p = min(z1 , z2); z1 -= p; z2 -= p;
		if (z2 > 0) {
			if (x1 < z2) ans -= 2ll * (z2 - x1);
		}
		printf("%lld\n" , ans);
	}
} 
