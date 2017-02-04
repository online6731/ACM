#include <bits/stdc++.h>
using namespace std;

void countingSort(auto beginIt, auto endIt) {
    int mx = 0;
    for (auto it = beginIt; it != endIt; it++) mx = max (mx, *it);
    int a[mx + 1] = {0};
    for (auto it = beginIt; it != endIt; it++) a[*it]++;
    int i = 0;
    auto it = beginIt;
    while (i++ <= mx) while (a[i]--) *it++ = i;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    countingSort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
