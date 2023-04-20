#include <iostream>
int main() {
int a1, a2, b1, b2;
std::cin >> a1;
std::cin >> a2;
std::cin >> b1;
std::cin >> b2;
if ((abs(a1 - b1) == abs(a2 - b2) or (a1 == b1) or (a2 == b2))) {
std::cout << "Yes";
}
else
{
std::cout << "No";
}
}
