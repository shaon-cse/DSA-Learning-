/*

* 
* *
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    cout<<endl;
}