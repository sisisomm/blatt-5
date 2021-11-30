#include<iostream>

int main()
{

	char x;

	system("cls");

	std::cout << "Herzlich Willkommen beim Kaffee - Automaten!\n";
	std::cout << "Bitte wählen Sie aus:\n";
	std::cout << "(k) Kaffee\n";
	std::cout << "(e) Espresso\n";
	std::cout << "(s) Service-Mode\n";

	std::cin >> x;

	std::cout << "Sie haben sich fuer " << x << " entschieden.";

	system("pause");

	return 0;
}