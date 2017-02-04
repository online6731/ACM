#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int steps = 0;

int binarySearch (int givenArray[], int arraySize, int goalNumber) {
    int first = 0, last = arraySize, middle;
    while (first < last) {
        steps++;
        middle = (last + first) / 2;
        cout << "Step " << steps << " : " << "range[" << first + 1 << " , " << last << "]  middle index(" << middle + 1 << ")  middle index number(" << givenArray[middle] << ") So ";
        if (givenArray[middle] == goalNumber) {
            cout << "GOAL NUMBER IS FOUNDED!";
            return middle;
        }
        else if (givenArray[middle] < goalNumber) {
            cout << " RIGHT";
            first = middle + 1;
        }
        else if (givenArray[middle] > goalNumber) {
            cout << " LEFT";
            last = middle;
        }
        cout << endl << endl;
    }
}
int main() {
    int n;
    cout << "How many number do you have: ";
    cin >> n;
    int a[n];
    cout << "to use default numbers from 1 to " << n << " press 1 and to input your numbers press number 2 : " << endl << endl;
    if (getch() == '1') {
        cout << "Your numbers are: ";
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
            cout << i + 1 << " ";
        }
    }
    else {
        cout << "Your numbers are: ";
        for (int i = 0; i < n; i++) cin >> a[i];
    }
    cout << endl << "Your goal number is: ";
    int goal;
    cin >> goal;
    cout << endl << endl << "Your number is in index: " << binarySearch(a, n, goal) + 1 << endl;
    return 0;
}
