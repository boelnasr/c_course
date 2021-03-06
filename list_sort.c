#include <stdio.h>  
#include <malloc.h>
#include <math.h>
#include <stdlib.h> 
#include<time.h>
//Represent a node of the doubly linked list  
struct node{  
    int data;  
    struct node *next;  
	struct node *prev;  
};   
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
//addnode() will add a new node to the list  
void addnode(int data) {  
    //Create a new node  
    struct node *newnode = (struct node*)malloc(sizeof(struct node));  
    newnode->data = data;  
    newnode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newnode;  
        tail = newnode;  
    }  
    else {  
        //newnode will be added after tail such that tail's next will point to newnode  
        tail->next = newnode;  
        //newnode will become new tail of the list  
        tail = newnode;  
    }  
}
    //sortList() will sort nodes of the list in ascending order  
    void sortList() {  
        //node current will point to head  
        struct node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                //node index will point to node next to current  
                index = current->next;  
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    }  
void del (struct node *before_del)
{
    struct node *temp;
    temp = before_del->next;
    before_del->next = temp->next;
    free(temp);
}

//display() will display all the nodes present in the list  
void display() {  
    //node current will point to head  
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
// function to Find the unique elements in linked lists 
int Find_unique()
{
    struct node *current = head;  
    int arr1[100], n=100,ctr=0;
    int i=0, j, k; 
	
       
	      while(current != NULL) {  
        //Prints each node by incrementing pointer  
        arr1[i]= current->data;  
        current = current->next;
        i++;  
    }  
	  del(head->next);

    /*Checking duplicate elements in the array */
     for(i=0; i<n; i++)
    { del(head->next);
        ctr=0;
		
		/*Check duplicate bifore the current position and
		increase counter by 1 if found.*/
        for(j=0; j<i-1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if(arr1[i]==arr1[j])
            {
                ctr++;
            }
        }
        /*Check duplicate after the current position and
		  increase counter by 1 if found.*/
       for(k=i+1; k<n; k++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if(arr1[i]==arr1[k])
            {
                ctr++;
            }

        }
		/*Print the value of the current position of the array as unique value 
		when counter remain contains its initial value.*/
       if(ctr==0)
        {
          addnode(arr1[i]);
        }
    }
       printf("\n\n");
}
      
int main()  
{  time_t t;
    
    //* Intializes random number generator */
   srand((unsigned) time(&t)); // Use current time as seed for random generator 
    for (int i = 0; i < 100; i++)
    {
        addnode(rand()%100);
    }
    //Displaying original list  
    printf("Original list: \n");  
    display();  
    //Sorting list  
    sortList();       
    //Displaying sorted list  
    printf("Sorted list: \n");  
    display(); 
    printf("unique list: \n");
    Find_unique();
    display(); 
    return 0;  
}  
