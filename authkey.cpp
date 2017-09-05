/*  Made by shohamessi
    First commit on 2 September 2017
    This is a dev version that prints the generated string!
    Donate here: 1hrKwoas6dK5937WxqRNVQbcyayxPWivf (Bitcoin)
    This is the release version */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    cout << "authkey by shohamessi\nReleased 5 September 2017\nGuess the generated 6 letter code! Only captial letters are included\n";

    //declaring required variables
    int a[5];
    char b[5];
    srand(time(0));
    int no = 0;
    string g = "", u;

    //generates random code
    for (int x = 0; x < 6; x++) {
        a[x] = rand();
        b[x] = char((a[x] % 26) +  65);
    }

    //compiles array of chars to one string
    for (int y = 0; y < 6; y++) {
        g += b[y];
    }

    cout << "Guess the code: ";
    //user input
    cin >> u;

    //compares user input to generated string
    if (g == u) {
        cout << "Correct guess!";
        return 0;
    }

    else {
        for (int z = 0; z < 6; z++) {
            if (u[z] == g[z]) {
                    no++;
                    cout << u[z] << " is correct\n";
            }
            else if (u[z] != g[z]){
                cout << u [z] << " is not correct\n";
            }
        }
    }

    //loops code until guess is correct
    do {
        cout << "Guess the code: ";
        cin >> u;
        if (g == u) {
            cout << "Correct guess!";
            return 0;
        }

        else {
            for (int z = 0; z < 6; z++) {
                if (u[z] == g[z]) {
                        no++;
                        cout << u[z] << " is correct\n";
                }
                else if (u[z] != g[z]){
                    cout << u [z] << " is not correct\n";
                }
            }
        }

    } while (g != u);
}
