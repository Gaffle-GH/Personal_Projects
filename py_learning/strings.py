# Strings 
# Strings are surrounded by quotes (single or double)

print("Hello World") # This is a string
print('Hello World') # This is also a string

# Quotes inside strings
print("'Hellow World'")
print('"Hello World"')
# As long they don't match the quotes surrounding the string you can use quotes

# Assinging String to a Variable
a = "Hello"
print(a) # This will print Hello

# Multiline Strings
a == """Line 1,
Line 2,
Line 3,
Line 4
"""
print(a) # This will print the multiline string

# or
a = '''Line 1,
Line 2,
Line 3,
Line 4
'''
print(a) # This will also print the multiline string

# Strings are Arrays
a = "Hello"
print(a[1]) # This will print the second character of the string, which is 'e'
# This will print the second character of the string, which is 'e'

# Looping through a String
for x in "Hello":
    print(x)  # This will print each character in the string on a new line

# String Length
a = "Hello"
print(len(a))

# Check String
a = "Hello World"
print("Hello" in a)  # This will print True if "Hello" is in the string a

# in a if statement
if "Hello" in a:
    print("Yes, 'Hello' is present in the string a")
else:
    print("No, 'Hello' is not present in the string a")

# Check String (IF NOT)
if "Hello" not in a:
    print("No, 'Hello' is not present in the string a")
else:
    print("Yes, 'Hello' is present in the string a")

# String Slicing
b = "Hello, World!"
print(b[2:5]) # This will print characters from index 2 to 4 (5 is not included)

# Slicing From the Start
b = "Hello, World!"
print(b[:5])  # This will print characters from the start to index 4

# Slicing To the End
b = "Hello, World!"
print(b[7:])  # This will print characters from index 7 to the end

# Negative Indexing
b = "Hello, World!"
print(b[-5:-2]) # This will print characters from index -5 to -3 (last 2 characters are not included)

# Modifying Strings
a = "Hello, World!"
print(a.upper())  # This will print the string in uppercase
print(a.lower())  # This will print the string in lowercase
print(a.strip())  # This will remove any whitespace at the beginning or end of the string
print(a.replace("H", "J"))  # This will replace 'H' with 'J' in the string
print(a.split(","))  # This will split the string into a list where the comma is found

# String Cooncatenation
a = "Hello"
b = "World"
c = a + " " + b  # This will concatenate the two strings with a space in between
print(c)  # This will print "Hello World"

# or 
c = a + b
print(c)  # This will print "HelloWorld"

# String Formatting
#age = 36
#txt = "My name is John, I am " + age
#print(txt)  # This will cause an error because age is an integer

# F-Strings
# To specify a string as an f-string, simply put an f in front of the string literal, and add curly brackets as placeholders for variables and other operations
age = 36
txt = f"My name is John, I am {age}"
print(txt)  # This will print "My name is John, I am 36"

# Placeholders and Modifiers
price = 59
txt = f"The price is {price} dollars"
print(txt)  # This will print "The price is 59 dollars"

# Placeholders can include a modifier to format the value
# included by adding a colong (:) followed by the legal formatting type, like .2f which points number with 2 decimals

price = 59
txt = f"The price is {price:.2f} dollars"
print(txt)  # This will print "The price is 59.00 dollars"

# Placeholders can also contain math operations
txt = f"The price is {20 * 59} dollars"
print(txt)  # This will print "The price is 1180 dollars"

# Escape Characters 
