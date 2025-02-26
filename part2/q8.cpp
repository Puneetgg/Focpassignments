#include <iostream>
#include <unordered_set>

using namespace std;

int findLongestConseqSubseq(int arr[], int n) {
    unordered_set<int> S;
    int ans = 0;

    // Insert all array elements into the set
    for (int i = 0; i < n; i++) {
        S.insert(arr[i]);
    }

    // Check each possible sequence from the start
    for (int i = 0; i < n; i++) {
        // If current element is the starting element of a sequence
        if (S.find(arr[i] - 1) == S.end()) {
            // Then check for the next elements in the sequence
            int j = arr[i];
            while (S.find(j) != S.end()) {
                j++;
            }

            // Update the maximum length of the sequence
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 9, 3, 10, 2, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the longest consecutive subsequence is " << findLongestConseqSubseq(arr, n) << endl;
    return 0;
}