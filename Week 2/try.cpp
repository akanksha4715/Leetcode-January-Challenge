#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int ab1[]= {1,2,3,4,5};
    int ab[]= {1,2,3,4,5};
    if(equal(begin(ab),end(ab1),begin(ab1)))
    cout<<1;
    else
    cout<<0;
    return 0;
}