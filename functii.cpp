#include "functii.h"
#include <iostream>
using namespace std;

void read(int a[],int n)
{
	for (int i = 0;i <n;i++)
	  cin >> a[i];
	
}
void add(int n, int a[], int b[], int c[], int d[] )
{
	static int t[MAX] = {};
	for (int i = 0;i < n;i++)
		t[i] = a[i] + b[i] + c[i] + d[i];
	for (int i = 0; i < n; i++) {
		cout << t[i] << " ";

	} cout << endl;
	
}
