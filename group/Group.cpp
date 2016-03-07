#include <iostream>
using std::cout;
using std::endl;






void Reverse() {
    const int kLength = 5;
    int start[] = {1, 2, 3, 4, 5};

    
     int n = kLength -1;
      for ( int i = 0; i < kLength; i++) {
        cout << start[i];
        if (i < kLength - 1)
        cout << ", ";
        if (i == kLength -1)
        cout << endl;
    }
    
    for (int i = 0; i < kLength/2; i++) {
        int temp[kLength];
        temp[n] = start[i];
        start[i] = start[n];
        start[n] = temp[n];
    
    n--;
    }
    
    for ( int i = 0; i < kLength; i++) {
        cout << start[i];
        if (i < kLength)
        cout << ", ";
        if (i == kLength -1)
        cout << endl;
    }
    
    
    
    
}

int main () {
    
    Reverse();
    return 0;
    
}