#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int num;
        cin >> num;

        int count = 0;

        for (int i=0; i<num; i++) {

            int arr[num-1][2];
            cin >> arr[i][0] >> arr[i][1];

            if (arr[i][0] > arr[i][1]) {
                count++;
            }

        }

        cout << count << endl;
        
    }

    return 0;

}