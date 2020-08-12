#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >>x>>y>>z;

    int max;
    if ( x > y) max = x;
    else max = y;
    
    if (max > z) cout << max <<endl;
    else cout << z << endl;
}