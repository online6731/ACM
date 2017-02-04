#include <bits/stdc++.h>
using namespace std;

void selectionSort (auto beginIt, auto endIt){
    for (auto it1 = beginIt; it1 != endIt; it1++)
        for (auto it2 = it1; it2 != endIt; it2++)
            if (*it1 > *it2) swap(*it1, *it2);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    selectionSort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
