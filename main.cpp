#include <iostream>
using namespace std;

int BSearch(int arr[], int key, int left, int right) {

	int mid = (left + right) / 2;

	int val = arr[mid];

	cout << val;

	if(key == val) return mid;

	else if(key < val) return BSearch(arr, key, left, mid - 1);

	else return BSearch(arr, key, mid + 1, right);

}

int main(){

    int L1[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int key = 2;

    cout << BSearch(L1, 2, 0, 10);



    return 0;
}