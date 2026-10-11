# Problem Statement

Recently, K1o0n bought himself a new expensive printer, which is distinguished by its memory, that is, it may not print immediately. Yesterday, while he was away from his new purchase, his friends used the printer.

There are 𝑛
 documents numbered from 1
 to 𝑛
. Initially, the printer memory is empty. The friends sequentially performed 𝑛
 commands on the printer, where the 𝑖
-th command can be one of:

'1'  — scanning. Document 𝑖
 is sent to the device memory and is placed on top of everything already there.

'2'  — printing from memory. If the memory is not empty, the device prints the topmost document in memory and removes it from there. Otherwise, the device prints document 𝑖
.

'3'  — quick print. The device prints document 𝑖
.
Today, the friends came to K1o0n with a complaint — not all documents were printed. Help K1o0n find the indices of all documents that were not printed.

# Input Format

The first line contains an integer 𝑡
 (1 ≤ 𝑡 ≤ 10^4) — the number of testcases.

The first line of each testcase contains an integer 𝑛
 (1 ≤ 𝑛 ≤ 2⋅10^5
) — the number of documents.

The second line of each testcase contains a string 𝑠
 of length 𝑛
, consisting of the characters '1', '2' and '3' — the friends' commands.

It is guaranteed that the sum of 𝑛
 over all testcases does not exceed 2⋅10^5
.

# Output Format

For each testcase, output two lines.

In the first line — the number 𝑘
 of documents that were not printed.

In the second line — their numbers in increasing order, separated by spaces. If 𝑘=0
, the second line is empty.


