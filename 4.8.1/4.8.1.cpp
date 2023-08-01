
#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b) {
    return a < b;
}
void sort(std::vector<int>& v) {
    std::sort(v.begin(), v.end(), compare);
    auto it = std::unique(v.begin(), v.end());
    v.erase(it, v.end());
}
void print(std::vector <int> v) {
    for (auto& it : v) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::cout << "[IN] : ";
    std::vector <int> v{ 1, 1, 2, 5, 6, 1, 2, 4 };
    print(v);
    sort(v);
    std::cout << "[OUT] : ";
    print(v);   
}
