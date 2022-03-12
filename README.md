# Data_Structures
The basic data structures with an implemention on C++
____
**QUEUE**\
So, a queue is a datastructure that following the FIFO (first input first output) conception\.\
This conception implies that the first added element will be go out of the queue first, the second one will be second etc\.\
In our case for an impementation a queue let's consider next model\:\
1. We have a continuous finite memory (for example 5 memory cells), as you can guess we will use an array\:\
![image](https://user-images.githubusercontent.com/79082114/158003896-75382697-876a-457c-a9b7-ed21b8c95fb9.png)
2. In the queue there are a head (top element) and a tail (rear element). When the queue is an empty, head and tail have the same index = 0\.
![image](https://user-images.githubusercontent.com/79082114/158004054-c04847c9-046a-46ca-813d-549b0ccb934d.png)\
***Addition of the element***\
Firstly, we need to add the element in the queue using the tail index because as filling the queue, the elements will be go on.
![image](https://user-images.githubusercontent.com/79082114/158004271-3ef836c8-0af2-416c-ad8a-7904e06c5253.png)\
Further we need to increment the tail index.
![image](https://user-images.githubusercontent.com/79082114/158004323-8f2ba3d5-6d43-4b5a-a452-0f699882d0c3.png)





