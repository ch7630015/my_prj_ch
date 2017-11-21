#ifndef _BASE_NODE_H_
#define _BASE_NODE_H_
#include <stdlib.h>
#include <iostream>

using namespace std;

class Node{
public:
	Node(int data);
	
	~Node();
	
	Node * getNext();
	void setNext(Node *next);

	int getMData();
	void setMData(int data);


	void showData();
private:
	Node * next;
	int m_data;
};

class NodeList{
public:
	NodeList(Node * head = NULL);
	~NodeList();

	Node * getHead();
	void * setHead(Node * head);
	
	void addNode(Node *node); 
	
	Node* deleteNode(Node* node);

	void showNodeListData();
	
	void showNodeListData(Node *head);
	
	NodeList* transfNodeList(NodeList *nodeList);
	
	Node * transfNodeList(Node *head);
	
	void deleteNodeList(Node* head);

	
private:
	Node *m_head;
	Node *m_last;
};

#endif