#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;

    vector<int> count(N + 2, 0);
    for (int stage : stages)
    {
        count[stage]++;
    }

    vector<pair<int, double>> failrates;

    int total = stages.size();

    for (int i = 1; i <= N; i++)
    {
        if (total == 0)
        {
            failrates.push_back({i, 0.0});
        }
        else
        {
            double failure_rate = (double)count[i] / total;
            failrates.push_back({i, failure_rate});
            total -= count[i];
        }
    }

    sort(failrates.begin(), failrates.end(), [](const pair<int, double> &a, const pair<int, double> &b)
         {
        if (a.second == b.second) {
            return a.first < b.first; 
        }
        return a.second > b.second; });

    for (auto &pair : failrates)
    {
        answer.push_back(pair.first);
    }

    return answer;
}
