A sequence
==========

Giving a positive integer k (3<=k<=15), we can construct an increasing sequence by all powers of k
and the sums of different powers of k. For example, in the case of k = 3, the sequence is: 1, 3, 4, 9, 10, 12, 13, ...
(in fact, the sequence is : 3^0, 3^1, 3^0+3^1, 3^2, 3^0+3^2, 3^1+3^2, 3^0+3^1+3^2, ...)
Please get the value of the n-th item of the sequence.

[input file]
There is only 1 line in the input file sequence.in with two positive integers, seperated by a space:
k N
(The meanings of k, N are consistent with the above description, and 3<=k<=15, 10<=N<=1000).

[output file]
The result is inside the output file.

[input sample]

3 100

[output sample]

891

```
g++ --std=c++11 power_sequence.cpp
./a.out
```
