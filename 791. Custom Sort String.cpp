class Solution {
public:
    string customSortString(string order, string str) {
       unordered_map<char, int> map;
    string ans = "";
    for(int i = 0; i < str.size(); i++)
    {
        map[str[i]]++;
    }
    for(int i = 0; i < order.size(); i++)
    {
        if(map[order[i]] > 0)
        {
            while(map[order[i]])
            {
                ans += order[i];
                map[order[i]]--;
            }
        }
    }
    for(auto it : map)
    {
        while(it.second)
        {
            ans += it.first;
            it.second--;   
        }
    }
    return ans; 
    }
};
