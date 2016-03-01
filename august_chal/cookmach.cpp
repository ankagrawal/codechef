#include<iostream>
#include<vector>

using namespace std;

int getpowerof2(int i) {
    int pow = 0;
    while((i >> (pow+1)) > 0) {
        pow++;
    }
    return pow;
}

int getdist(int a, int b) {
    int nopr = 0;
    if(a == b) {
        return nopr;
    }
    while(a%2 == 1 && a>1) {
        a = (a-1)/2;
        nopr++;
    }
    if(a == b) {
        return nopr;
    }
    if(a > b) {
        swap(a, b);
    }
    return nopr + getpowerof2(b/a);
}

int main() {
    int ntest = 0;
    cin>>ntest;
    for(int i = 0; i < ntest; i++) {
        int A, B;
        cin>>A>>B;
        cout<<getdist(A, B)<<endl;
    }
}
