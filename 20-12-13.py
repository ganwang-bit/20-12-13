#[n**3 for n in range(1,11)]
#[n.upper() for n in 'abcd']
#'8'.isdigit()
#'8'.isnumeric()
#>>> [n.upper() for n in 'abcd']
#['A', 'B', 'C', 'D']
#>>> num=[1,-2,4,3,-5]
#>>> result=[n for n in num if n>-3]
#>>> result
#[1, -2, 4, 3]
#def yuanyin(a):
#    return ''.join([n for n in a if n.lower() not in 'aeiou'])
a=[1,2,2,2,2,2,2,3,6,3,3,4,4]
c=set(a)
print(c)
>>> color={'bule':0,'yellow':1}
>>> color.items
<built-in method items of dict object at 0x00000237C99E0300>
>>> color.items()
dict_items([('bule', 0), ('yellow', 1)])
>>> color.keys()
dict_keys(['bule', 'yellow'])
>>> color.values()
dict_values([0, 1])
>>> 
================ RESTART: C:/Users/1/Desktop/python/20-12-13.py ================
{1, 2, 3, 4, 6}
>>> [1,2,2,2,2,3,4,5,6,7].set()
Traceback (most recent call last):
  File "<pyshell#7>", line 1, in <module>
    [1,2,2,2,2,3,4,5,6,7].set()
AttributeError: 'list' object has no attribute 'set'
>>> a=[1,2,2,2,2,3,4,5,6,7]
>>> print(set(a))
{1, 2, 3, 4, 5, 6, 7}
>>> 
