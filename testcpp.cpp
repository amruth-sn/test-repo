#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 50; i++){
        cout << (i*337) % 11 << " ";
    }

    return 0;
}
