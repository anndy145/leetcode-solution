/* 
題目意思:移除重複的元素
想法:使用兩個指標，一個指向目前節點，另一個指向下一個節點，當兩個節點的值相同時，刪除下一個節點，否則移動到下一個節點。
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->val == curr->next->val) {
            struct ListNode* temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }

    return head;
}