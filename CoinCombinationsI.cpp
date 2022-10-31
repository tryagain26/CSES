#include <bits/stdc++.h>
using namespace std;

const int N = 110;
int a[N];
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,x;
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int dp[x+10] = {0};
	dp[0] = 1;
	for(int i = 1; i <= x; i++){
		for(int j = 0; j < n; j++){
			if(i-a[j] >= 0){
				dp[i] += (dp[i-a[j]])%mod;
			}
		}
	}
	long long ans = dp[x]%mod;
	cout << ans;
	return 0;

}