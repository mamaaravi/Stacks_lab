#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void OutputStack(stack<int, vector<int>> st1)
{
	while (!st1.empty())
	{
		cout << st1.top() << "  ";
		st1.pop();
	}
	cout << endl;
}
int main()
{
	stack<int, vector<int>> st1;
	stack<int, vector<int>> st2;
	stack<int, vector<int>> st1temp;
	stack<int, vector<int>> st2temp;
	int n, num;

	cout << "Enter the number of elements in the stacks: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << n - i << " element of a 1st stack: ";
		cin >> num;
		st1.push(num);
		st1temp.push(0);
	}
	cout << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << n - i << " element of a 2nd stack: ";
		cin >> num;
		st2.push(num);
		st1temp.push(0);
	}
	cout << endl;
	system("cls");
	OutputStack(st1);
	OutputStack(st2);

	st1.swap(st1temp);
	st2.swap(st2temp);
	st1.swap(st2temp);
	st2.swap(st1temp);
	cout << "Swapped the contens of 2 stacks without changing the order of elements: "<<endl;
	OutputStack(st1);
	OutputStack(st2);

	system("pause");
	return 0;
}