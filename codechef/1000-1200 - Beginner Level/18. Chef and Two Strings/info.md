Difficulty: 1036

Attempts: 1

https://www.codechef.com/problems/CHEFSTLT

Explanation:

We add a unit to the variable "max" as long as at least one of the characters in one of
the strings is "?" because if we don't know the Latin letter that was in that position,
we can assume that that letter could be any Latin letter, in other words, different
Latin letters. On the other hand, in the case that we know the two letters of the strings
we need to know if those letters are different, because only in that case we can add a
unit to both variables, "min" and "max".
