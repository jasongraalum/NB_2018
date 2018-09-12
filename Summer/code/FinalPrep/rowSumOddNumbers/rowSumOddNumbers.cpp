// Copyright (c) 2018 Jason Graalum
//
// rowSumOddNumbers
//
// function that returns the sum of the nth row of
// odd numbers from a number pyramid

int rowSumOddNumbers1(int row)
{
    int sum = 0;
    int first_odd = (row-1) * row + 1;
    for(int i = 0; i < row; i++)
    {
        sum += first_odd + (i*2);
    }

    return sum;
}

int rowSumOddNumbers(int row)
{
    int sum = row*row*row;

    return sum;
}

