# Cplusplus-solutions-to-two-problems

<strong>Mixture of Normal and Uniform Distributions </strong><br>
Suppose x1,...,xn are i.i.d. samples from a mixture of a Normal distribution and a uniform dis- tribution. That is, xi ∼ N(μ,σ2) with probability 0 < p < 1 and xi ∼ U(a,b) with probability 1−p. Suppose that we know μ is an integer and σ = 1, but we know nothing about p, a and b. Your task is to write a C++ program mixNormUnif.cpp which, given x1, . . . , xn, estimates and prints μ. Since μ should always be an integer, do NOT print in floating point format such as 1.0. Your program should get its input from cin. The input is a sequence of n real numbers x1, . . . , xn. Example runs of valid input arguments are (the first line is the command line, the second line is the input and the third line is the expected output of your program). <br>
user@host:~/Private/biostat615$ ./mixNormUnif 1223 <br>
2 <br>
user@host:~/Private/biostat615$ ./mixNormUnif 0 1 2 3 4 5 6 7 9 9.5 10 10.5 11 <br>
10 <br>
<br>
<strong> Walk and See  </strong> <br>
Suppose you live in a 2-D world, and one day you walk from one place with coordinate (0,0) to another place with coordinate (0, 1), along the Y-axis. There is painting on a wall from coordinate (1, 0) to coordinate (1, 1) which you can enjoy while you walk. However, there are many other walls between you and the painting which may block your view. You task is to write a C++ program walkSee.cpp which, given the locations of all the other walls, computes and prints the largest possible proportion of the painting you may see at a single time point during your walk, with three digits of precision after the decimal point (round up if the fourth digit after the decimal point is greater than or equal to 5). Your program should get its input from cin. The input is a sequence of 4n real numbers in the order of x1, y1, z1, w1, . . . , xn, yn, zn, wn, where the i-th wall spans the line segment from (xi, yi) to (zi, wi). All the walls have very little thickness which can be ignored. You may assume that 0 < xi, zi ≤ 1 and 0 ≤ yi, wi ≤ 1. Walls may intersect each other. Example runs of valid input arguments are (the first line is the command line, the second line is the input and the third line is the expected output of your program).<br>
user@host:~/Private/biostat615$ ./walkSee 0.5 0 0.5 1 <br>
0.000 <br>
user@host:~/Private/biostat615$ ./walkSee 0.5 0 0.5 0.75 <br>
0.500 <br>
