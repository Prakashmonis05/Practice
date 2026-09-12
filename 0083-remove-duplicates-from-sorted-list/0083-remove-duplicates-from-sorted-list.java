/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null) {
            return head;
        }
        ListNode prev = head;
        ListNode current = prev.next;
        while (current != null) {
            if (prev.val == current.val) {
                prev.next = current.next;
                current = prev.next;
            } else {
                current = current.next;
                prev = prev.next;
            }

        }
        return head;
    }
}