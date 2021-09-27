#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node *nodeptr =head;
            if ( (nodeptr == nullptr) || (nodeptr->next == nullptr)){
                return head;
            }
            
            while(nodeptr->next) {
                if(nodeptr->data == nodeptr->next->data){
                    nodeptr->next = nodeptr->next->next;
                } else{
                    nodeptr = nodeptr->next;
                }
            }
            return head;
          }

          Node* insert(Node *head,int data)
