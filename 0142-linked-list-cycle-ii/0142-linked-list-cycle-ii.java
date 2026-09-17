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
    public ListNode detectCycle(ListNode head) {
        if (head == null) {
            return null;
        }
        if (head.next == null) {
            return null;
        }
        ListNode low;
        ListNode high;
        low = head;
        high = head;
        while (high != null && high.next != null) {
            low = low.next;
            high = high.next.next;
            if (low == high) {
                low = head;

                while (low != high) {
                    low = low.next;
                    high = high.next;
                }

                return low;
            }
        }
        return null;

    }
}