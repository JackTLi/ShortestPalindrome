# ShortestPalindrome
Given a string, this will find the shortest palindrome for that string that can be achieved by appending characters only to the front.

Assume we are given a string  **s**.
This solution works by first saving a reverse of the **s** and saving it as **rs**.

Then, we construct an empty prefix **tstack** for **s**, as well as a suffix for **rs** called **tstackr**, which is just the reverse of **tstack**.

In order to fill **tstack** and **tstackr**, we construct a **pile** as a copy of rs.

While **tstack + s** is not the same as **rs + tstackr**, we will continue to push the first character of **pile** onto the end of **tstack**, and the beginning of **tstackr**.

The end result is that **tstack + s** will be the shortest palindrome of **s**.
