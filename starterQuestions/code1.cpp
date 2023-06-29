#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a digit";
    cin>>n;
    int fact=1;
    // for(int i=n; i>0;i--){
    //     fact=n*i;
    // }
    // So, yes the is correct but what's happning is that Every timem the loop is iterating the value of fact is overwritten
    // Iteration 1: fact = 5 * 5; fact becomes 25
    // Iteration 2: fact = 5 * 4; fact     becomes 20
    // Iteration 3: fact = 5 * 3; fact     becomes 15
    // Iteration 4: fact = 5 * 2; fact     becomes 10
    // Iteration 5: fact = 5 * 1; fact     becomes 5
    // instead do fact*=i;

    fact=1;
    for(int i=n; i>1; i--){
        fact*=i;
    }
    
    cout<<fact;
    // working of loop:
    // i = 5 f*=i => 5x1 => f=5
    // i = 4 f*=i => 5x4 => f=20
    // i = 3 f*=i => 20x3 => f=60
    // i = 2 f*=i => 60x2 => f=120
    // i = 1 f*=i => 120x1 => f=120 can be eliminated if we do i>1;
    return 0;
}