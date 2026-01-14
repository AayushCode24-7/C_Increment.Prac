#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter a number: ";
    cin>>n;
    double factorial = 1;
    
    if (n<=0){
        factorial=1;
    }
    else{
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
    }
    cout<<factorial<<endl;
}
