#include "main.h"

int main(int argc, char const *argv[])
{
    float first_no, second_no;
    float result_add, result_div;

    std::cout << "Enter first number: "; std::cin >> first_no;
    std::cout << "Enter second number: "; std::cin >> second_no;

    result_add = addition(first_no, second_no);
    result_div = division(first_no, second_no);

    print_result(result_add, result_div);
    return 0;
}

