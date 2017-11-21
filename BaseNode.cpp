#include "BaseNode.h"

Node::Node(int data): m_data(data),next(NULL){}
Node::~Node(){}

void Node::showData(){cout << "node data："<< this->getMData() << endl;}

Node * Node::getNext(){return this->next;}

void Node::setNext(Node *next){this->next = next;}

int Node::getMData(){return this->m_data;}

void Node::setMData(int data){this->m_data = data;}


NodeList::NodeList(Node * head){
	setHead(head);
}
NodeList::~NodeList(){
	deleteNodeList(getHead());
}

Node * NodeList::getHead(){return this->m_head;}
void * NodeList::setHead(Node * head){
	this->m_head= head;
	Node * node = head;
	if(node != NULL){
		while (node->getNext() != NULL)
		{
			node = node->getNext();
		}
	}
	m_last = node;
}

Node* NodeList::deleteNode(Node* node){
	Node* nextnode = NULL;
	if(node != NULL){
		nextnode = node->getNext();
		delete node;
	}
	return nextnode;
}

void NodeList::addNode(Node *node){
	if(this->getHead() == NULL){
		this->setHead(node);
	}
	m_last->setNext(node);
	this->m_last = node;
}

void NodeList::showNodeListData(){
	showNodeListData(this->getHead());
}

void NodeList::showNodeListData(Node *head){
	Node * node = head;
	while (node  != NULL)
	{	
		node->showData();
		node = node->getNext();
	}
}

NodeList * NodeList::transfNodeList(NodeList *list){
	if(list==NULL || list->getHead() == NULL || list->getHead()->getNext() == NULL) return list;
	
	list->setHead(transfNodeList(list->getHead()));
	return list;
}


Node * NodeList::transfNodeList(Node *head){
	if(head==NULL || head->getNext() == NULL) return head;
	Node *p1 = head;
	Node *p2 = p1->getNext();
	Node *p3 = p2->getNext();
	p1->setNext(NULL);
	while(p3 != NULL){
		p2->setNext(p1);
		p1 = p2;
		p2 = p3;
		p3 = p3->getNext();
	}
	p2->setNext(p1);
	head = p2;
	return head;
}

void NodeList::deleteNodeList(Node* head){
	Node * node = head;
	while (node != NULL)
	{
		node = deleteNode(node);
	}
}

