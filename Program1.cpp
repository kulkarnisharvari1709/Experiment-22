#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Linear Search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key) return i;
    return -1;
}

// Binary Search function (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n = 100000;  // Size of array
    int arr[n];
    for (int i = 0; i < n; i++) arr[i] = i; // Fill array with sorted numbers
    int key = n - 1;

    // Measure Linear Search time
    auto start = high_resolution_clock::now();
    linearSearch(arr, n, key);
    auto end = high_resolution_clock::now();
    auto durationLinear = duration_cast<microseconds>(end - start);
    cout << "Linear Search time: " << durationLinear.count() << " microseconds\n";

    // Measure Binary Search time
    start = high_resolution_clock::now();
    binarySearch(arr, n, key);
    end = high_resolution_clock::now();
    auto durationBinary = duration_cast<microseconds>(end - start);
    cout << "Binary Search time: " << durationBinary.count() << " microseconds\n";

    return 0;
}
