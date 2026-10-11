# Observations and Solution

- This is a simple stack implementation based problem.
- Since we are given a string s to iterate through, we scan it from left to right.
- A check vector is maintained to verify the document bring printed or not.
- If a 1 is encountered in the string, the current index 'i' is pushed onto the stack.
- If a 2 is encountered, we check if the stack is empty or not. If it IS empty, we print document 'i' and flip the check value accordingly. Otherwise, we print the document at the top of the stack and flip the check for that document.
- After iterating through the vector once, we iterate through the check vector and count the number of documents which were not printed.
- Then we print the count of the documents which were not printed along with their document numbers.

# Complexity

- O(n) per test case