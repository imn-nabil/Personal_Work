Q1. Consider the following code:

#include <stdio.h>
void main()
{
    extern int i;
    i = 20;
    printf("%d", sizeof(i));
}
What would be the output of the above code?
A. 2
B. 4
C. Would vary from compiler to compiler.
D. Error.


Output: D

Explanation:
Here, the compiler generates the error as extern int i is a declaration and not a definition.

Q2. Consider the following code:

#include <stdio.h>
void main()
{
    extern int fun(float);
    int a;
    a = fun(3.14);
    printf("%d", a);
}
int fun(aa) float aa;
{
    return ((int)aa);
}
What would be the output of the above code?
A. Error.
B. 3.14
C. 0
D. 3


Output: A

Explanation: The error occurs because we have mixed the ANSI prototype with K & R style of function definition. When we use ANSI prototype for a function and pass a float to the function it is promoted to a double. When the function accepts the double into a float a type mismatch occurs hence the error.


Q3. Consider the following code:
#include <stdio.h>
void main()
{
    struct geeks {
        char name;
        int age;
        float sal;
    } struct geeks g = { "GEEKS" };
    printf("%d %f", g.age, g.sal);
}
What would be the output of the above code?
A. Garbage Value
B. 0 0.000000
C. Would vary from compiler to compiler.
D. Error.


Output: B
  0 0.000000
Explanation:
When an automatic structure is partially initialized, the remaining elements of the structure are initialized to 0.


Q4. Consider the following code:
#include <stdio.h>
void main()
{
    int x = 10, y = 20, z = 5, i;
    i = x < y < z;
    printf("%d", i);
}
What would be the output of the above code?
A. 5
B. 0
C. 1
D. 10


Output: C
  1
Explanation:
Since x<y turns out to be true it is replaced by 1. This 1 is then compared with 5. Since this condition also turns out to be true it is replaced by 1. This 1 is then assigned to i


Q5. Consider the following code:
 #include <stdio.h>
void main()
{
    enum status { pass,
                  fail,
                  atkt };
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = fail;
    stud3 = atkt;
    printf("%d %d %d", stud1, stud2, stud3);
}
What would be the output of the above code?
A. 1 2 3
B. pass fail atkt
C. 1 2 0
D. 0 1 2


Output: D
0 1 2
Explanation:
Enum elements always take values like 0, 1, 2, 3, …. etc


