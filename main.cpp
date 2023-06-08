#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<std::string> names = { "John", "Alice", "Bob", "David", "Catherine" };

    names.sort();  // Sort the list in ascending order

    // Print the sorted list
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
