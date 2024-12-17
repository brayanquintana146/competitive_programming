#include <bits/stdc++.h>
using namespace std;
 
void sort(int *numbers, int n);
 
int main() {
	int n,num;
	cin>>n;
	int original_n = n;
	int numbers[n];
	while(n){
		cin>>num;
		numbers[n-1] = num;
		n--;
	}
	
	sort(numbers, original_n);
	
	for(int i=0;i<original_n;i++){
		cout<<numbers[i]<<' ';
	}
}

void sort(int *numbers, int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if (numbers[i]>numbers[j]){
				int aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
		}
	}
}
