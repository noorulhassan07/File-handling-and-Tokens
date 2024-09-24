#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	
	char b1  [10000];
	char b2  [10000];
	char* curr_buff = b1;

	ifstream obj("qwe.txt");

	if (!obj.is_open())
	{
		cout << "Error opening file" << endl;

	}
	bool ub = true;
	int c;
	while (true)
	{
		if (ub)
		{
			obj.get(b1, 10000, EOF);
			c = obj.gcount();
		}
		else
		{
			obj.get(b2, 10000, EOF);
			c = obj.gcount();
		}
		if (c == 0)
		{
			break;
		}
		for (int i = 0; i < c; i++)
		{
			if (!isspace(curr_buff[i]))
			{
				cout << curr_buff[i];
			}
			else if (i > 0 && !isspace(curr_buff[i - 1]))
			{
				cout << endl;
			}
		}
		ub = !ub;
		if (curr_buff)
		{
			ub = b1;
		}
		else
		{
			ub = b2;
		}
		//curr_buff = ub1 ? b1 : b2;
	}
	obj.close();
	return 0;
}