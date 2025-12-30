#include <iostream>
using namespace std;

int main(){
    bool isPrime = true;
    int n;
    cout << "Enter no.:";
    cin >> n;

    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << "Prime no.!" << endl;
    } else {
        cout << "Not a Prime no." << endl;
    }

    return 0;
}
