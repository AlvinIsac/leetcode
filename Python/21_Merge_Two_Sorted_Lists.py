from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:

        listnode = ListNode()


        # i am using or so any one is true it will run 

        # if not list1 or not list2:
        #     return listnode

        # if not list1:
        #     return list2
        # if not list2:
        #     return list1    
        
        # while list1.next or list2.next:
        #     if list1.val == list2.val:
        #         listnode.val = list1.val
        #         listnode.val = list2.val
        #         list1 = list1.next
        #         list2 = list2.next
        #     elif list1.val < list2.val:
        #         listnode.val = list1.val
        #         list1 = list1.next 
        #     elif list1.val > list2.val:
        #         listnode.val = list2.val
        #         list2 = list2.next

        # return listnode


        # run time beats 100 % memory 28 %
        if not list1:
            return list2
        if not list2:
            return list1    

        dummy = ListNode()
        listnode = dummy

        while list1 and list2:
            if list1.val == list2.val:
                listnode.next = ListNode(list1.val)
                listnode = listnode.next

                listnode.next = ListNode(list2.val)
                listnode = listnode.next

                list1 = list1.next
                list2 = list2.next

            elif list1.val < list2.val:
                listnode.next = ListNode(list1.val)
                listnode = listnode.next
                list1 = list1.next 

            else:
                listnode.next = ListNode(list2.val)
                listnode = listnode.next
                list2 = list2.next

        # handle remaining nodes
        while list1:
            listnode.next = ListNode(list1.val)
            listnode = listnode.next
            list1 = list1.next

        while list2:
            listnode.next = ListNode(list2.val)
            listnode = listnode.next
            list2 = list2.next

        return dummy.next
        


 # these are helper functions to check the anwers
def build_linked_list(values):
    dummy = ListNode()
    current = dummy
    for value in values:
        current.next = ListNode(value)
        current = current.next
    return dummy.next


def linked_list_to_list(node):
    values = []
    while node:
        values.append(node.val)
        node = node.next
    return values


def run_tests():
    tests = [
        ([1, 2, 4], [1, 3, 4], [1, 1, 2, 3, 4, 4]),
        ([], [], []),
        ([], [0], [0]),
        ([0], [], [0]),
        ([1, 1, 2], [1, 3], [1, 1, 1, 2, 3]),
        ([-3, -1, 2], [-2, 0, 2], [-3, -2, -1, 0, 2, 2]),
    ]

    solution = Solution()

    for index, (left, right, expected) in enumerate(tests, start=1):
        list1 = build_linked_list(left)
        list2 = build_linked_list(right)

        result = solution.mergeTwoLists(list1, list2)

        if result is None or isinstance(result, ListNode):
            actual = linked_list_to_list(result)
            passed = actual == expected
        else:
            actual = result
            passed = False

        print(
            f"Test {index}: input=({left}, {right}) | output={actual} | expected={expected} | pass={passed}"
        )


if __name__ == "__main__":
    run_tests()