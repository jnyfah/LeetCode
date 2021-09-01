#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int x = 0;
    double y = 0.0;
    std::string z ="";
    
    // Read and save an integer, double, and String to your variables.
    std::cin>>x;
    std::cin>>y;
    cin.ignore();
    
    std::getline(cin, z);
    
    // Print the sum of both integer variables on a new line.
    std::cout<< x+i<<std::endl;
    
    // Print the sum of the double variables on a new line.
    
    std::cout<<fixed << setprecision(1) << y + d<<std::endl;
    
    // Concatenate and print the String variables on a new line
    std::cout<< s+z<<std::endl;
    // The 's' variable above should be printed first.

    return 0;
}
