Difficulty: 1201

Attempts: 1

https://www.codechef.com/problems/APPENDOR

Explanation:

The stament says you will have an array of integers and you going to realize the bitwise
or operation over all members of the array. So the first step is request all the numbers
and realize the bitwise or operation. We can store the result in a new variable. Later we
will have the following expression:

$n | x = y$

Where:

$n \rightarrow$ is the result of realize the bitwise or operation over all members of the
array.
$y \rightarrow$ is the number which the statement gives you.
$x \rightarrow$ is the number which you use to get $y$ towards the bitwise or operation.

So, for this problem be easier we can assume:

$n = 4$ - $x = ?$ - $y = 6$

Now we will transform the integers to its binary form:

$100 | x = 110$

How we know, the bitwise or operation is like a addition, so in any case we had a $1$ the
result is $1$. For example:

$10101 | 11100 = 11101$

So in the case we assume, we only need to check the binary digit which is different and
transform in $1$.

In the above case the $x$ going to be $10$, because we need the minimun.

We can create a function to convert the numbers to its binary form or something like that.
But in this case we will support over the bitwise xor operation, because this function
only modificate the different values and transform in $1$.

To the conditions when doesn't exist an answer:

1. Doesn't exist an possible answer when the $n$ is bigger than the $y$, because you would
   have a bit extra more $y$
2. Doesn't exist an possible asnwer ehen $n$ has a bit extra than $y$, to check this you
   can realize the following conditional:

$(y | n) != y$

If it's doesn't equals that means $n$ have an extra bit. In other words $n$ have an $1$
in some position which $y$ have an $1$ and for the bitwise or operation it's impossible
that $1$ converts in $0$.

[Bitwise OR by MDB](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_OR)

[Bitwise XOR by MDB](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_XOR)
