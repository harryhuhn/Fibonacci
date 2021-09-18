#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;
int fib(int);
int main(){
    int index;
    cout<<"Enter the desired index: "<<"\n";
    cin>>index;
    fib(index);
    /*fib(3);
    fib(7);
    fib(12);*/
}

int fib(int m){
    vector<int> fibonacci;
    fibonacci.push_back(1);
    fibonacci.push_back(1);
    for(int i=2; i<20; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    cout<<to_string(fibonacci[m])<<"\n";
    return fibonacci[m];
    /*for(int j=0; j<20; j++){
        cout<<to_string(fibonacci[j])<<"\n";
    }*/
}