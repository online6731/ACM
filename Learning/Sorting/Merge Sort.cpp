#include <bits/stdc++.h>
using namespace std;

void myMerge(vector <int> &myList, int l, int m, int r){
    vector <int> myNewList(r - l + 1);
    int k = 0, i = l, j = m + 1;
    while(k < r - l + 1) myNewList[k++] = (myList[i] < myList[j] && i <= m || j > r) ? myList[i++] : myList[j++];
    for (int i = l; i <= r; i++) myList[i] = myNewList[i - l];
}

void myMergeSort(vector <int> &myList, int left, int right){
    if (left < right) {
        int middle = (right + left) / 2;
        myMergeSort(myList, left, middle);
        myMergeSort(myList, middle + 1, right);
        myMerge(myList, left, middle, right);
    }
}

void mergeSort(auto beginIt, auto endIt){
    vector <int> myList;
    for (auto it = beginIt; it != endIt; it++) myList.push_back(*it);
    myMergeSort(myList, 0, myList.size() - 1);
    int i = 0;
    for (auto it = beginIt; it != endIt; it++, i++) *it = myList[i];
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    mergeSort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
