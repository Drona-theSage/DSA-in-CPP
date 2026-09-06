// We have to find the nth node from the end of a given Singley Linked list:

// Edges cases: 1. List can be empty.
//              2. List might not have n elements.

//Approach: Bruteforce: we can traverse the linked list first to get the total length of the linked List and then calculate the Nth node from end
//                   using the length as reference by the formula : (length - n)th Node  from the begining. Then traverse LL again with a counter
//                   and as soon as counter == (length-n) print that node.


// Optimal solution : We can use Fast and slow pointer , where the slow pointer will move onlu after the fast pointer has moved "n" times. 
//                    The fast pointer will move until the end of the list and when the fast pointer will be at the end , the slow pointer will be
//                   at "n" nodes distance from it , therefore we can print the node which the slow pointer is pointing to. 


#include "../Singly_LL.hpp"
using namespace std;

int length_ofLinkedList(Node * head);

Node* Nth_node_from_end( Node* head, int n);


Node* Nth_node_from_end( Node* head, int n){
      //takes the head of Linked list and an integer index "n" and returns the address of nth-node from end.
    Node* fast_ptr = head;
    Node* slow_ptr = head;

    //check if list in empty ,if yess then print Empty list message and return head;
    if(head==nullptr){
     cout<<"List is Empty."<<endl;
     return head;
    }
    

    
    int counter=0;
     //Shifts the fast pointer forward by n steps
    do{
        fast_ptr=fast_ptr->next;
       //check if list doesnt have n elements , if so return address of last node.
        if(n!=1 && fast_ptr -> next == nullptr)
        {
            cout<<"List doesnt have enough elements"<<" "<<endl;
            return fast_ptr;
        }
      counter++;
    }while(counter!=n);

    //shifts both pointers normally.
    while(fast_ptr != nullptr)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr= fast_ptr ->next;
    }

    //now when Fast pointer reaches last node , slow pointer is exactly N node behind , therefore we can return slow_ptr now.
  return slow_ptr;
}




int length_ofLinkedList( Node* head){
  Node * temp = head;
  int count=0;
  while(temp){
    count++;
    temp= temp->next;
  }

  return count;
}




int main(){
    LinkedList List;
    List.insertAtBeginning(10);

    //lets say we want the 4th node from the end. Therefore that will be 2.
    //  int n= 4;

    // Bruteforce soltuion:

        // //find number of nodes in List.
        // int size = length_ofLinkedList(List.getHead());
        // //print the (length-n)th node from the beginning 
        // cout<< size<<endl;
        // int node_Beg = 0;
        // Node * temp = List.getHead();
        // while(node_Beg < size -n)
        // {   
        //     node_Beg++;
        //     temp = temp->next;
        // }

        // //currently temp is pointing to the nth node from end . So print it.

        // cout << temp->data<<endl;

    //Optimal Solution:

    Node * Nth_node = Nth_node_from_end(List.getHead(), 1);

    cout<< Nth_node->data<< endl;


 return 0;
}


