

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	if (llist==nullptr){
        llist=new SinglyLinkedListNode(data);
        return llist;
    } else {
        SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);
        temp->next=llist;
        llist=temp;
    }
    return llist;
}

