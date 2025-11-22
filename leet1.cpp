#include<iostream>
using namespace std;

void found(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == key){
                cout << i << " " << j << endl;
            }
        }
    }
}

int main(){
    int arr[5], b;

    cout << "Enter Elements Of Array : " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Enter your target number : " << endl;
    cin >> b;

    found(arr, 5, b);
}
