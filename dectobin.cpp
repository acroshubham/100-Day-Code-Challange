// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a digit to calcuate it in binary representation\n";
//     cin>>n;
//     int ans=0;
//     int i=0;
//     // it will go on until the bits
//     while(n!=0){
//         int bit = n&1;
//         // It will give us the idea of the the last bit; 
//         // e.g. 5->101. As we did 1 and with 1, we get one. 
//         // 101
//         // & 1
//         // ~~~
//         //   1
//         // The great power of n is that if we do it if we do 1&1 we get 1 1&0 we get  zero.
//         // So, from here we get the bits of the number and that we store that in bit variable.
//         ans=(bit*pow(10,i))+ans;
//         // This forumla will help to form the digits 
//         // 1*10^0+0=1
//         // n>>1
//         // ans =1;
//         // 0*10^1+1=1;
//         // ans=1;
//         // n>>1
//         // 1*10^2+1=101;
//         n = n>>1;
//         i++;
//     }
//     cout<<"The binary representation of the number is\n"<<ans;
// return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to calculate its binary representation: ";
    cin >> n;

    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "The binary representation of the number is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}
// The code is not working because the pow function returns a floating point value
