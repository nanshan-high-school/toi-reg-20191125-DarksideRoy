#include <iostream>
using namespace std;
// 27125 655249 第二題

int compare(int b[], int length);

int main() {
    float M, A, N, E;
    int days[7] = {0};
    int times[4] = {0};

    for (int i = 0; i < 7; i++) {
        cin >> M;
        times[0] += M;
        cin >> A;
        times[1] += A;      
        cin >> N;
        times[2] += N;
        cin >> E;
        times[3] += E;

        days[i] += M + A + N + E;        
    }

    cout << "\n" << compare(days, 7) << "\n";

    if (compare(times, 4) == 1) {
        cout << "morning";
    } else if (compare(times, 4) == 2) {
        cout << "afternoon";
    } else if (compare(times, 4) == 3) {
        cout << "night";
    } else if (compare(times, 4) == 4) {
        cout << "early morning";
    }
}

int compare(int b[], int length) {
    int a[length];
    for (int i = 0; i < length; i++) {
        a[i] = b[i];
    }

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (a[i] < a[j]) {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        if (a[0] == b[i]) {
            int num = i + 1;
            return num;
        }
    }

    return 0;
}
