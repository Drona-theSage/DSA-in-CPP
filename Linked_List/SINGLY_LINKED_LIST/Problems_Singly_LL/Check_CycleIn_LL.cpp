// problem: Check whether the	given	linked	list	is	either	NULL-terminated	or	ends	in	a	(cycle)

//Bruteforce: Since a cycle in a linked list represents that any Node in the linked List is being pointed at by two nodes. Therefore,
// We basically have to look for a node which is being pointed to by more than one node , if there is such a node , then a cycle is present.

// Scenario: The location of cycle doesnt matter because no matter where the cycle exists , The traversal of LL will never reach a node which is pointing to  a nullptr due to cycle.
    // Approach: The most bruteforce way would be to traverse linked List in a nested loop , inside each  iteration we will chechk for a single node and the number of nodes
    // which are pointing to that node , if the count becomes 2 , we can say that yess cycle exist in the list and we can exit the code from there while printing the the node if needed.

//Since in this problem we are asked to just check for Cycle , we will just print yess or No.

// Limitation of bruteforce: It uses nested loop , therefore this solution will have a time complexity of O(n^2) and for linkedlist with number of nodes of order 10^5 or more , this soltuion will perform poorly.

// Optimal solution: We can check for cycle in a linked list by using the concept of a fast and Slow pointer:
//                  1) Use a slow pointer and a faste pointer.
//                  2) Make fast pointer move two places ahead than slow pointer.
//                  3) If cycle doesnt exist in the LL , then fast pointer will reach the node pointing to nullptr and we will exit ,
//                  4) IF cycle exist then there will come a point while traversing that slow pointer and fast pointer will both point to the same node, which in normal scenario shouldnt be possible,
//                      therefore we will print YES , cycle exist and exit .

// Advantage of this approach : USES a single traversal for the entire LL to detect cycle --> Time complexity: O(n) , Space_Complexity: using 2 pointer therefore constant space : O(1)

#include "../Singly_LL.hpp"

using namespace std;

// Implementing Bruteforce solution first:

int main()
{


LinkedList list;
list.insertAtBeginning(4);
list.insertAtBeginning(3);
list.insertAtBeginning(12);
list.insertAtBeginning(6);
list.insertAtBeginning(23);
list.insertAtBeginning(22);

Node * headNode = list.getHead();
Node * newNode = new Node(5); 
while(headNode->next != nullptr)
{
    // find the last node of the linked list
   headNode= headNode->next; 
}
headNode->next = newNode;
newNode->next = list.getHead();

//created a circlular Singley Linked list , where end node is pointing to headnode , therefore
//   5 is pointing to 22.


//lets print the list once:
Node * tempHead = list.getHead();
int count_of_head =0;
while(tempHead && count_of_head < 2){
    cout<<tempHead->data<<" --> ";
    if(tempHead == list.getHead())
    {
        count_of_head ++;
    }
    tempHead= tempHead->next;
}

cout<<"Exited the while loop safely"<<endl;


// now to confirm the cycle through Bruteforce solution:
// Node * temp = list.getHead();
// while(temp)
// {
//     // as in a singley linked list no node down the list should point to the previous node , therefore counter for each node should be 0, if it becomes 1 
//     //  then it means a node has address of its predecessor therefore a cycle exist.

//     Node * current_Node = temp;
//     int count =0;
//     Node * temp2 = temp;
//     while(temp2)
//     {
//             // Traverse the list until the end.
//             if( temp2 == current_Node)
//             {
//                 count++;
//                 cout<<"The list has a cycle as , The node with value: "<< temp2->data << " Is pointing to the node with value: "<< current_Node->data<<endl;
//                 break;
//             }

//             temp2= temp2->next;
//     }

//     temp= temp->next;
// }

return 0;

}