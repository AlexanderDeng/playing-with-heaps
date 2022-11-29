#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
  if (head == nullptr)
  {
    smaller = nullptr; 
    larger = nullptr; 
    return; 
  }
  else if (head != nullptr)
  {
    llpivot(head->next, smaller, larger, pivot); 

    if (head->val <= pivot)
    {
      head->next = smaller; 
      smaller = head; 
    }
    else if (head->val > pivot)
    {
      head->next = larger; 
      larger = head; 
    }
  }
  head = NULL; 
}