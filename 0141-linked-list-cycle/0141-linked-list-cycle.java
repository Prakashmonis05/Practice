/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if(head==null)
        {
            return false;
        }
        if(head.next==null)
        {
            return false;
        }
        ListNode low;
        ListNode high;
        low=head;
        high=head;
        while(high!=null && high.next !=null)
        {
            low=low.next;
            high=high.next.next;
           if(low==high)
           {
             return true;
           }
           
        }
    return false;
    }
}