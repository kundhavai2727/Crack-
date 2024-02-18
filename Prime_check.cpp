#include <iostream>
using namespace std;
int main() {
    int n, i;
    bool flag = false;
    cout << "Number: ";
    cin >> n;
    for (i=2;i<n;i++){
        if (n % i == 0){
            flag = true;
            break;
        }
    }
    if (flag == true){
        cout << "It's a composite number.";
    }
    else{
        cout << "It's a prime number.";
    }
    return 0;
}
