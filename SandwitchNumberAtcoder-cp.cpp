/* Problem Statement:-

You are given a string S consisting of uppercase English letters and digits. Determine whether S satisfies the following condition.

  S is a concatenation of the following characters and string in the order listed :-
* An uppercase English letter
* A string of length 6 that is a decimal representation of an integer between 100000 and 999999, inclusive
* An uppercase English letter

*/

#include<iostream>
using namespace std;
 
bool check(string S) {
    if (S.size() != 8) return false;
    if (!isupper(S.front())) return false;
    if (!isupper(S.back())) return false;
    S.pop_back();
    S.erase(S.begin());
    if (S.front() == '0') return false;
    for (auto c : S) {
        if (!isdigit(c)) return false;
    }
    return true;
}
 
int main() {
    string S;
    cin >> S;
    cout << (check(S) ? "Yes" : "No") << endl;
}
#include<iostream>
using namespace std;

bool check(string S) {
    if (S.size() != 8) return false;
    if (!isupper(S.front())) return false;
    if (!isupper(S.back())) return false;
    S.pop_back();
    S.erase(S.begin());
    if (S.front() == '0') return false;
    for (auto c : S) {
        if (!isdigit(c)) return false;
    }
    return true;
}
 
int main() {
    string S;
    cin >> S;
    cout << (check(S) ? "Yes" : "No") << endl;
}
