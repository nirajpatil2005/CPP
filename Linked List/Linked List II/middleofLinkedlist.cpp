// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int len=0;
//         Listnode* temp= head
//         while(!temp=NULL)
//         {
//             len++;
//             temp=temp->next;
//         }
//         int mididx=len/2;
//         node* mid=head;
//         for(int i=1;i<=mididx;i++)
//         {
//             mid=mid->next;
//         }
//         return mid;
//     }
// };


// method-2

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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL && fast->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
      
//         return slow;
//     }
// };