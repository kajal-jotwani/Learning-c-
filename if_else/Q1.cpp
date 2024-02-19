#include<iostream>
using namespace std;

int main(){
    
     int num = 3;
    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num + count << " ";
            count++;
        }
        cout << endl;
        num = num + count;
        count = 0;
    }
}



