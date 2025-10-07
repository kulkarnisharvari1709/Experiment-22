Aim:

To compare the execution time of Linear Search and Binary Search using C++ programs.
To understand the time complexity of these algorithms using Big O notation.
Software Used: VS Code

Theory

Algorithm Analysis measures the efficiency of an algorithm in terms of time and **space.
Linear Search:
Searches each element sequentially until the target is found.
Time Complexity:O(n) → grows linearly with input size.
Binary Search:
Works on sorted arrays.
Divides the search space in half repeatedly (divide-and-conquer).
Time Complexity: O(log n) → much faster for large datasets.
Big O notation describes the upper bound of an algorithm’s running time.
Using chrono library, we can measure actual execution time to observe the difference in efficiency.
Algorithm:

Step 1 – Linear Search:

Start.
Input the array and key to search.
Traverse the array sequentially from index 0 to n-1.
If the element matches the key, return index.
If no match is found, report “element not found”.
Measure the time taken using chrono.
Stop.
Step 2 – Binary Search:

Start.
Input the sorted array and key to search.
Initialize low = 0, high = n-1.
While low <= high, calculate mid = (low + high) / 2.
If arr[mid] == key, return index.
If arr[mid] < key, search the right sub-array (low = mid+1).
If arr[mid] > key, search the left sub-array (high = mid-1).
Measure the time taken using chrono.
Stop.
Conclusion

Successfully compared Linear Search and Binary Search execution times.
Linear Search has O(n) complexity, while Binary Search has O(log n) complexity.
Binary Search is significantly faster for large, sorted arrays.
Demonstrates how Big O notation predicts algorithm efficiency in practice.
Using chrono in C++ allows practical measurement of time complexity.
