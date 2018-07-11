#include <iostream> 
#include <cstdio> 
#include <fstream> 
#include <clocale> 
#include <ctype.h> 
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	ifstream fin("text.txt");
	if (!fin) { cout << "Файл не был найден" << endl; return 1; }
	fin.seekg(0, ios::end);
	long len = fin.tellg();
	char*buf = new char[len + 1];
	fin.seekg(0, ios::beg);
	fin.read(buf, len);
	buf[len] = '\0';
	long i = 0, j = 0, n = 0;
	while (buf[i])
	{
		if (buf[i] == '.' || buf[i] == '?'|| buf[i] == '!' || buf[i] == ',')
		{
			for(j = n; j <= i ; j++)
			switch (buf[j])
			{
			case'o': cout << "ноль"; break;
			case'1': cout << "один"; break;
			case'2': cout << "два"; break;
			case'3': cout << "три"; break;
			case'4': cout << "четыре"; break;
			case'5': cout << "пять"; break;
			case'6': cout << "шесть"; break;
			case'7': cout << "семь"; break;
			case'8': cout << "восемь"; break;
			case'9': cout << "девять"; break;
			default:cout << buf[j];
			}
			cout << endl;
			n = i + 1;
		}
		i++;
	}
	fin.close();
	system("pause");
	return 0;
}
