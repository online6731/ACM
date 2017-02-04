#include <bits/stdc++.h>
using namespace std;

void myQuickSort(vector <int> &myList, int left, int right){
    int pivot = myList[(left + right) / 2], i = left, j = right;
    while (i <= j) {
        while (myList[i] < pivot) i++;
        while (pivot < myList[j]) j--;
        if (i <= j) swap(myList[i++], myList[j--]);
    }
    if (left < j) myQuickSort(myList, left, j);
    if (i < right) myQuickSort(myList, i, right);
}

void quickSort(auto beginIt, auto endIt){
    vector <int> myList;
    for (auto it = beginIt; it != endIt; it++) myList.push_back(*it);
    myQuickSort(myList, 0, myList.size() - 1);
    int i = 0;
    for (auto it = beginIt; it != endIt; it++, i++) *it = myList[i];
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    quickSort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
