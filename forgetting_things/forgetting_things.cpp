#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int da,db,a,b;
    cin>>da>>db;
		if (db-da == 1){
		a = da*10+9;
		b = a + 1;
		cout<<a<<' '<<b;
	}
	else if(da==db){
		a = da*10+1;
		b = a + 1;
		cout<<a<<' '<<b;
	}
	else if (da==9 and db==1) cout<<"9 10";
	else cout<<"-1";
}

