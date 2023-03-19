import os
import sys
from io import BytesIO, IOBase
if(os.path.exists('input.txt')):
    sys.stdin = open("input.txt","r")
    sys.stdout = open("output.txt","w")
    
x = input()
print("10asasdasd")
print(x)