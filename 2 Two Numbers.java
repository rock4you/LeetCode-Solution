/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int a=0, b=0, index=0;
        ListNode l3 = l1;
        a=l1.val;
        b=l2.val;
        while(true)
        {
            l1.val=(a+b+index)%10;
            index=(a+b+index)/10;
            if(l1.next!=null && l2.next!=null)
			{
				l1=l1.next;
				a=l1.val;
				l2=l2.next;
				b=l2.val;
			}
			else if(l1.next!=null && l2.next==null)
			{
				ListNode tmp=new ListNode(0);
				l2.next=tmp;
				l1=l1.next;
				a=l1.val;
				l2=l2.next;
				b=l2.val;
			}
			else if(l1.next==null && l2.next!=null)
			{
				ListNode tmp = new ListNode(0);
				l1.next=tmp;
				l1=l1.next;
				a=l1.val;
				l2=l2.next;
				b=l2.val;
			}
			else//null null
			{
				if(index!=0)
				{
					ListNode tmp = new ListNode(index);
					l1.next=tmp;
					l1=l1.next;
					a=l1.val;
					b=0;
				}
				break;
			}
        }
        return l3;
    }
}
