#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "Enter no.: ";
    cin >> n;
    for(int i = 1; i<=n;i++){
        if(i%3==0){
            sum+=i;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Sum of all num div by 3: " << sum << endl;
    return 0;
}

