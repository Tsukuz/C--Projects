#include <iostream>

int add(int x, int y); // Forward declaration
int subtraction(int x, int y); // Forward declaration
int modulus(int x, int y); // Forward declaration 


int main() {

	std::cout << " Enter an integer: "; // Asks for user input
	int x{ }; // Storage of user input
	std::cin >> x; // Calls for storage of user input

	std::cout << " Enter an integer: "; // Asks for user input
	int y{ }; // Storage of user input
	std::cin >> y; // Calls for storage of user input

	std::cout << " The sum of: " << x << " and " << y << " is " << add(x, y) << '\n'; // Outputs the result of the operation
	std::cout << " The difference of: " << x << " and " << y << " is " << subtraction(x, y) << '\n'; // Outputs the result of the operation
	std::cout << " The modulus of: " << x << " and " << y << " is " << modulus(x, y) << '\n'; // Outputs the result of the operation

	return 0;

}
