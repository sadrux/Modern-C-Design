#include "Chapter1.h"
#include "Chapter2.h"
#include "Chapter3.h"
#include "Chapter4.h"
#include "Chapter5.h"
#include "Chapter6.h"
#include "Chapter7.h"
#include "Chapter8.h"
#include "Chapter9.h"
#include "Chapter10.h"
#include "Chapter11.h"
//#include "Game.h"

#include <iostream>

int main()
{
	
	std::cout << "****Chapter 1 Start****" << std::endl;
	std::cout << std::endl;
	Chapter1::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 1 End****" << std::endl;
	std::cout << std::endl;
	
	std::cout << "****Chapter 2 Start****" << std::endl;
	std::cout << std::endl;
	Chapter2::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 2 End****" << std::endl;
	std::cout << std::endl;
		
	std::cout << "****Chapter 3 Start****" << std::endl;
	std::cout << std::endl;
	Chapter3::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 3 End****" << std::endl;
	std::cout << std::endl;	
	
	std::cout << "****Chapter 4 Start****" << std::endl;
	std::cout << std::endl;
	Chapter4::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 4 End****" << std::endl;
	std::cout << std::endl;
	
	std::cout << "****Chapter 5 Start****" << std::endl;
	std::cout << std::endl;
	Chapter5::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 5 End****" << std::endl;
	std::cout << std::endl;
	
	std::cout << "****Chapter 6 Start****" << std::endl;
	std::cout << std::endl;
	Chapter6::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 6 End****" << std::endl;
	std::cout << std::endl;
	
	std::cout << "****Chapter 7 Start****" << std::endl;
	std::cout << std::endl;
	Chapter7::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 7 End****" << std::endl;
	std::cout << std::endl;
	
	std::cout << "****Chapter 8 Start****" << std::endl;
	std::cout << std::endl;
	Chapter8::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 8 End****" << std::endl;
	std::cout << std::endl;

	std::cout << "****Chapter 9 Start****" << std::endl;
	std::cout << std::endl;
	Chapter9::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 9 End****" << std::endl;
	std::cout << std::endl;

	std::cout << "****Chapter 10 Start****" << std::endl;
	std::cout << std::endl;
	Chapter10::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 10 End****" << std::endl;
	std::cout << std::endl;

	std::cout << "****Chapter 11 Start****" << std::endl;
	std::cout << std::endl;
	Chapter11::Run();
	std::cout << std::endl;
	std::cout << "****Chapter 11 End****" << std::endl;
	std::cout << std::endl;

	//std::cout << "****Game Start****" << std::endl;
	//std::cout << std::endl;
	//Game g;
	//g.Run();
	//std::cout << std::endl;
	//std::cout << "****Game End****" << std::endl;
	//std::cout << std::endl;

	std::cout << "Press Enter key to quit...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}