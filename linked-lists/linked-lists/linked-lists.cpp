// linked-lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};


Node* head = NULL; //initialize and declare LL head 
int num_links=5; //number of links
Node* p; // point to a specific spot in the linked list

////////////////////////////////////////*basic linked list creation and printing*/////////////////////////////////////////////////
//int main()
//{
//	//add x num of nodes to tail of the link list
//	for(int i=0; i<num_links; i++)
//	{
//		
//		//create new node
//		Node* new_node = new Node();
//		new_node->data = i;
//		new_node->next = NULL;
//
//		if (i == 0)
//		{
//			head = new_node;
//			p = new_node;
//			continue;
//		}
//
//		//Connect the new node to the link list
//		p->next = new_node;
//		p = new_node;
//	}
//
//	//point temp_shift to the head (could've used the p'ointer' node)
//	Node* temp_shift = head;
//
//	//print data in each node
//	do
//	{
//		cout << temp_shift->data;
//		temp_shift = temp_shift->next;
//	} while (temp_shift->next != NULL);
//
//	cout << temp_shift->data;
// return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////*insert a node into the front of the linked list*/////////////////////////////////////////////////

void Insert(int x);
void Print();


int main() {
	head = NULL;
	cout << "how many numbers ?\n";
	int n, i, x;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		printf("Enter the number \n");
		cin >> x;
		Insert(x);
		Print();
	}
}
void Insert(int x)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if (head != NULL) temp->next = head;
	head = temp;
}

void Print()
{
	Node* temp = head;
	printf("List is: ");
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
