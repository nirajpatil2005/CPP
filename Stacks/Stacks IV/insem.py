s = 'hello world'

s1=s[ : :-1]
print(s1)
alphabet = "google"
index = 0
print(f"In the string '{alphabet}'")
for i in alphabet:
   print(f"Character '{i}' has an index value of {index}")
   index = index + 1
   
s = input('Enter some text: ')
doubled_s = ''
for c in s:
  doubled_s = doubled_s + c*2