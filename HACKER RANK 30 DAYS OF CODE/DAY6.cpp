#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n =0;
    std::cin>>n;
    cin.ignore();
    while(n != 0) {
        std::string input;
        std::getline(std::cin, input);
        std::string even="", odd="", output="";
        
        for(int i =0; i<input.length(); i++) {
            if(i%2 == 0){
                even += input[i];
            }else{
                odd += input[i];
            }
        }
        output += even+ " "+odd;
        std::cout<<output<<std::endl;
        n--;
    }
    
    return 0;
}
