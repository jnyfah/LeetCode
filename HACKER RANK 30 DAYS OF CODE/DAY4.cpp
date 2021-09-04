using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge > 0) {
            age = initialAge;
        }else{
            age = 0;
            std::cout<<"Age is not valid, setting age to 0."<<std::endl;
        }

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
    if(age < 13) {
        std::cout<<"You are young."<<std::endl;
    }else if( age >= 13 && age <18) {
        std::cout<<"You are a teenager."<<std::endl;
    } else {
       std::cout<<"You are old."<<std::endl; 
    }
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;

    }

int main(){
