#include<stdio.h>
#include<stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node 
{
    int data;
    struct Node* next;
}node;

//Function to create a new node
node* create_node(int data)
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("\nMemory allocation failed");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

//Function to insert a node at the beginning of the linked list
void insert_at_beg(node** head, int data)
{
    node* new_node = create_node(data);
    new_node->next = *head;
    *head = new_node;
}

//Function for display the list
void display_list(node* head)
{
    //Create a temporary node to traverse the list
    node* temp = head;
    if(temp == NULL)
        printf("\nLinked list is empty");
    
    else
    {
        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
    }

}


//Driver code
void main()
{
    //iniitialize the head of the linked list
    node* head = NULL;

    while(1)
    {
        printf("\n0 for exit\n1 for insert at beginning\n2 for insert at end\n3 for insert at position\n4 for delete at beginning\n5 for delete at end\n6 for delete at position\n7 for display\n8 for reverse\n");
        int ch;
        printf("\nEnter the choice: ");
        scanf("%d", &ch);

        if(ch == 0)
        {
            printf("\ntata");
            break;
        }
        else if(ch == 1)
        {
            int data;
            printf("\nEnter the data: ");
            scanf("%d", &data);
            insert_at_beg(&head, data);
        }
        else if(ch == 2)
        {
            int data;
            printf("\nEnter the data: ");
            scanf("%d", &data);
            insert_at_end(&head, data);
        }
        else if (ch == 7)
        {
            display_list(head);
        }
        else
        {
            printf("\ninvalid choice");
        }
    }
}