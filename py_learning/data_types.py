# Built-in Data Types
a = "Hello World" # str (String)
b = 20 # int (Integer)
c = 20.5 # float (floating point number)
d = 1j # complex (Complex number)
e = ["one", "two", "three"] # list (list)
f = ("one", "two", "three") # tuple (tuple)
g = range(10) #range (range)
h = {"name": "John", "age": 30} # dict (Dictionary)
i = {"apple", "banana", "cherry"} # set (Set)
j = frozenset({"one", "two", "three"}) # frozenset (Frozen set)
k  = True # bool (Boolean)
l = b"Hello, World" # bytes (Bytes)
m = bytearray(5) # bytearray (Byte array)
n = memoryview(bytes(5)) # memoryview (Memory view)
o = None # NoneType (None)

print(type(a))  # <class 'str'>
print(type(b))  # <class 'int'>
print(type(c))  # <class 'float'>
print(type(d))  # <class 'complex'>
print(type(e))  # <class 'list'>
print(type(f))  # <class 'tuple'>
print(type(g))  # <class 'range'>
print(type(h))  # <class 'dict'>
print(type(i))  # <class 'set'>
print(type(j))  # <class 'frozenset'>
print(type(k))  # <class 'bool'>
print(type(l))  # <class 'bytes'>
print(type(m))  # <class 'bytearray'>
print(type(n))  # <class 'memoryview
print(type(o))  # <class 'NoneType'>

# Python Numbers
# Integers, Flaot, Complex

x = 1 # int
y = 2.8 # float
z = 1j # complex

print(type(x))  # <class 'int'> Whole Number, Pos or Neg without decminals, of unlimited length
print(type(y))  # <class 'float'> Floating point number, containing one or more decimals. Float can also be scientific numbers with an "e" 
print(type(z))  # <class 'complex'> Complex numbers are written with a "j" as the imaginarty part

# Compelx
x = 3 + 5j
y = 5j
print(type(x))
print(x)
print(type(y))
print(y)

# Type Conversion
x = 1 # int
y = 2.2 # float
z = 3j # complex

# Convert from int to float
a = float(x)
print(a)

# Convert from float to int
b = int(y)
print(b)

#Convert from int to complex
c = complex(x)
print(c)

print(type(a))
print(type(b))
print(type(c))

# Random Nummber
import random
print(random.randint(1, 10)) # Random integer between 1 and 10


