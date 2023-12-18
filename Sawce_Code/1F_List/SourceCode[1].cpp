// 3.1 ~Compute the max value inside a list of numbers [Code: Vector_Task]

#include <iostream>
#include <vector>

int vectorList(std::vector<int>&input);

int main( void ){

    std::vector<int>test_input {1,2,3,4,1,2,3};
    // Ideal return program cout is -> "4"
    
    int (*pOinter)(std::vector<int>&) = {vectorList};
    const int maxValue = {pOinter(test_input)};

    std::cout<<"Max value is = "<< maxValue << std::endl;
}

int vectorList(std::vector<int>& input){
    int ifbased {0};

    for(auto& iteration : input){
        if(iteration > ifbased){
            ifbased = iteration;
        }
    }

    return ifbased;
}
