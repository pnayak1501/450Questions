#include <iostream>
using namespace std;

int minimum(int arr[], int n){
    int min;
    if(arr[0]<arr[1]){
        min = arr[0];
    }else{
        min = arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int maximum(int arr[], int n){
    int max;
    if(arr[0]>arr[1]){
        max = arr[0];
    }else{
        max = arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {100, 32, 43, 65, 56};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min = minimum(arr, len);
    int max = maximum(arr, len);
    cout<<"minimum: "<<min<<"\n";
    cout<<"maximum: "<<max<<"\n";
	return 0;
}
