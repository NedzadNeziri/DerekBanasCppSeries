#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	std::string userInput;
	printf("Enter miles, and I will convert them to kilometers\n");
	std::getline(std::cin, userInput);
	double stringToDouble = std::stod(userInput);  // function that will convert string to double
	printf("%d miles equals %5.4f kilometers\n", int(stringToDouble), (stringToDouble * 1.60934));	//	C style code
	std::cout << int(stringToDouble) << " miles equals " << std::setprecision(5) << (stringToDouble * 1.60934) << " kilometers\n";	//	C++ style code, including iomanip
	return 0;
	std::cin.get();
}