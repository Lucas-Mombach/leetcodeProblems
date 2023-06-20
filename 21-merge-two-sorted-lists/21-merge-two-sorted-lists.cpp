/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(!list1) return list2;
        if(!list2) return list1;
        
        ListNode *aux = nullptr;
        
        
        
        if(list1->val >  list2->val){
            aux = list2;
            list2 = list2->next;
            
        }
        else{
            aux = list1;
            list1 = list1->next;
        }
        ListNode* ptrAux = aux;
        
        while(list1 && list2){
            if(list1->val >= list2->val) {
                ptrAux->next= list2;
                list2= list2->next;
                ptrAux = ptrAux->next;
            }
            else {
                ptrAux->next= list1;
                list1 = list1->next;
                ptrAux = ptrAux->next;
                
            }
        }
        if(list1 != nullptr){
            ptrAux->next = list1;
            list1 = list1->next;
            ptrAux = ptrAux->next;
        }
         if(list2 != nullptr){
            ptrAux->next = list2;
            list2 = list2->next;
            ptrAux = ptrAux->next;
        }
        
        return aux;
    }
    
};