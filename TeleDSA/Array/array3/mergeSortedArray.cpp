#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(n + m);
    
    int i = 0; // index for arr1
    int j = 0; // index for arr2
    int k = 0; // index for res

    // 1. Compare and merge until one array is empty
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            res[k] = arr1[i]; // Corrected index from k to i
            i++;
        } else {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    // 2. Add remaining elements from arr1 (if any)
    while (i < n) {
        res[k++] = arr1[i++];
    }

    // 3. Add remaining elements from arr2 (if any)
    while (j < m) {
        res[k++] = arr2[j++];
    }

    // Printing the result
    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1, 3, 6, 9};
    vector<int> v2 = {2, 4, 5, 10};

    mergeSortedArray(v, v2);
    return 0;
}