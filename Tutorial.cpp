#include <iostream>
#include <string>
#include <iomanip>

//using namespace std; // step 2. Comment out this!

void cout(const char* input)
{
	std::cout << input;
}
int main()
{
	// Compiler doesn't know what function to call
	// do we call std::cout or cout?
	cout("THIS IS THE TEST");
	// step 2. now I will comment out the "using namespace std"

}