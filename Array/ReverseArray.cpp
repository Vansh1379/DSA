#include <iostream>
#include <vector>
using namespace std;

int findOddOneOut(vector<int>& arr) {
    int evenCount = 0, oddCount = 0;
    int evenIndex = -1, oddIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
            evenIndex = i;
        } else {
            oddCount++;
            oddIndex = i;
        }
    }

    if (evenCount > oddCount) return arr[oddIndex];
    else return arr[evenIndex];
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int oddOneOut = findOddOneOut(arr);
    cout << "Odd one out is: " << oddOneOut << endl;

    return 0;
}