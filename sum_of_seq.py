'''
Task:-
Your task is to make function, which returns the sum of a sequence of integers.

The sequence is defined by 3 non-negative values: begin, end, step.

If begin value is greater than the end, function should returns 0


'''


def sequence_sum(begin_number, end_number, step):
    #your code here
    if(begin_number>end_number):
        return 0
        '''
        Checking whether beginning number is greater ending number
        '''
    else:
        sum=0
        '''
        Iterating from initial number through ending number using for loop and range function
        '''
        for i in range(begin_number, end_number+1, step):
            sum+=i
        return sum
