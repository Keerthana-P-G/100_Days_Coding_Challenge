/*Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

Example 1:
Input: head = [1,2,3,4]
Output: [2,1,4,3]

Example 2:

Input: head = [1]
Output: [1]*/

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
    public ListNode swapPairs(ListNode head) {
        ListNode node = head;
        ListNode next = head != null && head.next != null ? head.next : head;
        ListNode prev = null;
        while (node != null) {
            System.out.println("1");
            if (node.next != null) {
                if (prev != null) {
                    prev.next = node.next;
                }
                prev = node;
                ListNode list = node.next.next;
                node.next.next = node;
                node.next = list;
                node = list;
            } else {
                node = null;
            }
        }
        return next;
    }
}