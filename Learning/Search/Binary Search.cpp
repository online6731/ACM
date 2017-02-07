#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int binarySearch (int givenArray[], int arraySize, int goalNumber) {
    int first = 0, last = arraySize, middle;
    while (first < last) {
        middle = (last + first) / 2;
        if (givenArray[middle] == goalNumber) return middle;
        else if (givenArray[middle] < goalNumber) first = middle + 1;
        else if (givenArray[middle] > goalNumber) last = middle;
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int goal;
    cin >> goal;
    cout << binarySearch(a, n, goal);
    return 0;
}
