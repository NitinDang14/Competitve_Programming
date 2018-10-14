'''
Problem Statement :-
Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. 
The string can contain any char.
'''
from collections import Counter
def xo(s):
    '''
    1. Expand the string to a list of characters 
    2. Then form a key-value pair of the character and the number of times it occurs using Counter
    3. Check whether the values of x and o in the dictionary matches if yes then return true else
        return false
    '''
    dict=Counter(list(s.lower()))
    if(dict['x']==dict['o']):
        return True
    else:
        return False
