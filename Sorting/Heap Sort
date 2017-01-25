#include <bits/stdc++.h>
using namespace std;

void heapify(vector <int> &myList, int n, int i) {
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && myList[left] > myList[largest]) largest = left;
    if (right < n && myList[right] > myList[largest]) largest = right;
    if (largest != i) {
        swap(myList[i], myList[largest]);
        heapify(myList, n, largest);
    }
}

void myHeapSort(vector <int> &myList)
{
    int n = myList.size();
    make_heap(myList.begin(), myList.end());
    for (int i = n - 1; i > 0; i--) {
        swap(myList[0], myList[i]);
        heapify(myList, i, 0);
    }
}

void heapSort(auto beginIt, auto endIt){
    vector <int> a;
    for (auto it = beginIt; it != endIt; it++) a.push_back(*it);
    myHeapSort(a);
    int i = 0;
    for (auto it = beginIt; it != endIt; it++) *it = a[i++];
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    heapSort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
