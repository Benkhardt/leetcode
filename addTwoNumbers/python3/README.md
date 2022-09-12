# addTwoNumbers - 'C'
<br/>

### Description:

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

### Example:

<img align="left" src="https://user-images.githubusercontent.com/67570025/186285316-49e4dab7-3830-4639-aeab-960424fec9a9.png">

|what|example|
| ----- | ----- |
|**Input:**|`L1 = [2,4,3], L2 = [5,6,4]`|
|**Output:**|`[7,0,8]`|
|**Explanation:**|`342 + 465 = 807`|

Single linked lists (L1 & L2) from top to bottom in reverse order -> L1 as int would be *342* , L2 as int would be *465*.
<br/><br/><br/><br/><br/><br/>
### Usage:

|Short|cmd|
| ----- | ----- |
|1. Clone repo: |`git clone https://github.com/Benkhardt/leetcode.git`|
|2. Compile: |`make` `make clean` `make fclean` `make re` `make debug`|
|3. Execute binary: |`./addTwo <arg1> <arg2>`|

### Additional Information:
<br/>

I don't know the exact limits but it should be: <br/>
**Range:** UINT_MIN < \[arg1, arg2\] < UINT_MAX (<limits.h>)

Not all functions are necessarry to accomplish the challenge. Some of them are just to debug:
- `t_list         *itol(unsigned long long sum, t_list *start);` *\*start should be NULL...*
- `void			      print_lst(t_list *lst);`
- `void			      free_lst(t_list *lst);` -> free() from top to bottom 

