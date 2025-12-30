#include <iostream>
using namespace std;

int main(){
    long long fact =1; //int gets overflow at 13!
    int n;
    cout << "Enter no. to calculate factorial: ";
    cin >> n;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    cout << "Factorial: " << fact << endl;
    return 0;
}

/* 
Universal logic for factorial: 
5! = 5 * 4 * 3 * 2 * 1
sum
sum of n-1 nums

sum=sum*(n-1)

*/


