"""
Problem Statement :-
Your task is to sort a given string. Each word in the String will contain a single number. This number is the position the word should 
have in the result.

Note: Numbers can be from 1 to 9. So 1 will be the first word (not 0).

If the input String is empty, return an empty String. The words in the input String will only contain valid consecutive numbers.

For an input: "is2 Thi1s T4est 3a" the function should return "Thi1s is2 3a T4est"
"""

#Importing Packages
import re
import collections
#Defining the order function
def order(sentence):
  # code here
  #Defining the local variables
  sortStr=""
  
  #Using regex to extract the numbers in each word of the string
  li=[int(s) for s in re.findall(r'-?\d+\.?\d*', sentence)]
  
  #forming a list of all the words
  lis=sentence.split()
  
  #combining the numbers and their repsective words as a dictionary
  d = dict(zip(li, lis))
  
  #Sorting the dictionary according to the keys of the dicitonary
  od = collections.OrderedDict(sorted(d.items()))
  
  #Sorted string formation 
  for key, value in od.items():
      sortStr+=value+" "
  #Removing the extra whitespaces from the end 
  sortStr=sortStr.strip()
  
  #Returning the sorted String
  return sortStr


"""
Alternate Solution
"""
def order(sentence):
    return " ".join(sorted(sentence.split(), key=lambda x: int(filter(str.isdigit, x))))
