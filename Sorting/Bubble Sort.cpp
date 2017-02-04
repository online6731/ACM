#include <bits/stdc++.h>
using namespace std;

void bubbleSort (auto beginIt, auto endIt) {
    for (auto it1 = beginIt; it1 != last; it1++)
        for (auto it2 = beginIt; it2 != last; it2++)
            if (*it1 > *it2) swap(*it1, *it2);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    bubbleSort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
