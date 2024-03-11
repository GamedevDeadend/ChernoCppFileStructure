#include <iostream>
#include "glfw3.h"

int main()
{
	int a = glfwInit();

	std::cout << "HelloWorld " <<a<< std::endl;
	std::cin.get();
}

/*
* for dynamic linking add dynamic lib of glfw3dll.lib in input of linker.
* we can also use glfw3.dll but glfw3dll.lib is more optimised as it contains function locations by using function pointers
*/