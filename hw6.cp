#include <iostream>
#include <string>
using namespace std;

int main()
{
	string words[100];
	string *ans;
	int i = 0, j;
	string temp;

	while (cin >> words[i])
	{
		if (words[i] == "#")
		{
			break;
		}
		i++;
	}
	cout << "­ì©l¡G" << endl;
	for (int k = 0; k < i; k++)
	{
		cout << words[k];
		cout << endl;
	}

	for (int k = 0; k < i; k++)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (words[j][0] > words[j + 1][0])
			{
				temp = words[j];
				words[j] = words[j + 1];
				words[j + 1] = temp;
			}
			else
			if (words[j][0] == words[j + 1][0])
			{
				if (words[j][1] > words[j + 1][1])
				{
					temp = words[j];
					words[j] = words[j + 1];
					words[j + 1] = temp;
				}
			}
		}
	}
	cout << endl;
	cout << "±Æ§Ç¡G" << endl;
	for (int k = 0; k < i; k++)
	{
		ans = &words[k];
		cout << *ans << endl;
	}

	system("pause");
	return 0;
}



