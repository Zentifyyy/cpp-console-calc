#include <iostream>

struct numbers {
    int num1,num2;
    char opperation;
};

double calculate(const numbers* nums) {
    switch (nums -> opperation) {
        case '+':
            return nums -> num1 + nums -> num2;
        case '-':
            return nums -> num1 - nums -> num2;
        case '/':
            return nums -> num1 / nums -> num2;
        case 'x':
            return nums -> num1 * nums -> num2;
        default:
            delete nums;
        return 0;
    }
}

int main() {
    numbers *nums = new numbers;

    std::cout << "Input Your First Number" << std::endl;
    std::cin >> nums -> num1;

    std::cout << "Input your operation" << std::endl;
    std::cin >> nums -> opperation;

    std::cout << "Now Input Your Second Number" << std::endl;
    std::cin >> nums -> num2;

    std::cout << "Your final number is :" << calculate(nums) << std::endl;
}