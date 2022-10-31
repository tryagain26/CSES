#include <bits/stdc++.h>
using namespace std;

const int N = 110;
int a[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,x;
	cin >> n >> x;
	for(int i = 0; i <n; i++){
		cin >> a[i];
	}
	int dp[x+10];
	dp[0] = 0;
	for(int i  = 1; i <= x; i++){
		dp[i] = 2e9;
		for(int j = 0; j < n; j++){
			if(i-a[j] >= 0){
				dp[i] = min(dp[i],1+dp[i-a[j]]);			
			}
		}
	}
	cout << (dp[x] == 2e9?-1:dp[x]) << endl;
	return 0; 

}