ListNode* partition(ListNode* head,int x){
  ListNode greater(0);
  LisNode lower(0);
  ListNode* gd=&greater;
  ListNode* ld=&lower;
  while(head){
    if(head->val<x){
      ld->next=head;
      ld=ld->next;
    }
    else{
      gd->next=head;
      gd=gd->next;
    }
    head=head->next;
    
  }
  gd->next=nullptr;
    ld->next=greater.next;
  return lower.next;
}






