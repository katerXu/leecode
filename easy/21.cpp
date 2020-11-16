#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<stack>

#define INF (0x7fffff)

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode *ans = new ListNode(-1), *p = ans;
	while (l1 != nullptr&&l2 != nullptr) {
		if (l1->val < l2->val) {
			p->next = l1;
			l1 = l1->next;
		}
		else {
			p->next = l2;
			l2 = l2->next;
		}
		p = p->next;
	}
	p->next = nullptr == l1 ? l2 : l1;
	return ans->next;
}

int main() {

	system("pause");
}
