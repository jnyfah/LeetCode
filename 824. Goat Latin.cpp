class Solution {
public:
    string toGoatLatin(string S) {
            stringstream iss(S), oss;
    string vowels("aeiouAEIOU"), word, a;
    while (iss >> word) {
        a.push_back('a');
        if (vowels.find_first_of(word[0]) != string::npos) // begin with a vowel
            oss << ' ' << word << "ma" << a;
        else // begin with a consonant
            oss << ' ' << word.substr(1) << word[0] << "ma" << a;
    }
    return oss.str().substr(1);
    }
};
