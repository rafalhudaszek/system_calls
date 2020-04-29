#include <iostream>
#include <string>
int main()
{
	std::string command;
	int test;
	std::string size;
	char charCommand[1000];

	std::cout<<"Podaj komende do tworzenia statystyk ";
	std::getline(std::cin, command);

	std::cout<<"Ile razy chcesz przeprowadzić testy? ";
	std::cin >> test;

	std::cout<<"Podaj rozmiar tablicy ";
	std::cin >> size;
	
	command += " " + size;
	

	
	for(int i = 0; i < command.size(); i++)
	{
		charCommand[i] = command[i];
	}

	for(int i = 0; i < test; i++)
	{
		system(charCommand);
	}
	
}
