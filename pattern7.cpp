#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    char a = 'A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<a<<" ";  
            j++;
        }
        cout<<endl;
        a++;
        i++;
    }
}