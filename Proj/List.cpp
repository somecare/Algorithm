/*
	Date:2020/1/12
	Author:somecare
*/
#include"List.h"

/*
// 反转列表，不用额外空间
class Solution{
public:
	ListNode * reverseList(ListNode* head)
	{
		ListNode *new_head = NULL;
		while (head)
		{
			ListNode *next = head->next;
			head->next = new_head;
			new_head = head;
			head = next;
		}
		return new_head;
	}
	// 反转m-n之间的节点
	ListNode *reverseBetween(ListNode* head, int m, int n)
	{
		int change_len = n - m + 1;
		ListNode *pre_head = NULL;
		ListNode *result = head;
		while (head && --m)
		{
			pre_head = head;
			head = head->next;
		}
		ListNode *modify_list = head;
		ListNode *new_head = NULL;
		while (head && change_len)
		{
			ListNode *next = head->next;
			head->next = new_head;
			new_head = head;
			head = next;
			change_len--;
		}
		modify_list->next = head;

		if (pre_head)
		{
			pre_head->next = new_head;
		}
		else
		{
			result = new_head;
		}
		return result;
	}
	ListNode *reverseBetween(ListNode* head, int m, int n)
	{

	}
};
*/
/*
int main()
{
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(4);
	ListNode e(5);
	ListNode f(6);
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = &f;
	Solution solve;
	
	// 测试reverseList
	ListNode *head = &a;
	cout << "Before reverse:" << endl;
	while (head)
	{
		cout << head->Val<<" -> " ;
		head = head->next;
	}
	cout << "NULL" <<endl;
	head = solve.reverseList(&a);
	cout << "After reverse:" << endl;
	while (head)
	{
		cout << head->Val << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
	
	cout << "******--****--******" << endl;
	cout << "翻转指定区间节点" << endl;
	ListNode *head = &a;
	while (head)
	{
		cout << head->Val << " ";
		head = head->next;
	}
	cout << endl;
	ListNode *Rhead = solve.reverseBetween(&a, 2, 4);
	while (Rhead)
	{
		cout << Rhead->Val << " ";
		Rhead = Rhead->next;
	}
	cout << endl;


	system("PAUSE");
	return EXIT_SUCCESS;
}

*/


