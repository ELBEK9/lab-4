#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int> &vector, int n, int v){
    int value=-1;
    
    for(int i=0;i<n;i++){
        if(vector[i]==v){
            value=i;
            break;
        }
    }
    
    for(int i=0;i<value;i++){
        for(int j=i+1;j<value;j++){
            if(vector[i]<vector[j]){
                int temp=vector[i];
                vector[i]=vector[j];
                vector[j]=temp;
            }
        }
    }
    
    for(int i=value+1;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vector[i]>vector[j]){
                int temp=vector[i];
                vector[i]=vector[j];
                vector[j]=temp;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    
    vector<int> numbers(n);
    
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    
    int v;
    cin>>v;
    
    Sort(numbers, n, v);
    
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
    
    return 0;
}
