#include<iostream>
using namespace std; 
int main(){
    int i=1;
    do{
       if(i%3==0){
            cout << "Red" << endl;
        }else if(i%5==0){
            cout <<"White" << endl;
        }else if(i%3==0 && i%5==0){
            cout << "Red&White" << endl;
        }
        else{
            cout << i << endl;
        }
        i++;
    }while(i<=100);

    return 0;
}