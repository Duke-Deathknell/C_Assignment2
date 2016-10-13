//Michael Alsbergas, 5104112
//This file controls the linked list operations.

#include <stdlib.h> 
#include <stdio.h>
#include <limits.h>
#include "storage.h"

struct node root = {INT_MAX, NULL}; 

//This accepts a number, sorts it, and inserts it into the list as a new node.
//The farthest node will always have an x value of INT_MAX.
void input(int num){
	struct node *ptr = &root;
	struct node *qtr;
		
	if (root.x != INT_MAX){
		int i; 
		for(i = 0; i < 1;){
			if(ptr->x > num){
				qtr->next = malloc(sizeof(struct node));
				qtr->next->x = num;
				qtr->next->next = ptr;
				i = 1;
				}
			if (ptr->x < num){
				qtr = ptr;
				ptr = ptr->next;
			}
			if (ptr->x == num) 
				i = 1;
		}
	}
		
	//Empty list case.	
	if (root.x == INT_MAX){
		root.next = malloc(sizeof(struct node));
		root.x = num; 
		root.next->x = INT_MAX;
		root.next->next = NULL;
		}
	
}

//This returns the size of the list. It's used to help output.
int sizeOf(){
	struct node *ptr = &root;
	int num = 0;
	
	int i;
	for(i = 0; i < 1;){
		if(ptr->x == INT_MAX)
			return num;
		if(ptr->x != INT_MAX){
			num = num + 1;
			ptr = ptr->next;
		}
	}
	return num;
}

//This returns the x value of the root node and "pops" it from the list.
int pop(){
	if(root.x != INT_MAX){
		struct node *ptr = root.next;
		int num = root.x; 
		root.x = root.next->x; 
		if(root.x != INT_MAX){
			root.next = root.next->next;
		}
		else (root.next = NULL);
		free(ptr);
		return num;
	}
	return;
}

