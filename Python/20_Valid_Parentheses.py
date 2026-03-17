sav1 = []
if sav1 :
    print("something is inside")
    

if not sav1 :
    print("nothing is inside")




class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False
        
        dic = { '(': ')', '[': ']', '{': '}' }
        
        save = []

        for parenthesis in s: #take out each parenthesis
            if parenthesis in dic: # if its opening parenthesis, save it
                save.append(parenthesis)
            else:
                if save == []: # not save
                    return False #if you see closing parenthesis but there is no opening parenthesis, return false

                last_open = save.pop()
                if dic[last_open] != parenthesis: # if the closing parenthesis does not match the last opening parenthesis,
                    return False

        return len(save) == 0