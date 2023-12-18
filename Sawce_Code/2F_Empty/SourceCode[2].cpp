// 3.2 ~Create an empty list, ask the user to give 5 numbers, and print the max value

#include <iostream>
#include <vector>

void userVectorInput(std::vector<int>& user_input);
int maxValueVector(const std::vector<int>& vectorInput);

int main( void ){

    std::vector<int> input;

    userVectorInput(input);

    int (*pointer)(const std::vector<int>&) = {maxValueVector};

    int maxValue = {pointer(input)};


    std::cout<<"Max Value on the vector is = " << maxValue << std::endl;
    
}

void userVectorInput(std::vector<int>& vectorInput){

    std::cout<<"Put 5 numbers = ";

    short int user_input {0};
    for(auto i = 0; i < 5; i++){

        std::cin>>user_input;

        vectorInput.push_back(user_input);
    }
}

int maxValueVector(const std::vector<int>& vectorInput){
    
    int testingOutput {0};

    for(auto& iteration : vectorInput){
        if(iteration > testingOutput){
            testingOutput = iteration;
        }
    }

    return testingOutput;
}