def bubSort(s):
    k=len(s)
    for x in range(0,k):
            for y in range(0,k-1):
                    if(s[y]>s[y+1]):
                            temp = s[y+1]
                            s[y+1]=s[y]
                            s[y]=temp
    print s