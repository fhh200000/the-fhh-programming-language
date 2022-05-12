# the-fhh-programming-language
A young, simple and (sometimes) naïve programming language for fun.
一个Too young, too simple, sometimes naive的乐子编程语言。
## Demo
```
$load io
subroutine a
{
    b <== 3;
    d <== @b;
    e <== @d;
    @@e <== 5;
    f <== [1,23,4,5,6,7,8] -> int;
    v <== c + b -> int;
    return v;
} (v,c) -> int;

subroutine entry
{
    i <== getchar();
    j <== getchar();
    a(i,j);
    print(i,j);
    return 0;
} (argc,argv) -> int;
```
