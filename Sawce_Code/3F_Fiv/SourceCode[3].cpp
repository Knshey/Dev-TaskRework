// 3.3 ~Create an empty list, ask the user to give numbers, stops when the number is 0, and print the max value
#include <iostream>
#include <vector>

void vectorUserInput(std::vector<int>& vector_reference);
int maxValueVector(const std::vector<int>& vector_reference);

int main( void ){

    std::vector<int> vectorInput;
    vectorUserInput(vectorInput);

    int (*p)(const std::vector<int>&) = {maxValueVector};

    int maxValue = {p(vectorInput)};

    std::cout<<"Max value is = "<< maxValue << std::endl;
}

void vectorUserInput(std::vector<int>& vector_reference){
    
    bool userStatus {true};
    int userInput {};
    std::cout<<"Give data towards the vector = ";

    while( userStatus == true){
        std::cin>>userInput;

        vector_reference.push_back(userInput);

        if(userInput == 0){
            userStatus = false;
        }
    }

}

int maxValueVector(const std::vector<int>& finalVector_reference){
    
    int testingValue {0};
    for(auto& iterationBased : finalVector_reference){
        if( iterationBased > testingValue ){
            testingValue = iterationBased;
        }
    }

    return testingValue;
}