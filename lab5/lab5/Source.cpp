#include <iostream> 
#include <cstdio> 
#include <fstream> 
#include <clocale> 
#include <ctype.h> 
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	ifstream fin("text.txt");
	if (!fin) { cout << "���� �� ��� ������" << endl; return 1; }
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
			case'o': cout << "����"; break;
			case'1': cout << "����"; break;
			case'2': cout << "���"; break;
			case'3': cout << "���"; break;
			case'4': cout << "������"; break;
			case'5': cout << "����"; break;
			case'6': cout << "�����"; break;
			case'7': cout << "����"; break;
			case'8': cout << "������"; break;
			case'9': cout << "������"; break;
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
