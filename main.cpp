#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int a[5];
    char b[5];
    char c[5];
    srand(time(0));
    int no = 0;
    string g = "", u;

    for (int x = 0; x < 6; x++) {
        a[x] = rand();
        //cout << char((a[x] % 42) +  48) << endl;
        b[x] = char((a[x] % 26) +  65);
    }


    for (int y = 0; y < 6; y++) {
        g += b[y];
    }

    cout << g << endl;


    cin >> u;
    if (g == u) {
        cout << "Correct guess!";
        return 0;
    }

    else {
        strcpy(c, u.c_str());
        for (int z = 0; z < 6; z++) {
            if (c[z] == b[z]) {
                    no++;
                    cout << c[z] << " is correct\n";
            }
            else if (c[z] != b[z]){
                cout << c[z] << " is not correct\n";
            }
        }
    }
}
