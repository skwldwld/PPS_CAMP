#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    sort(people.begin(), people.end());

    int left = 0;                  // 가벼운
    int right = people.size() - 1; // 무거운
    int boat = 0;

    while (left <= right)
    {
        if (people[left] + people[right] <= limit)
        {
            left++;
        }
        right--;
        boat++;
    }

    return boat;
}