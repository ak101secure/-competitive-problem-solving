
def gcd(a,b):

    minvalue = min(a,b)

    while(minvalue>0):
        if(a%minvalue ==0) and (b%minvalue ==0):
            return minvalue
        
        minvalue = minvalue - 1 

    else:
        return -1 

if __name__ =="__main__":

    print(gcd(36,60))
