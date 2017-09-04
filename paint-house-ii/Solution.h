#pragma once
#include <vector>
#include <algorithm>

using std::vector;
class node
{
public:
    int id;
    int value;

    node() = default;
    node(int id, int value) : id{id}, value(value) {}

    bool operator<(const node& n) const
    {
        return this->value < n.value;
    }

    bool operator>(const node& n) const 
    {
        return this->value > n.value;
    }
};

bool cmp (const node &a, const node &b)
{
    return a.value < b.value;
}

class Solution {
public:
    /*
    * @param costs: n x k cost matrix
    * @return: an integer, the minimum cost to paint all houses
    */
    int minCostII(vector<vector<int>> costs) 
    {
        // write your code here

        if (!costs.size())
        {
            return 0;
        }
        
        vector<node> now(3), last(3);
        vector<vector<int>>ans(costs.size() + 1, vector<int>(costs[0].size(), 0));
        now[0] = node(0, INT_MAX);
        now[1] = node(0, INT_MAX);
        
        for(int i = 1; i <= costs.size(); ++i)
        {
            last = now;
            now[0] = node(0, INT_MAX);
            now[1] = node(0, INT_MAX);

            for (int j = 0; j < costs[0].size(); ++j)
            {
                if (j == last[0].id)
                {
                    ans[i][j] = ans[i - 1][last[1].id] + costs[i - 1][j];
                } 
                else
                {
                    ans[i][j] = ans[i - 1][last[0].id] + costs[i - 1][j];
                }
                now[2] = node(j, ans[i][j]);
                sort(now.begin(), now.end(), cmp);

            }
        }

        return now[0].value;

    }
};
