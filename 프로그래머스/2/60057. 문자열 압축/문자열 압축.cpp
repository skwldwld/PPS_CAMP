#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    if (s.length() == 1) return 1; 

    int minlen = s.length(); 

    for (int unit = 1; unit <= s.length() / 2; unit++) {
        string newstr = "";
        string prev = s.substr(0, unit);
        int count = 1; 

        for (int i = unit; i < s.length(); i += unit) {
            string curr = s.substr(i, unit);
            if (prev == curr) {
                count++;
            } else {
                newstr += (count > 1 ? to_string(count) : "") + prev; 
                prev = curr;
                count = 1;
            }
        }

        newstr += (count > 1 ? to_string(count) : "") + prev;

        minlen = min(minlen, (int)newstr.length());
    }

    return minlen;
}
