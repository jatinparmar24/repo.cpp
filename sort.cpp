// or we can do it little bit sort and mixed one with two like==

// Q-1  = largest and smallest

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << "Largest: " << max << "\nSmallest: " << min << endl;
    return 0;
}


// Q-2 reversed

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}


// Q-3 = Find the kth smallest and kth largest element in the array

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    sort(arr, arr + n);
    cout << k << "rd Smallest: " << arr[k-1] << endl;
    cout << k << "rd Largest: " << arr[n-k] << endl;

    return 0;
}


// Q-4. Move All Zeroes to End Without Changing Order of Non-Zero Elements

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i];

    while (count < n)
        arr[count++] = 0;

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}


// Q-5 = Find the contiguous subarray with the maximum sum
//  Kadane's Algorithm :-Maximum Subarray Sum

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_sum = arr[0], current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << "Maximum Subarray Sum: " << max_sum << endl;
    return 0;
}


// Q-6    Anagram      :- description = 	Same characters, different order     :- Technique = sort and compare


#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main() {
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;

    if (isAnagram(s1, s2))
        cout << "The strings are anagrams!" << endl;
    else
        cout << "Not anagrams." << endl;

    return 0;
}

// Q - 7 Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;
    int j = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3};
    int len = removeDuplicates(arr);
    for (int i = 0; i < len; i++) cout << arr[i] << " ";
    return 0;
}


// remove duplicate from array

#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool repeated = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                repeated = true;
                break;
            }
        }
        if (!repeated)
            cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4};
    removeDuplicates(arr, 6); 
}

// FizzBuzz count
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 15 == 0)
            cout << "FizzBuzz\n";
        else if (i % 3 == 0)
            cout << "Fizz\n";
        else if (i % 5 == 0)
            cout << "Buzz\n";
        else
            cout << i << endl;
    }
}