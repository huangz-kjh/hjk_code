# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """
        if not head or not head.next:
            return head

        def linkListLen(head):
            l = 0
            while head:
                l += 1
                head = head.next

            return l

        def moveNode(head, l):
            dummy = ListNode()
            dummy = head
            l1 = []
            l2 = []
            for i in range(l - k):
                l1.append(dummy.val)
                dummy = dummy.next

            while dummy:
                l2.append(dummy.val)
                dummy = dummy.next

            l2.extend(l1)

            return l2

        l = linkListLen(head)
        k %= l
        l = moveNode(head, l)

        l.reverse()

        head = ListNode()

        for s in l:
            node = ListNode()   # 创建一个新接节点
            node.val = s    # 赋值
            node.next = head.next   # 插入操作
            head.next = node

        return head.next

# class Solution(object):
#     def rotateRight(self, head, k):
#         if not head or not head.next:
#             return head

#         # 1️⃣ 计算长度 + 找尾节点
#         length = 1
#         tail = head
#         while tail.next:
#             tail = tail.next
#             length += 1

#         # 2️⃣ 处理 k
#         k %= length
#         if k == 0:
#             return head

#         # 3️⃣ 变成环
#         tail.next = head

#         # 4️⃣ 找新尾节点（length - k - 1）
#         steps = length - k
#         new_tail = head
#         for _ in range(steps - 1):
#             new_tail = new_tail.next

#         # 5️⃣ 断开
#         new_head = new_tail.next
#         new_tail.next = None

#         return new_head
    
if __name__ == "__main__":
    def create_headInsert_linkList():
        head = ListNode()

        l = list(map(int, input("请输入链表:").split()))
        l.reverse()

        for s in l:
            node = ListNode()   # 创建一个新接节点
            node.val = s
            node.next = head.next  # 插入操作
            head.next = node

        return head.next

    def show_linkList(head):
        while head:
            print(head.val, end=' ')
            head = head.next


    # show_linkList(create_headInsert_linkList())
    while 1:
        head = create_headInsert_linkList()
        k = int(input("请输入k:"))
        # show_linkList(head)


        sol = Solution()
        show_linkList(sol.rotateRight(head, k))
