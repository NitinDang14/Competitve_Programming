# your code goes here
def fastPowerBitmask(a,b):
	res=1
	while(b>0):
		last_bit=(b&1)
		if(last_bit):
			res*=a
		a*=a
		b=b>>1
	return res

print(fastPowerBitmask(2,5))
	
