queue=[int(i) for i in input().split()]
queue.sort()
head=int(input("Enter head"))
l=int(input("total length"))
print(queue)
index=0
for i in range(len(queue)):
    if(head>queue[i]):
        index=i
    
count=0
for i in range(index+1,len(queue)):
    count+=queue[i]-head
    head=queue[i]
    print(head,count)
count+=l-head
head=l
print(head,count)
count+=head-0
head=0
print(head,count)
for i in range(0,index+1):
    count+=queue[i]-head
    head=queue[i]
    print(head,count)

print("Seek Time ",count)

98 183 41 122 14 124 65 67
Enter head50
total length199
[14, 41, 65, 67, 98, 122, 124, 183]
65 15
67 17
98 48
122 72
124 74
183 133
199 149
0 348
14 362
41 389
Seek Time  389