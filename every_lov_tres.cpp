#include <bits/stdc++.h>
using namespace std;
 
string smaller (int n){
	if (n == 1 || n == 3) return "-1";
	else if (n%2 == 0) return string(n-2,'3') + "66";
	else if (n == 5) return "36366";
	else return string(n-5,'3') + "36366";
}
 
int main() {
	int n,c;
	string x;
	cin>>c;	
	while(c--){
		cin>>n;	
		if (n <= 0) break;
		x = smaller(n);
		cout<<x<<endl;
	}
}
