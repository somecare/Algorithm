#include <algorithm>
#include<queue>
#include<string>
#include<stack>
#include<iostream>
#include<functional>
#include<vector>

using namespace std;
/*
void compute(std::stack<int> &number_stack, std::stack<char> &operation_stack)
{
	if (number_stack.size() < 2)
	{
		return;
	}
	int num1 = number_stack.top();
	number_stack.pop();
	int num2 = number_stack.top();
	number_stack.pop();
	if (operation_stack.top() == '+')
	{
		number_stack.push(num1 + num2);
	}
	else if (operation_stack.top() == '-')
	{
		number_stack.push(num2 - num1);
	}
	operation_stack.pop();
}

class Solution
{
public:
	int calculate(std::string s)
	{
		static const int STATE_BEGIN = 0;
		static const int NUMBER_STATE = 1;
		static const int OPERATION_STATE = 2;
		std::stack<int> number_stack;
		std::stack<char> operation_stack;
		int number = 0;
		int STATE = STATE_BEGIN;
		int compute_flag = 0;
		for (unsigned int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
			{
				continue;
			}
			switch (STATE)
			{
			case STATE_BEGIN:
				if (s[i] >= '0' && s[i] <= '9')
				{
					STATE = NUMBER_STATE;
				}
				else
				{
					STATE = OPERATION_STATE;
				}
				i--;
				break;

			case NUMBER_STATE:
				if (s[i] >= '0' && s[i] <= '9')
				{
					number = number * 10 + s[i] - '0';
				}
				else
				{
					number_stack.push(number);
					if (compute_flag == 1)
					{
						compute(number_stack, operation_stack);
					}
					number = 0;
					i--;
					STATE = OPERATION_STATE;
				}
				break;
			case OPERATION_STATE:
				if (s[i] == '+' || s[i] == '-')
				{
					operation_stack.push(s[i]);
					compute_flag = 1;
				}
				else if (s[i] >= '0' && s[i] <= '9')
				{
					STATE = NUMBER_STATE;
					i--;
				}
				else if (s[i] == '(')
				{
					STATE = NUMBER_STATE;
					compute_flag = 0;
				}
				else if (s[i] == ')')
				{
					compute(number_stack, operation_stack);
				}
				break;
			}
		}
		if (number != 0)
		{
			number_stack.push(number);
			compute(number_stack, operation_stack);
		}
		if (number == 0 && number_stack.empty())
		{
			return 0;
		}
		return number_stack.top();
	}
};

int main()
{
	std::string s = "1+ 121 - (14+(5-6))";
	//string s = " 1 + 1";
	cout << "-------------" << endl;
	Solution solve;
	std::cout << "1+ 121 - (14+(5-6)) = " << solve.calculate(s) << std::endl;
	std::cout << "hahaha" << std::endl;
	system("PAUSE");
	return 0;
}
*/

int main()
{
	priority_queue<int> big_heap; // 默认构造最大堆
	priority_queue<int, vector<int>, greater<int> > small_heap; // 最小堆构造方法
	priority_queue<int, vector<int>, less<int> > big_heap2;
	//priority_queue<int, vector<int>, greater<int> >qi2;
	if (big_heap.empty())
	{
		cout << "big_heap is empty!\n" << endl;
	}
	int test[] = { 6, 10, 1, 7, 99, 7, 33 };
	for (int i = 0; i < 7; i++)
	{
		big_heap.push(test[i]);
	}
	cout << "big_heap.top = " << big_heap.top() << endl;

	for (int i = 0; i < 3; i++)
	{
		big_heap.pop();
	}
	cout << "big_heap.top() = " << big_heap.top() << endl;
	cout << "big_heap.size() = " << big_heap.size() << endl;
	system("PAUSE");
	return 0;
}