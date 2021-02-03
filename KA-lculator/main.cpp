#include <iostream>
#include "version.h"
#include <fstream>
#include <windows.h>
using namespace std;


int main();
void calculator();
char rechenzeichen;
long double zahl;
long double ergebnis;
char yesno = ' ';

int main()
{
	SetConsoleOutputCP(1252); // für Umlaut-Ausgabe
	SetConsoleCP(1252); // für Umlaut-Eingabe


	cout << "Willkommen bei KA-lculator!\nCode wrote in C++ by LiQ | Function ideas by WWW\nBETA VERSION " << VERSION_MAJOR << "." << VERSION_MINOR << "\n\n";
	system("pause");
	system("cls");
	calculator();
	/*	fstream error1;
		error1.open("KA-lculator.exe.log", ofstream::app);
		error1 << "Error #001:\nInvalid Input: 'main.cpp', line 15" << endl;
		error1.close();																<-- Error-Log file
		cout << "\n\nUngültige Eingabe! Versuchen Sie es erneut!\n";
		system("pause");
		system("cls");
		main();
		break;
	*/
}

void calculator()
{
	char i = '=';

	
	cout << "KA-lculator v" << VERSION_MAJOR << "." << VERSION_MINOR << "\n\n";
	cout << "INFO: Um die Aufgabe auszurechnen, geben Sie bei Rechenzeichen '=' ein!" << "\n\n";

	if (rechenzeichen != '=')
	{
		cout << "Zahl: ";
		cin >> ergebnis;
	}
	do
	{
		cout << "Rechenzeichen: ";
		cin >> rechenzeichen;
		if (rechenzeichen != '=')
		{
			cout << "Zahl: ";
			cin >> zahl;
		}

		if (rechenzeichen == '+')
		{
			ergebnis = ergebnis + zahl;
		}

		if (rechenzeichen == '-')
		{
			ergebnis = ergebnis - zahl;
		}

		if (rechenzeichen == '*')
		{
			ergebnis = ergebnis * zahl;
		}

		if (rechenzeichen == '/')
		{
			ergebnis = ergebnis / zahl;
		}

		if (rechenzeichen == '=')
		{
			cout << "ERGEBNIS: " << ergebnis << "\n\n";
			system("pause");
			exit(0);
		}

		} while (rechenzeichen != '=');
	
	
}