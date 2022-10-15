#include<iostream>
using namespace std;

void merging(int arr[], int brr[],int crr[], int m,int n) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < m && j < n) {
		if (arr[i] < brr[j]) {
			crr[k++] = arr[i++];
		}
		else {
			crr[k++] = brr[j++];
		}
	}
	// HERE INITIALISATION IS DONE BEFORE THAT IS WHY SEMICOLON IS JUST AFTER FOR LOOP
	for (; i < m; i++) {
		crr[k++] = arr[i];
	}
	for (; j < n; j++) {
		crr[k++] = brr[j];
	}

}
int main()
{
	int arr[] = { 3,8,16,20,25 };
	int m = sizeof(arr) / sizeof(arr[0]);
	int brr[] = { 4,10,12,22,23 };
	int n = sizeof(brr) / sizeof(brr[0]);
	
	int crr[10];
	merging(arr, brr, crr, m, n);
	for (int i = 0; i < 10; i++) {
		cout << crr[i] << " ";
	}
	return 0;
}
