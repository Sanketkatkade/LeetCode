class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        set1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}
        set2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}
        set3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'}
        res = []
        
        for word in words:
            flag = True
            set_temp = set()
            
            if word[0].lower() in set1:
                set_temp = set1
            elif word[0].lower() in set2:
                set_temp = set2
            else:
                set_temp = set3
                
            for ch in word:
                if ch.lower() not in set_temp:
                    flag = False;
                    break;
                    
            if flag:
                res.append(word)
                
        return res