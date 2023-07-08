#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int game (char a1, char a2, char a3, char b1, char b2, char b3, char c1, char c2, char c3, char symbol) {
    if (a1==symbol && a2==symbol && a3==symbol) return 1;
    else if (b1==symbol && b2==symbol && b3==symbol) return 1;
    else if (c1==symbol && c2==symbol && c3==symbol) return 1;
    else if (a1==symbol && b1==symbol && c1==symbol) return 1;
    else if (a2==symbol && b2==symbol && c2==symbol) return 1;
    else if (a3==symbol && b3==symbol && c3==symbol) return 1;
    else if (a1==symbol && b2==symbol && c3==symbol) return 1;
    else if (a3==symbol && b2==symbol && c1==symbol) return 1;
    else return 0;
}

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        char a1, a2, a3;
        char b1, b2, b3;
        char c1, c2, c3;

        cin >> a1 >> a2 >> a3;
        cin >> b1 >> b2 >> b3;
        cin >> c1 >> c2 >> c3;

        int main_O = game (a1, a2, a3, b1, b2, b3, c1, c2, c3, 'O');
        int main_X = game (a1, a2, a3, b1, b2, b3, c1, c2, c3, 'X');
        int main_plus = game (a1, a2, a3, b1, b2, b3, c1, c2, c3, '+');

        if (main_O == 1) cout << 'O' << endl;
        else if (main_X == 1) cout << 'X' << endl;
        else if (main_plus == 1) cout << '+' << endl;
        else cout << "DRAW" << endl;

    }

    return 0;

}