#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; //size of the array
    //your code goes here

    int *p = NULL; // Pointer initialized with null
    p = new int[n]; // Request memory
    for(int i=0; i<n; i++){
        cin>>p[i];
    }

    int max = p[0];
    for(int i=0; i<n; i++) {
        if(p[i]>max)
            max = p[i];
    }

    delete [] p;

    cout << max;



    return 0;
}
