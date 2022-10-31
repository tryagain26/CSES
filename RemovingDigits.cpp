#include <bits/stdc++.h>
using namespace std;

int maxx(string s){
	int ans = -2e9;
	for(int i = 0; i < s.length(); i++){
		ans = max(ans, s[i]-'0');
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
/*	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	string s;
	cin >> s;
	
	int val = stoi(s);
	int cnt = 0;
	while(val!=0){
		val = val - maxx(s);
		
		s = to_string(val);
		cnt++;
	}
	cout << cnt;
	return 0;
}