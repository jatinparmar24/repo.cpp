// Q - 1 = Two Sum and return Indices with hash method

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndex; // stores number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // check if complement already exists in the map
            if (numIndex.find(complement) != numIndex.end()) {
                return {numIndex[complement], i};
            }
            numIndex[nums[i]] = i; // store the current number with its index
        }
        return {}; // this line should not be reached as per the problem statement
    }
};

//  Time and Space Complexity:
// Time: O(n), where n is the number of elements in nums
// Space: O(n), for storing elements in the unordered_map

// Q - 2 == Add Two Number
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();  // dummy head for result list
        ListNode* current = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return dummy->next;
    }
};

// Explanation:
// We use a dummy node to easily handle the head of the result list.
// We add digit-by-digit from both lists, including the carry if any.
// We update the carry as carry = sum / 10, and the new digit as sum % 10.
// We keep moving until both lists are exhausted and there's no carry left.

// Time and Space Complexity:
// Time: O(max(n, m)) — where n and m are lengths of the two lists.
// Space: O(max(n, m)) — for the result linked list.


// Q - 3 = Longest Substring Without Repeating Characters

// Given a string s, find the length of the longest substring without duplicate characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen; // char -> index
        int maxLength = 0;
        int start = 0; // window start

        for (int end = 0; end < s.length(); ++end) {
            char current = s[end];

            // if character was seen and is in the current window
            if (seen.count(current) && seen[current] >= start) {
                start = seen[current] + 1; // move start just after the duplicate
            }

            seen[current] = end; // update last seen index
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};

//  Explanation:
// start and end represent the current window of the substring.
// We keep a map of characters to their last seen index.
// When we encounter a duplicate character within the window, we move start to the right of the last seen index of that character.
// Keep updating the max length of the window.

//  Time and Space Complexity:
// Time: O(n), where n = length of string s
// Space: O(min(n, m)), where m = total number of unique characters (could be 26 for lowercase only or 128 for ASCII)

// Q - 5 Longest Palindromic Substring

Given a string s, return the longest palindromic substring in s.

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, maxLen = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            expandAroundCenter(s, i, i, start, maxLen);     // odd-length palindromes
            expandAroundCenter(s, i, i + 1, start, maxLen); // even-length palindromes
        }
        
        return s.substr(start, maxLen);
    }

    void expandAroundCenter(const string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            --left;
            ++right;
        }

        int len = right - left - 1;
        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    }
};

//  Explanation:
// For each character in the string, we try to expand around it for:
// Odd-length palindromes (center at i)
// Even-length palindromes (center between i and i + 1)
// We track the start index and max length of the longest palindrome found so far.
// Finally, return the substring using start and maxLen.

//  Time and Space Complexity:
// Time: O(n²), where n = s.length() (we expand from every center)
// Space: O(1), no extra space used

// Q - 6 Zigzag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);

// solution

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) return s;

        vector<string> rows(numRows);
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;

            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;

            currRow += goingDown ? 1 : -1;
        }

        string result;
        for (string& row : rows)
            result += row;

        return result;
    }
};


// Explanation:
// We use a vector of strings, one for each row.
// We simulate the zigzag:
// Move down until the bottom, then up until the top.
// Flip the direction whenever we reach the top or bottom.
// Concatenate all rows at the end to form the final string.

// Time and Space Complexity:
// Time: O(n), where n = s.length() — each character is visited once.
// Space: O(n), to store the characters for the output string.


