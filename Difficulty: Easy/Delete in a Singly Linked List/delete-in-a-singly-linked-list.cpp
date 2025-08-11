/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL)
        {
            return head;
        }
        if(x==1)
        {
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int count=0;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL)
        {
            count++;
            if(count==x)
            {
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};