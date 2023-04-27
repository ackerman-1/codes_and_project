#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *addLists(Node *head1, Node *head2)
{
    Node *result = NULL;
    Node *prev = NULL;
    Node *temp = NULL;
    int carry = 0;
    int sum;

    while (head1 != NULL || head2 != NULL)
    {
        sum = carry + (head1 ? head1->data : 0) + (head2 ? head2->data : 0);

        carry = (sum >= 10) ? 1 : 0;

        sum = sum % 10;

        temp = (Node *)malloc(sizeof(Node));
        temp->data = sum;

        if (result == NULL)
        {
            result = temp;
        }
        else
        {
            prev->next = temp;
        }

        prev = temp;

        if (head1)
        {
            head1 = head1->next;
        }

        if (head2)
        {
            head2 = head2->next;
        }
    }

    if (carry > 0)
    {
        temp->next = (Node *)malloc(sizeof(Node));
        temp->next->data = carry;
        temp->next->next = NULL;
    }

    return result;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = new Node(2);
    head1->next = new Node(4);
    head1->next->next = new Node(3);

    Node *head2 = new Node(5);
    head2->next = new Node(6);
    head2->next->next = new Node(4);

    Node *result = addLists(head1, head2);

    cout << "The sum of the two linked lists is: ";
    printList(result);

    return 0;
}
