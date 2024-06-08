#include<cctype>
#include<iostream>
#include<string>
using namespace std;

int return_nth_term(int n){
    int first=0, second=1,fib;
    if(n == 0){
        return first;
    }
    if(n == 1){
        return second;
    }
    if(n>=2){
        for(int i=2; i<=n; i++){
            fib = first+second;
            first = second;
            second = fib;
        }
        return fib;
    }
}

int main()
{
    int n;
    cout<<"enter nth term:";
    cin>>n;
    cout<<return_nth_term(n);
    return 0; 
}
