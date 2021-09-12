#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string calculatebinary(string output, int number) {
    
    if (number < 2) {
        output += '1';
        reverse(output.begin(), output.end());
        return output;
    }
    if (number % 2 == 0) {
        output += '0';
    }
    else if (number % 2 != 0) {
        output += '1';
    }

    return calculatebinary(output ,number / 2);
}

int calculateconsecutive(string binary) {
    int currentCounter = 0;
    int savedCounter = 0;
    for (int i = 0; i <= binary.length() - 1; i++) {
        if (binary[i] == '1') {
            currentCounter++;
        }
        else {
            if (savedCounter <= currentCounter) {
                savedCounter = currentCounter;
            }
            currentCounter = 0;
        }
    }
    if (currentCounter >= savedCounter) {
        savedCounter = currentCounter;
    }
    return savedCounter;
}

int main()
{
   int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string binaryform;
    binaryform = calculatebinary(binaryform, n);
    cout << calculateconsecutive(binaryform) << endl;

    system("pause");
    return 0;
    
 
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
