#include <iostream>

using namespace std;

int main() {
    int a[]={1,2,3,4,5};
    int f=a[0];
    for(int i=0;i<4;i++){
        a[i]=a[i+1];
    }
    a[4]=f;
    for(int i=0;i<5;i++){
        cout << a[i]<<" ";
    }
}