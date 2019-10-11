//1
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



//2
//#include <iostream>
//using namespace std;
//const int ArSize = 10;
//int main()
//{
//	double num[ArSize];
//	cout << "Please enter a number: " << endl;
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << "donation #" << i + 1 << " : ";
//		while (!(cin >> num[i]))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Please enter a number: ";
//		}
//	}
//	double total = 0;
//	for (int i = 0; i < ArSize; i++)
//	{
//		total += num[i];
//	}
//	double ave = total / ArSize;
//	cout << "这些数字的总和为：" << total << endl;
//	cout << "这些数字的平均值为：" << ave << endl;
//	int line = 0;
//	for (int i = 0; i < ArSize; i++)
//	{
//		if (num[i] > ave)
//		{
//			line++;
//		}
//	}
//	cout << "一共有 " << line << " 个数字大于它们的平均值";
//	return 0;
//}



//3
#include <iostream>
using namespace std;
void showmenu()
{
	cout << "Please enter one of the following choices:\n"
		"c) carnivore                       p) pianist\n"
		"t) tree                            g) game\n";
}

void tree()
{
	cout << "A maples is a tree";
}

int main()
{
	showmenu();
	char ch;
	cout << "Pleasee enter a c, p, t, or g: ";
	cin.get(ch);
	while (ch != '\n')
	{
		switch (ch)
		{
		case 'c': break;
		case 'p': break;
		case 't':
			tree();
			break;
		case 'g': break;
		default: cout << "Pleasee enter a c, p, t, or g: ";
		}
		cin.get();
		cin.get(ch);
	}
	system("pause");
	return 0;
}



//4




