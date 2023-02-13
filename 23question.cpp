class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     vector<int> v;
     for(auto i:lists){
         while(i){
             v.push_back(i->val);
             i=i->next;
         }
     }   

     sort(v.begin(),v.end());

     ListNode* dummy = new ListNode(0);
     ListNode* temp = dummy;
     
     for(int i:v){
         ListNode* n1 = new ListNode(i);
         dummy->next=n1;
         dummy=dummy->next;
     }
     return temp->next;
    }
};
