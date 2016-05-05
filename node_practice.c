#include<stdio.h>


struct node_entry{
    int entry;
    struct node_entry *next;
};

struct node_entry create_node(int number){
    struct node_entry singlenode;
    singlenode.entry = number;
    singlenode.next = NULL;
    return singlenode;
}

void traverse_node (struct node_entry *head){
    while(head->next != NULL)
    {
	printf("%d\n",head->entry);
        head = head->next;
    }
    printf("%d\n",head->entry);
}

int main()
{
    struct node_entry head = create_node(0);
    struct node_entry first = create_node(1);
    head.next = &first;
    traverse_node(&head);
    return 0;
}
