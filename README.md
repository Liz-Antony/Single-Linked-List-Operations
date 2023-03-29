# Singly-Linked-List-Operations
This is a program to implement a singly linked list in C language with several operations such as creating a linked list, inserting a node at the beginning, inserting a node at the end, inserting a node at a specific position, deleting a node from the beginning, deleting a node from the end, deleting a node from any position, and searching for an element in the linked list.

The program starts by including the necessary header files such as stdio.h and stdlib.h. Then, the necessary function declarations are made for all the functions used in the program. After that, a structure node is created to store data and link part of the linked list.

The main() function starts by asking the user to enter the size of the linked list and creating the linked list using the createLinkedList() function. After that, it displays the options table for different operations and asks the user to enter the operation number. Depending on the operation number, it calls the corresponding function such as display(), insert_First(), insert_Last(), insert_AnyWhere(), delete_First(), delete_Last(), delete_Anyone(), or searchElement().

The createLinkedList() function is used to create a linked list by taking input from the user and storing it in the linked list. It creates a temporary node using malloc() and assigns the data value entered by the user to the data part of the node. Then, it checks whether the head of the linked list is NULL. If it is NULL, it assigns the newly created node to the head. Otherwise, it traverses through the linked list to the end and adds the new node there.

The display() function is used to display the elements of the linked list. It checks whether the head of the linked list is NULL. If it is NULL, it prints that the list is empty. Otherwise, it traverses through the linked list and prints the data part of each node.

The insert_First() function is used to insert a new node at the beginning of the linked list. It creates a temporary node using malloc() and assigns the data value entered by the user to the data part of the node. Then, it checks whether the head of the linked list is NULL. If it is NULL, it assigns the newly created node to the head. Otherwise, it adds the new node at the beginning of the linked list.

The insert_Last() function is used to insert a new node at the end of the linked list. It creates a temporary node using malloc() and assigns the data value entered by the user to the data part of the node. Then, it checks whether the head of the linked list is NULL. If it is NULL, it assigns the newly created node to the head. Otherwise, it traverses through the linked list to the end and adds the new node there.

The insert_AnyWhere() function is used to insert a new node at any position of the linked list. It creates a temporary node using malloc() and assigns the data value entered by the user to the data part of the node. Then, it asks the user to enter the position where the new node is to be inserted. It subtracts one from the position to get the index of the node before which the new node is to be inserted. Then, it traverses through the linked list to the node at the index and adds the new node there.

The delete_First() function is used to delete the first node of the linked list. It checks whether the head of the linked list is NULL. If it is NULL, it prints that the list is empty. Otherwise, it assigns the next node of the head to the head and frees the memory occupied by the first node.

The delete_Last() function is used to delete the last node of the linked list. It checks whether the head of the linked list is NULL
![Screenshot (2345)](https://user-images.githubusercontent.com/104863304/228106660-c038b0c5-afa6-4775-8873-d57d3bdbfa52.png)
![Screenshot (2347)](https://user-images.githubusercontent.com/104863304/228106774-002b4ab0-053a-46e5-93f0-ef891874e74c.png)
![Screenshot (2349)](https://user-images.githubusercontent.com/104863304/228106902-7cbee52f-4b71-4eb7-a0d9-bc8c428fff23.png)
![Screenshot (2351)](https://user-images.githubusercontent.com/104863304/228107034-208d706b-8207-4b83-bf45-3473fefe759a.png)
