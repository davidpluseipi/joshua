#include <cctype> // for the use of toupper()
#include <cstdio> // for putchar() which is essentially putc(ch, stdout)
#include <iostream> // to be able to use cin, cout, and getline()
#include <cstring> // for strlen()
#include <unistd.h> // for usleep
#include <cstdlib> 
#include <string>
using namespace std;
int void main(char a, int b)
{
	//char text[500];
	//char text2[500];
	char c[500], d[500];
	//cout << "Enter text (max 500): ";
	//cin.getline(text, 500);
	for (int i=0; i<strlen(a); i++)
	{
		c = toupper(a[i]);
		if (c>=' ' && c<='`')
		{
			d[i] = c;
		}
	}
    cout << d << '\n';
	return 0;
}