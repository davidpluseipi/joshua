#include <cctype> // for the use of toupper()
#include <iostream> // to be able to use cin, cout, and getline()
using namespace std;
int main(int argc, char** argv)
{
	string str = argv[1]; 
	string s = "";
	char c;
	for (int i=0; i < str.length(); i++)
	{
		c = toupper(str[i]); // capitalize
		if (c>=' ' && c<='`') // include only ASCII characters between 'space' and '`' (the thing under the tilda)
		{
			s = s + c;
		}
	}

// feed that capitalized text to wopr
    string s0 = "wopr -c 20 -l 550 "; 
    s0 = s0 + "\"" + s + "\"";
    system (s0.c_str());
    
// feed the text into espeak
    string s2 = "espeak -g3 -p40 ";
    s2 = s2 + "\"" + s + "\"";
    system (s2.c_str());

	return 0; 
}