Keep check that whether it will handle duplicate numbers which if make unordered_map in this can make some test cases to fail if not taken considered.
​
- Can use simple brute force for this
- can use unordered_map for this to not iterating to whole array all the time
- can use two pointer approach but sorting operation would take O(nlogn) time that can't be used if the aray is sorted then this will be best.
​
**We can return values directly to vector like return {1,2}, we don't need to create vector int that case.
**