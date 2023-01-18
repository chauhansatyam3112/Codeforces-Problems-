import sys
import math
hellonewyear=sys.stdin.readline


for _ in range(int (hellonewyear())):
    helloworld,helloworld1=map(int,hellonewyear().split())
    abra_cadabra=[]
    for i in range(helloworld//2):
        abra_cadabra.append(helloworld-i);abra_cadabra.append(i+1)
    if helloworld%2==0:print(*abra_cadabra)   
    else:abra_cadabra.append((helloworld//2)+1);print(*abra_cadabra) 