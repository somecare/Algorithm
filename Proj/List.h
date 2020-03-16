#pragma once
#include<iostream>
#include <string>

using namespace std;

struct ListNode{
	int Val;
	ListNode *next;
	ListNode(int x) :Val(x), next(NULL){}
};