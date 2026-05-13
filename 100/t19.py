# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: Optional[ListNode]
        :type n: int
        :rtype: Optional[ListNode]
        快慢指针
        """
        dummy = ListNode(next=head)
        slow = fast = dummy
        for _ in range(n):
            fast = fast.next

        while fast.next:
            slow, fast = slow.next, fast.next
        slow.next = slow.next.next
        return dummy.next


if __name__ == "__main__":
    def create_head_insert(arr):
        head = None
        for val in arr:
            node = ListNode(val)
            node.next = head
            head = node
        return head

    def traverse(head):
        while head:
            print(head.val, end=" ")
            head = head.next

    l = list(map(int, input("请输入链表1，空格间隔:").split()))
    l.reverse()
    l1 = create_head_insert(l)
    traverse(l1)
    n = int(input("请输入n:"))
    sol = Solution()
    traverse(sol.removeNthFromEnd(l1, n))
