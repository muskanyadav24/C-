#include<iostream>
using namespace std;
int main(){
    int n,i=1;

    cout << "Enter the number :- ";
    cin >> n;

    for(int i=1; i<=n/2; i++){
        if(n % i == 0){
            cout << i << ",";
        }
    }

    return 0;
}