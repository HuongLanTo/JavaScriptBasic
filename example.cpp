#include <iostream>
#include <math.h>
using namespace std;

bool SNT(int n) {
	if (n == 1 || n == 0) {
		return false;
	}
	int dem = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 0) {
		return true;
	}
	return false;
};

int count_SNT(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (SNT(a[i]) == true) {
			dem++;
		}
	}
	return dem;
};

int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	cout<<count_SNT(a, n);
	return 0;
}