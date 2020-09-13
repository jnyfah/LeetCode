#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include<vector>
#include<sstream>

using namespace std;
vector<string> letterCombinations(string digits);
int main()
{

    std::string str ;
 vector<string>results = letterCombinations(str);

 for(auto&p:results)
 {
     std::cout<<p<<" ";
 }




}

vector<string> letterCombinations(string digits) {

    vector<string>results;

    std::map<int, std::vector<char>> Data {
       {2, {'a', 'b', 'c'}},
       {3, {'d', 'e', 'f'}},
       {4, {'g', 'h', 'i'}},
       {5, {'j', 'k', 'l'}},
       {6, {'m', 'n', 'o'}},
       {7, {'p', 'q', 'r', 's'}},
       {8, {'t', 'u', 'v'}},
       {9, {'w', 'x', 'y', 'z'}},
     };




 std::string str;

 int result;
 std::istringstream (digits)>>result;
 std::vector<char> x = Data[result /10];
 std::vector<char> y = Data[result % 10];
 if(result < 10)
 {
     for(int j =0; j<y.size(); j++)
     {

         str.push_back(y[j]);

         results.push_back(str);

         str.clear();

     }
 } else {
     for (int i =0; i< x.size(); i++)
     {
         for(int j =0; j<y.size(); j++)
         {
             str.push_back(x[i]);
             str.push_back(y[j]);

             results.push_back(str);

             str.clear();


         }
     }

 }


return results;




    }
