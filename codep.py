import random
# import numpy

# # help(round)
# def something(w,e,r):
#     # print(w,e,r)
#     return w
    
# something(2,3,4)
# x=69.33434
# print(x.as_integer_ratio())

# numr,denr= x.as_integer_ratio()

# planets = ["mercury",'venus','earth','mars','jupitor','saturn','uranus','neptune']

# planet5 = [planet.upper()+"!" for planet in planets if len(planet)>6]
# print([32 for planet in planet5])
# print(planet5)
# print(numr)
# print(denr)
# print([planet<4 for planet in range(10)])

# print([char+'!' for char in planet5[0]])

# # Lists are immutable.

# print(planet5[0].startswith('MER'))
# print(dir(numpy.random)[-15:])

# rolls = numpy.random.randint(low=69,high=420,size=30)
# print(rolls)
# print(rolls+10)

inv = 1000

for i in range(1,27):
    intr = random.uniform(1.05,1.75)
    # intr = 1.05
    inv = inv*intr
    print("-"*25)
    print("Week: ",i)
    print("Interest: ",intr)
    print("Revenue: ",inv)
    print("-"*25)