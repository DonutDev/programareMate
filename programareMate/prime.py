# Program verificare nr prim/compus

num = int(input("Enter number: "))

# nr prime sunt mai mari decat 1
if num > 1:
   # verificare
   for i in range(2,num):
       if (num % i) == 0:
           print(num,"is not a prime number")
           print(i,"times",num//i,"is",num)
           break
   else:
       print(num,"is a prime number")
       

else:
   print(num,"is not a prime number") 
