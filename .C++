class Solution
{
    public:
    
    Node* reverse(Node* root){
        Node* prev = NULL;
        Node* cur = root;
        
        while(cur){
            Node* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
head = reverse(head);
Node* curr = head;

int max = head->data;
Node* prev = head;
head = head -> next;
while(head){
    if(head->data>=max){
        max=head->data;
        prev=head;
        head=head->next;
    }
    
    else{
        prev->next=head->next;
        head=prev->next;
    }
}

head = reverse(curr);
return head;
    }
    
};
