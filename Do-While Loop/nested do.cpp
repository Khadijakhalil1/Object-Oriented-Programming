#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        int j = 1;
        do {
            cout << "i = " << i << ", j = " << j << endl;
            j++;
        } while (j <= 2);
        i++;
    } while (i <= 3);

    return 0;
}

