# Sys Version
import sys
print(sys.version)

# Print
print("Hello, World!")

# Py Indentation
if 5 > 2:
    print("Five is greater than two!")

# Py Indentation (Wrong) 
#if 5 > 2:
#print("Five is greater than two!")  # This will cause an Indentation Error

# or

#if 5 > 2:
#    print("Five is greater than two!")
        #print("Five is greater than two!")  # This will cause an Indentation Error

# Variables (Variables are created when you assign a value to it)
x = 5 
y = "Hello, 'y' Variable!"
print(x)
print(y)

# Variable Type Casting
x = str(10) # strings '10'
y = int(10) # integers 10
z = float(10) # float 10.0
print(x)
print(y)
print(z)

# Printing the Type of Variables
print(type(x))
print(type(y))
print(type(z))

# Variable Names
# Do's
myvar = 1
my_var = 2
_my_var = 3
myVar = 4
MYVAR = 5
myvar2 = 6

# Don'ts
#2myvar = 1
#my-var = 2
#my var = 3

# Camel Case
myVariableName = 1
# Pascal Case
MyVariablename = 2
#Snake Case
my_variable_name = 3

# Single and Double Quotes & Case Sensitivity
a = 5
A = "Hello, 'A' Variable!" #A will not overwrite a
print(a)
print(A)

# Assigning Multiple Values
x, y, z = "Red", "Blue", "Orange"
print(x)
print(y)
print(z)

# Unpack a Collection
colors = ["Red", "Blue", "Orange"]
x, y, z = colors
print(x)
print(y)
print(z)

# Output Variables
x = "Python Output"
print(x) # print() is often used to output variables

# You can output multiple variables, seprated by a comma
x = "Python"
y = "Output"
print(x, y) # This will print: Python Output

# or
x = "Python"
y = "Output"
print(x + " " + y) # This will print: Python Output

# For Numerical Values
x = 5
y = 10
print(x + y) # This will print: 15

# It won't work with strings though
# x = "5"
# y = "Python"
# print(x + y) # This will cause an error: TypeError: can only concatenate str (not "int") to str

# What it should look like
x = "5"
y = "Python"
print(x + " " + y) # This will print: 5 Python

# Ending
exit()

