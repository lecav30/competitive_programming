Difficulty: 1214

Attempts: 1

https://www.codechef.com/problems/TRANCHAIN

Explanation:

The statement rules are:
- Blood type A donors can donate to recipients with blood types A and AB.
- Blood type B donors can donate to recipients with blood types B and AB.
- Blood type AB donors can donate to recipients with blood type AB only.
- Blood type O donors can donate to recipients with blood types A, B, AB and O.

So we can notice that in the chain we need to make the AB blood type always go to end,
because people with that type of blood can't donate anybody. Instead, people with O blood
type will go to begin because they can donate everyone. Thus, people in the middle will be
people with A or B blood type, most specifically the most amount of people. In other words,
it's just a count problem.
