#include <iostream>
using namespace std;

void arrange(int arr[], int n){
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}


int main() {
    int arr[] = {-100, -32, 43, 65, -56};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrange(arr,n);
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
	return 0;
}
