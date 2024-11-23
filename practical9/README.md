# Practical 9
This folder contains the information about the Practical 9

### Problem statement and steps to follow
Magic-Square problem. 
A square is a defined as a square matrix with integer elements.
1. Implement functionisMagicSquarein filemagicsquare.h/magicsquare.fh to check whether a square is magic. The function takes the matrix and checks whether every row, column and main diagonals sum to the same value M.
2. Also implement the main function in filemain.c/main.f90to receive the matrix.
3. Read the matrix in from a filemagicsquare.txtandnotmagicsquare.txt. Note that you will need to read in the size no f the matrix first, before reading in the elements. You can arrange the input how you want in the file, as long as it is read in correctly.
4. Check to see if it is magic

### Compile
* gcc main_stub.c -o main_stubC

### Execute1
* ./main_stubC

### Output2:

Enter file name: magic.txt No. lines, 3 M = 15 This is magic!

### Execute2
./main_stubC

### Output2:

Enter file name: notmagic.txt No. lines, 3 M = 15 Row 1 does not sum to 15 (row sum = 6). This is not magic