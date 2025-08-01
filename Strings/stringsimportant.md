1. Input/Output Tricks
cin >> str takes only one word (stops at space).

Use getline(cin, str) for full line input.

string str;
getline(cin, str); // input with spaces

If using getline() after cin >>, flush the newline:

cin >> n;
cin.ignore(); // flushes \n
getline(cin, str);

2. Character Checks
Use <cctype> library functions:
isalpha(c), isdigit(c), isupper(c), islower(c), toupper(c), tolower(c)

Example: 
char c = 'a';
if (isalpha(c)) cout << "Letter\n";

3. ASCII Operations
Characters can be treated as integers.

char c = 'a';
cout << (int)c; // prints 97

Common trick: c - 'a' gives index (0 for a, 1 for b, etc.)

4. String Functions in STL

string s = "hello";
s.length();          // get length
s[i];                // access ith character
s.substr(pos, len);  // substring
s.find("ll");        // returns 2
s += " world";       // append
reverse(s.begin(), s.end()); // reverse string
sort(s.begin(), s.end());    // sort string

5. Mutable Strings
Strings are mutable (you can change characters).

s[0] = 'H';


6. String to Int and Vice Versa

int num = stoi("123");
string s = to_string(456);

7. Important Loops
Count frequency of characters:

int freq[26] = {0};
for (char c : s) freq[c - 'a']++;

8. Compare Strings
cpp
Copy code
if (s1 == s2) ...
if (s1 < s2) ... // lexicographical

9. Bonus: Useful Headers

Copy code
#include <string>
#include <cstring>     // For C-style functions like strlen, strcmp
#include <algorithm>   // For sort, reverse
#include <cctype>      // For char utilities like isalpha

10. What is ASCII?
ASCII (American Standard Code for Information Interchange) is a character encoding standard where:

Each character is assigned an integer code between 0 and 127.

Common Uses of ASCII in Coding
🔹 1. Get ASCII value of a char

char ch = 'b';
int val = (int)ch;  // OR just val = ch;

🔹 2. Get char from ASCII

int x = 97;
char ch = (char)x; // 'a'
📌 ASCII Tricks for Problem Solving
✅ 1. Convert lowercase to uppercase

char c = 'b';
char upper = c - ('a' - 'A');  // 'b' → 'B'
Or using STL:

toupper(c);
tolower(c);

✅ 2. Get index of alphabet

int idx = c - 'a';   // 'a' → 0, 'b' → 1, ..., 'z' → 25
Useful in problems like:

int freq[26] = {0};
for (char c : s)
    freq[c - 'a']++;

✅ 3. Convert char digit to int

char ch = '7';
int digit = ch - '0'; // '7' → 7

✅ 4. Convert int to char digit

int x = 5;
char ch = x + '0'; // 5 → '5'
⚠️ Be Careful
Only characters between ' ' (space) and '~' (tilde) are printable ASCII.

Don't do arithmetic on char unless you're sure it's a valid ASCII letter/digit.

🧪 Example

#include <iostream>
using namespace std;

int main() {
    for (char c = 'A'; c <= 'Z'; ++c) {
        cout << c << " = " << (int)c << "\n";
    }
}
Output:

makefile
Copy code
A = 65
B = 66
...
Z = 90