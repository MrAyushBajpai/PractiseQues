#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};

Node* MergeTwoSortedLists(Node *head1, Node* head2){
    if (!head1) return head2;
    if (!head2) return head1;

    Node* result;

    if(head1-> data < head2 -> data){
        result = head1;
        result -> bottom = MergeTwoSortedLists(head1->bottom, head2);
    }
    else{
        result = head2;
        result -> bottom = MergeTwoSortedLists(head1, head2->bottom);
    }

    return result;
}

Node *flatten(Node *root) {
    if(!root || !root->next) return root;

    root->next = flatten(root->next);
    root = MergeTwoSortedLists(root, root->next);

    return root;
}

int main(){
    Node* five = new Node(5);
    Node* seven = new Node(7);
    Node* eight = new Node(8);
    Node* thirty = new Node(30);

    five->bottom = seven;
    seven->bottom = eight;
    eight->bottom = thirty;

    Node* ten = new Node(10);
    Node* twenty = new Node(20);

    five->next = ten;
    ten->bottom = twenty;


    Node* nineteen = new Node(19);
    Node* twentytwo = new Node(22);
    Node* fifty = new Node(50);

    ten->next = nineteen;
    nineteen->bottom = twentytwo;
    twentytwo -> bottom = fifty;
    
    Node* twentyeight = new Node(28);
    Node* thirtyfive = new Node(35);
    Node* fourty = new Node(40);
    Node* fourtyfive = new Node(45);

    nineteen->next = twentyeight;
    twentyeight -> bottom = thirtyfive;
    thirtyfive->bottom = fourty;
    fourty->bottom = fourtyfive;

    Node* res = flatten(five);
    while(res != nullptr){
        cout << res->data << endl;
        res = res->bottom;
    }

}