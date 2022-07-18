#include <iostream>
#include <fstream>
#include "entry.h"
#include "logs.h"

using namespace std;

int main()
{
	//std::cout << "Processing: ";
	//int process = 0; // \ | / - 
	//for (;;) 
	//{
	//	for (auto i = 0; i < 4; i++)
	//	{
	//		switch (i) {
	//		case 0:
	//			std::cout << "\\";
	//			break;
	//		case 1:
	//			std::cout << "|";
	//			break;
	//		case 2:
	//			std::cout << "/";
	//			break;
	//		case 3:
	//			std::cout << "";
	//			break;
	//		}
	//		if (i == 4)
	//			i = 0;
	//		Sleep(100);
	//		std::cout << "\b";
	//	}
	//}

	logs my_site;
	ifstream ifs("C:\\Users\\talga.LAPTOP-85HJFNU6\\Downloads\\logs.txt", ios::in);
	if (!ifs.bad())
	{
		char buffer[2048];
		while (!ifs.eof())
		{
			ifs.getline(buffer, 2048);
			my_site.add_log(entry(buffer));
			std::cout << buffer << std::endl;
		}
		ifs.close();
	}
	return 0;
}
