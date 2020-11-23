class Solution {
public:
    string toLowerCase(string str) {
        std::for_each(str.begin(), str.end(), [](char & c) {
        c = ::tolower(c);
    });
        return str;
    }
};
