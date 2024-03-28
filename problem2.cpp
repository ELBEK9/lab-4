#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &vector, int n){
    for(int i=0;i<n;i++){
        int key=vector[i];
        int j=i-1;
        while(j>=0 && vector[j]<key){
            vector[j+1]=vector[j];
            j=j-1;
        }
        vector[j+1]=key;
    }
}

int main() {
    int n;
    cin>>n;
    
    vector<int> numbers(n);
    
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    
    insertionSort(numbers, n);
    
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
    
    return 0;
}
