#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "The loop you wanna skip is ";
    cin >> num;

    for( int i = 0; i < 10; i++ )
    {
        if (i == num){
            continue;
        }
        cout << "The" << i << "loop \n";

    }
    return 0;
}