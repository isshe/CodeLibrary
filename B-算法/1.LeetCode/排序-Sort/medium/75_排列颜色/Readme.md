题目地址：https://leetcode.com/problems/sort-colors/  
题目描述：有3种颜色red,white,blue分别用0，1，2表示。排序一个颜色数组，不可用库函数之类。
思路1：遍历两遍
1. 遍历第一遍一遍，记录各种颜色的数量。
2. 重新填充数组。

思路2：遍历一遍
1. left和rihgt分别指向0，和n-1的元素。
2. 遍历时，[i] == 0, 则和[left]换。[i]==2时和[rihgt]换并i--[交换后还要重新比较一遍]
