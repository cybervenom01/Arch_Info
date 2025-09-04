/////////////////////////////////////////////////
/// Algorithm: This program should detect and display
/// 		the architecture type of the machine.
///
/// 

#include <iostream>
#include <sys/utsname.h>

// Prototype function
char archType();

// Main function
int main()
{
	std::cout << "Hardware type: " << archType() << std::endl;

	return 0;
}

// getArch function.
char archType()
{
	struct utsname machtype;
	uname(&machtype);

	std::cout << machtype.machine;

	return 0;
}
