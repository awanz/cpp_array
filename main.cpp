#include <iostream>

using namespace std;

int main()
{
    int angka[10];

    for(int i = 0; i < 10; i++){
        angka[i] = i;
    }

    for(int j = 0; j < 10; j++){
        cout << angka[j] << endl;
    }

    return 0;
}
