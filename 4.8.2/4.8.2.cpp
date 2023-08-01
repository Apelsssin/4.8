
#include <iostream>
#include <string>
#include <set>

template <class T>
void print_container(std::set <T> set_) {
    auto it = set_.begin();
    for (it; it != set_.end(); ) {
        std::cout << *it << " ";
        std::advance(it, 1);
    }
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);
}

