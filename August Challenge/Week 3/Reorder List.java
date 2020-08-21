Problem Name: Reorder List
https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3430/

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
    public void reorderList(ListNode head) {
        if(head == null) return;
        ListNode slow = head;
        ListNode fast = head;
        
        while(fast != null && fast.next != null) {
            slow = slow.next; 
            fast = fast.next.next;
        }
        
        ListNode mid = slow; 
        ListNode previous = null, current = slow, temp;
        while (current != null) {
            temp = current.next;
            current.next = previous; 
            previous = current; 
            current = temp;     
        }
        
        ListNode first = head, second = previous;
        while(second.next != null) {
            temp = first.next;
            first.next = second; 
            first = temp;
            temp = second.next; 
            second.next = first;
            second = temp;
        }
    }
}