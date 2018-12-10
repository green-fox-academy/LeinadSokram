#include "simple.h"
#include <algorithm>

std::vector<int> rotate(std::vector<int> numbers)
{
    /*for (int i = numbers.size() - 1; i > 0; --i) {
        numbers[i] = numbers[i - 1];
    }

    numbers[0] = 0;*/

    /*for(auto it = numbers.rbegin(); it != numbers.rend(); it++){
        *it = *(it+1);
    }

    numbers.front() = 0;*/

    std::rotate(numbers.rbegin(), numbers.rbegin() + 1, numbers.rend());
    numbers.front() = 0;

    return numbers;
}