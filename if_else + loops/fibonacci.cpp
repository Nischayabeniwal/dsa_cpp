#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of terms: ";
    cin >> n;

    int a = 0 ,b =1 , sum;
    for (int i =1;i<=n;i++){
        cout << a << " ";
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}
/* 
Universal logic for fibonacci:
0 1 1 2 3 5 8 13 21 34

a + b = sum 
a = b
b = sum
*/
