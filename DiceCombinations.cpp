#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n;
	cin >> n;
	long long dp[n+5]= {0};
	dp[0] = 1;
	dp[1] = 1;

	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= 6; j++){
			if(i-j >= 0){
				dp[i] += (dp[i-j])%mod;
			}	
		}
	}
	long long ans = dp[n]%mod;
	cout << ans;
	return 0;
}