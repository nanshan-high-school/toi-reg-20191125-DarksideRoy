#include <iostream>
using namespace std;
// 27125 655249 第三題

int main() {
    int n, h, m;
    int time[20] = {0};
    cin >> n;
    cin >> h;
    cin >> m;      

    for (int i = 0; i < n; i++) {
        cin >> time[i];     
    }

    int x;
    do {
        cin >> x;

        if (x == 0) {
            break;
        }

        int t = m;
        for (int i = 0; i < x; i++) {
            t += time[i];
        }
        
        int y = 0;
        while (t >= 60) {
            t -= 60;
            y++;
        }

        if (h + y - 10 < 0) {
            cout << "0";
        }

        cout << h + y << ":";

        if (t - 10 < 0) {
            cout << "0";
        }

        cout << t << "\n";

    } while(x != 0);
}
