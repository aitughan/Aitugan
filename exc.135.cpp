#include <iostream>
using namespace std;
int main () {
    int s=0;
    while (s<=10) {
        int a=rand()%2;
        cout<<a<<" ";
        s+=a;
    }
    return 0;
}
