import hashlib

file = open('dictionary.txt') 
text_file = open("dictionary.txt", "r")
lines = text_file.read().split("\n")  

x = '6da96dec2995ce9f2756f1ceb4f883b3e957f56fb5a649a6e3c02586207939be'
for line in lines: 
    Hash = hashlib.sha256(line.encode('ascii')).hexdigest()
    if(x==Hash):
        print(line)
        break

