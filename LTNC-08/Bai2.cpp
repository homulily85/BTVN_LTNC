

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	if (head==nullptr){
        head= new SinglyLinkedListNode(data);
        return head;
    } else {
        SinglyLinkedListNode* temp;
        temp=new SinglyLinkedListNode(data);
        SinglyLinkedListNode* p;
        for (p=head;p->next!=nullptr;p=p->next);
        p->next=temp;
    }
    return head;
}

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if (head==nullptr){
        head= new SinglyLinkedListNode(data);
        return head;
    }
    head->next=insertNodeAtTail(head->next,data);
    return head;
}