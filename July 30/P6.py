# Aim = We are given that a ball is falling on the ground with velocity v and at each bounce its velocity decreases by half. Then find the number of bounces.
Velocity=float(input("Enter velocity of Ball:\t"))
count=0
while(Velocity>0.0001):
    count+=1
    Velocity/=2
print("Final Speed just before Ball stopped bouncing:",Velocity)
print("\nNumber of Bounces:",count)