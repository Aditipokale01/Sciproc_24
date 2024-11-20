
# Practical 3
This folder contains information and details about practical 3

## Problem Statement and steps to follow
Find the integral off(x) =tan(x)from 0→π/3. 
Compare with the actual result:∫π/30tan(x)dx=log(2).
1. So a=0 and b=π/3.
2. Get the first part of the sum tan(0) +tan(π/3). For C use tan which is part of the maths library.
3. Create a loop that generates 11 equidistant points between 0→π/3. Thus N=12 and x0=a=0 and x12=b=π/3.
4. Change the loop so that you are adding 2tan(xi)for the each of the 11 points.
5. Add that sum to that of the end points and multiply by b−a/2N
6. Compare this against log(2)you should not be too far out

### Compile:
gcc trap.c -o trapc -lm

### Execute:
./trapc

### Output:
The value of sum before the loop is: 1.732051
I am even and here's the value of sum: 1.907028
I am even and here's the value of sum: 2.795581
I am even and here's the value of sum: 4.456137
I am even and here's the value of sum: 7.011252
I am even and here's the value of sum: 10.689451
I am even and here's the value of sum: 15.929254
The value of sum after the loop is: 15.929254
The final value of the sum is: 0.695045
The actual value is  0.693147
abs_diff = 0.001898
 rel_diff = 0.002738


