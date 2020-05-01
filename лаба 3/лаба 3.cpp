#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct list
{
	
	int k;
	list* next;
};
void Print(list *b)
{
	list *print = b;
	while (print)
	{
		cout << print->k << " -> ";
		print = print->next;

	}
	cout << "NULL";

}
void f1(list *begin)
{
	begin = new list;
	list* end = begin;
	int p;
	int n;
	cin >> n;
	if (n % 2 == 1)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> p;
			if ((n + 1) / 2 > i)
			{
				end->k = p;
				if (i < ((n + 1) / 2) - 1)
				{
					end->next = new list;
					end = end->next;


				}
				if (i == ((n + 1) / 2) - 1)
				{

					end->next = NULL;
					break;
				}

			}
		}
		Print(begin);
		cout << endl;
		list* end = begin;
		for (int i = (n + 1) / 2; i < n; i++)
		{
			cin >> p;
			end->k = p;
			if (i < n - 1)
			{
				end->next = new list;
				end = end->next;
			}
			if (i == n - 1)
			{

				end->next = NULL;
				break;
			}


		}
		Print(begin);
	}
	cout << endl;
	if (n % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> p;
			if (n / 2 > i)
			{
				end->k = p;
				if (i < (n / 2) - 1)
				{
					end->next = new list;
					end = end->next;


				}
				if (i == (n / 2) - 1)
				{

					end->next = NULL;
					break;
				}

			}
		}
		Print(begin);
		cout << endl;
		list* end = begin;
		for (int i = n / 2; i < n; i++)
		{
			cin >> p;
			end->k = p;
			if (i < n - 1)
			{
				end->next = new list;
				end = end->next;
			}
			if (i == n - 1)
			{

				end->next = NULL;
				break;
			}
		}
		Print(begin);
	}

}


	
	int main()
	{
	setlocale(LC_ALL, "Russian");
	list* begin = NULL;
	begin = new list;
	list* end = begin;
	f1(begin);
}