这是一道十分值得做的题目。

题目：输入一个字符串，转换成整数。

思路：
1. 处理正负数情况。 '+' '-'
2. 处理空格。 ' '（+-和数字中间不能有空格，有的话返回0）
3. 处理溢出的情况。当溢出的时候，等于int的最大值或int的最小值
4. 处理数字前面的 0。 注意：+011， 011等（多个0觉得返回0比较合适，这个面试的时候，问清楚）
5. 当遇到类似"12a34"这种，返回的是12.a和a后面的都不要。（非数字时停止转换）


