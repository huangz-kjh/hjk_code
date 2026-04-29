# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def linkList2list(self, head):
        l = []
        while head:
            l.append(head.val)
            head = head.next

        l.reverse()
        return l

    def insertNode(self, head, val):
        node = ListNode
        node.next = head.next
        node.val = val
        head.next = node

        return head

    def add_2linkList(self, head1, head2):
        dummy = ListNode(0)
        current = dummy

        while head1 and head2:  # 3 2 1 | 4 2 1
            if head1.val >= head2.val:  # 4 4 3 1 1
                current.next = head1
                head1 = head1.next
            else:
                current.next = head2
                head2 = head2.next

            current = current.next

        if head2:
            current.next = head2
        else:
            current.next = head1

        # l = self.linkList2list(dummy.next)
        # print(l)
        return dummy.next


    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if list1 == None and list2 == None:
            return list1
        elif list1 == None and list2 != None:
            return list2
        elif list1 != None and list2 == None:
            return list1
        else:
            return self.add_2linkList(list1, list2)



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
    l1 = create_head_insert(l)
    # traverse(l1)
    l = list(map(int, input("请输入链表2，空格间隔:").split()))
    l2 = create_head_insert(l)
    # traverse(l2)
    sol = Solution()
    traverse(sol.mergeTwoLists(l1, l2))






