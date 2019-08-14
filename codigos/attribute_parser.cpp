/** 
 * Problem from HR: 
 * We have defined our own markup language HRML. 
 * In HRML, each element consists of a starting and ending tag, 
 * and there are attributes associated with each tag. 
 * Only starting tags can have attributes. 
 * We can call an attribute by referencing the tag, 
 * followed by a tilde, '~' and the name of the attribute. 
 * The tags may also be nested.
 * 
 * The opening tags follow the format:
 * <tag-name attribute1-name = "value1" attribute2-name = "value2" ...>
 * The closing tags follow the format:
 * </tag-name>
 * 
 * For example:  
 * <tag1 value = "HelloWorld">
 * <tag2 name = "Name1">
 * </tag2>
 * </tag1>
 * The attributes are referenced as:
 * tag1~value 
 * tag1.tag2~name
 * 
 * You are given the source code in HRML format consisting of $N$ lines. 
 * You have to answer $Q$ queries. 
 * Each query asks you to print the value of the attribute specified. 
 * Print "Not Found!" if there isn't any such attribute.
 * 
 * Input format:
 * The first line consists of two space separated integers, $N$ and $Q$. 
 * $N$ specifies the number of lines in the HRML source program. 
 * $Q$ specifies the number of queries.
 * 
 * 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
