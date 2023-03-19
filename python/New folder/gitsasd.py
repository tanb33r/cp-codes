import hashlib 
import time
# text_file = open("asdasd.txt", "r")
text_file = open("dictionary.txt", "r")
lines = text_file.read().split("\n")  

rainbow_table = {}
x = '6da96dec2995ce9f2756f1ceb4f883b3e957f56fb5a649a6e3c02586207939be' 
start = time.time()
for line in lines:     
    Hash = hashlib.sha256(line.encode('ascii')).hexdigest() 
    if(Hash == x):
        break
end = time.time()

print("required time = " + str(end-start))
 

print([code for code,hash in rainbow_table.items() if hash == x])  