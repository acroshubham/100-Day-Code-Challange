// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number to calculate it's decimal format\n";
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int bit = n&1;
//         int digit = n%10;
//         if(bit==1){
//             ans=ans+pow(2,i);
//             i++;
//         }else {
//             return 0;
//         }
//         cout<<ans;
//     }
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a binary number to calculate its decimal representation: ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0) {
        int digit = n % 10;
        ans = ans + (digit << i);
        n = n / 10;
        i++;
    }

    cout << "The decimal representation of the number is: " << ans << endl;
    return 0;
}
