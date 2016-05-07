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

int doesExist(struct node_entry *head, int number){
   int exists = -1;
   while(head->next != NULL){
	if (head->entry == number){
	    exists = 1;
	    break;
	}
	head = head->next;
   }
   return exists;
}

void deleteNode(struct node_entry *head, int number)
{
    struct node_entry *prev;
    struct node_entry *curr;
    prev = head;
    curr = head;
    if (doesExist(head,number) == 1){
	while(curr->next != NULL){
	    if (curr->entry == number){
		while(head->next != NULL){
		    if(prev->next == curr) break;
		    prev = prev->next;
		}
		prev->next = curr->next;
		break;
	    }
	    curr = curr->next;
	}
    }
}

int main()
{
    struct node_entry head = create_node(0);
    struct node_entry first = create_node(1);
    struct node_entry second = create_node(2);
    head.next = &first;
    first.next = &second;
    traverse_node(&head);
    deleteNode(&head,1);
    traverse_node(&head);
    if (doesExist(&head,5) == 1 ){
        printf("Exists\n");
    }
    else{
	printf("Does not Exist\n");
    }
    return 0;
}
