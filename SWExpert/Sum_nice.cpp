#include <iostream>
#include <algorithm>
#include <cstring>
//12624kb, 8ms, 721byte
using namespace std;
 
int T = 10, tc;
int rsum[100];
int csum[100];
int dsum[2];
 
int init()
{
    memset(rsum, 0, sizeof(rsum));
    memset(csum, 0, sizeof(csum));
    memset(dsum, 0, sizeof(dsum));
    cin >> tc;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            int input;
            cin >> input;
            rsum[i] += input;
            csum[j] += input;
            if (i == j) dsum[0] += input;
            if (i + j == 99) dsum[1] += input;
        }
    }
    return max(*max_element(rsum, rsum + 100), max(*max_element(csum, csum + 100), *max_element(dsum, dsum + 2)));
}
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    while (T--) cout << '#' << tc << ' ' << init() << '\n';
    return 0;
}