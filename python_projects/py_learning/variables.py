# Global Varibales
x = "Global X"

def myfunc():
    print("x inside function:" + x) 

myfunc() # This will print the global variable x

# Local Varibles
y = "Local Y" 

def myfunc2():
    y = "Local Y inside function"
    print("y inside function:" + y)

myfunc2()  # This will print the local variable y

print ("y outside function:" + y)  # This will print the global variable y
# Note: The local variable y inside myfunc2 does not affect the global variable y

# Global Keyword
def myfunc3():
    global z
    z = "Global Z inside function"

myfunc()
print("z outside function:" + z)  # This will print the global variable z

# To change values of a global value inside a function
xy = "Global XY"

def myfunc4():
    global xy
    xy = "Changed Global XY inside function"

myfunc4()

print("xy outside function:" + xy)  # This will print the changed global variable xy
# Note: The global keyword allows you to modify the global variable inside a function

