#include <iostream>
using namespace std;

int main() {
    int c, n;       
    cin >> c >> n;  
    int p[c - 1];   

    for (int i = 0; i < c; i++) { 
        cin >> p[i];
    }

    int power = 0, maxPower = -1, team = 0, flag;
    for (int i = 1; i <= c; i++) {
        power += p[c - i];
        if (i % n == 0) {
            team += 1;
            if (power >= maxPower) {
                maxPower = power;
                power = 0;
                flag = team;
            } else {
                power = 0;
            }
        }
    }
    if (c % n != 0) {
        if (power > maxPower) {
            maxPower = power;
            team += 1;
            flag = team;
        }
    }
    cout << flag << " " << maxPower;
}