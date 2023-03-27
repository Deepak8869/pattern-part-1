#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = i-1;
        while (space)
        {
            /* code */
            cout<<" ";
            space--;
        }
        int j = n-i+1;
        int a = 1;
        while(j){
            cout<<a;
            a++;
            j--;
        }
        cout<<endl;
        i++;
        
    }
}