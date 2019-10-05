#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
		{
			chars++;
			if (ch >= 'A' && ch <= 'Z')
			{
				//大写转化为小写
			 char lower_case = tolower(ch);
			 cout << lower_case ;
			}
			if(ch >= 'a' && ch <= 'z')
			{
				//小写转化为大写
			char cap = toupper(ch);
			cout << cap ;

			}
		}
		
		else if (isspace(ch))
		{
			whitespace++;
			cout << ch;
		}
		else if (isdigit(ch))
		{
			digits++;
			cout << ch;
		}
		
		else if (ispunct(ch))
		{
			punct++;
			cout << ch;
		}
			
		else
		{
			others++;
			cout << ch;
		}
			
		cin.get(ch);	
	}
	cout << '\n' << endl;
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, " << punct << " punctuations, "
		<< others << " others.\n ";
	return 0;
}
