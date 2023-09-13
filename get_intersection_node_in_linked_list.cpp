int getLength(ListNode* head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;

        int len_a = getLength(headA) , len_b = getLength(headB) ;

        while(len_a > len_b){
            headA = headA->next;
            len_a--;
        }
        while(len_b > len_a){
            headB = headB->next;
            len_b--;
        }

        while(headA && headB){
            if(headA==headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
