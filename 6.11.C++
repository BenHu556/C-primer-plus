//第六章第一题
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



//第六章第二题
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



//第六章第三题
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



//第六章第四题
#include <iostream>
using namespace std;
const int strsize = 30;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

void display_by_name(struct bop *bopArray, unsigned int size)
{
	for (int i = 0; i < size; i++)
		cout << bopArray[i].fullname << endl;
}

void display_by_title(struct bop* bopArray, unsigned int size)
{
	for (int i = 0; i < size; i++)
		cout << bopArray[i].title << endl;
}

void display_by_bopname(struct bop* bopArray, unsigned int size)
{
	for (int i = 0; i < size; i++)
		cout << bopArray[i].bopname << endl;
}

void dispiay_by_preference(struct bop* bopArray, unsigned int size)
{
	for(int i = 0; i < size; i++)
	{ 
	
		if (bopArray[i].preference == 0)
		{
			
			cout << bopArray[i].fullname << endl;
		}
		else if (bopArray[i].preference == 1)
		{
			cout << bopArray[i].title << endl;
		}
		else if (bopArray[i].preference == 2)
		{
			cout << bopArray[i].bopname << endl;

		}
	}
}

void showmenu()
{
	cout << "Benevolent Order of Programmers Report\n"
		"a. display by name            b. display by title\n"
		"c. display by bopname         d. display by preference\n"
		"q. quit\n";
}


int main()
{
	struct bop bopArray[5] =
	{
		{"Wimp Macho",    "Wim Macho",             "Y---", 1},
		{"Raki Rhodes",   "Junior Programmer",     "3XXXX", 1},
		{"Celia Laiter",  "MIPS",                  "3AAAA", 1},
		{"Hoppy Hipman",  "Analyst Trainee",       "3BBBB", 1},
		{"Pat Hand",      "LOOPY",                 "3CCCC", 1}
	};
	showmenu();
	char ch;

	cout << "Enter your choices: " << endl;
	cin.get(ch);
	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a': 
			display_by_name(bopArray,5);
			break;
		case 'b':
			display_by_title(bopArray, 5);
			break;
		case 'c':
			display_by_bopname(bopArray, 5);
			break;
		case 'd': 
			dispiay_by_preference(bopArray, 5);
		default:break;
		}
		cout << "Next choice: ";
		cin.get();
		cin.get(ch);
	}
	cout << "Bye!" << endl;
	system("pause");
	return 0;
}






//第六章第五题
//#include <iostream>
//using namespace std;
//int main()
//{
//	
//	double income;
//	cout << "Please enter your income: ";
//	
//	while ( cin >> income && income >= 0)
//	{
//		int tax = 0;
//		if (income <= 5000)
//		{
//
//			cout << "收入所得税为：" << tax << endl;
//		}
//		else if (income >= 5001 && income <= 15000)
//		{
//			cout << "收入所得税为：" << (income - 5000) * 0.1 << endl;
//		}
//		else if (income >= 15001 && income <= 35000)
//		{
//			cout << "收入所得税为：" << (income - 15000) * 0.15 + 10000 * 0.1 << endl;
//		}
//		else if (income >= 35000)
//		{
//			cout << "收入所得税为：" << (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1 << endl;
//		}
//	
//	}
//	return 0;
//}





//第六章第六题
//#include <iostream>
//using namespace std;
//const int Arsize = 20;
//
//struct group
//{
//	char name[Arsize];
//	double money;
//};
//
//int main()
//{
//	
//	cout << "请输入捐献者数目：";
//	int numbers;
//	cin >> numbers;
//	cin.get();
//	group* ps = new group[numbers];
//	
//	for (int i = 0; i < numbers; i++)
//	{
//		cout << "请输入捐款者姓名：" << endl;
//		cin.get(ps[i].name, Arsize);
//		cin.get();
//		cout << "请输入" << ps[i].name << "的捐款数额" << endl;
//		cin >> ps[i].money;
//		cin.get();
//		cout << "----------" << endl;
//	}
//
//	int num1 = 0;
//	cout << "重要捐款者是：" << endl;
//	for (int i = 0; i < numbers; i++)
//	{
//		if (ps[i].money > 10000)
//		{
//			cout << ps[i].name <<  "   ";
//		}
//		num1++;
//	}
//
//	cout << "\n";
//
//	if (num1 == 0)
//	{
//		cout << "重要捐款者人数为：none" << endl;
//	}
//	
//
//	cout << "\n";
//
//	int num2 = 0;
//	cout << "其余捐款者是：" << endl;
//	for (int i = 0; i < numbers; i++)
//	{
//	     if(ps[i].money <= 10000)
//		{
//			cout << ps[i].name << "   ";
//		}
//		 num2++;
//	}
//
//	cout << "\n";
//
//	if (num2 == 0)
//	{
//		cout << "其余捐款者人数为：none" << endl;
//	}
//
//	delete[] ps;
//	system("pause");
//	return 0;
//}



//第六章第七题
//#include <iostream>
//#include <string>
//using namespace std;
//const int Arsize = 20;
//string ch;
//int main()
//{
//	int vowel = 0;
//	int consonants = 0;
//	int others = 0;
//	cout << "Enter words(q to quit): " << endl;
//
//	while ((cin >> ch))
//	{
//		if ( ch.length() == 1 && ch[0] == 'q')
//		{
//			break;
//		}
//
//		//方法一：使用if语句
//		/*if (isalpha(ch[0]))
//		{
//			if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u')
//			{
//				vowel++;
//			}
//			else
//			{
//				consonants++;
//			}
//		}
//		else
//			others++;*/
//
//
//		//方法二：使用switch语句
//			if (isalpha(ch[0]))
//			{
//				switch (ch[0])
//				{
//				case 'a': vowel++; break;
//				case 'e': vowel++; break;
//				case 'i': vowel++; break;
//				case 'o': vowel++; break;
//				case 'u': vowel++; break;
//				default : consonants++; break;
//				}
//			}
//			else
//				others++;
//	}
//
//	cout << vowel << " words beginning with vowels." << endl;
//	cout << consonants << " words beginning with vowels." << endl;
//	cout << others << " others." << endl;
//	system("pause");
//	return 0;
//}




//第六章第八题
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//const int SIZE = 60;
//int main()
//{
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "Enter name of data file: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << "Could not open the file " << filename << endl;
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	char ch;
//	int count = 0;
//
//	inFile >> ch;
//	while (inFile.good())
//	{
//		++count;
//		inFile >> ch;
//	}
//	if (inFile.eof())
//	{
//		cout << "End of file reached.\n";
//	}
//
//	if (count == 0)
//	{
//		cout << "No data processed.\n";
//	}
//	else
//	{
//		cout << "total ch :" << count << endl;
//	}
//	inFile.close();
//	return 0;
//}


//第六章第九题
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//const int SIZE = 60;
//
//int main()
//{
//	char filename[SIZE];
//	ifstream inFile;
//
//	//打开文件
//	cout << "Enter name of data file: ";
//	
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << "Could not open the file " << filename << endl;
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	//读取数据
//	string ch;
//	getline(inFile, ch);
//	while (inFile.good())
//	{
//		if (!isalpha(ch[0]))
//		{
//			cout << ch << endl;
//		}
//		else
//		{
//			cout << ch << endl;
//		}
//		getline(inFile, ch);
//	}
//
//	if (inFile.eof())
//	{
//		cout << "End of file reached.\n";
//	}
//
//	inFile.close();
//	return 0;
//}
