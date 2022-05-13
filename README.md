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
## Grammar
1.use ```subroutine{}``` to wrap functions.  
  使用 ```subroutine{}``` 包装函数。  
2.use ```entry(argc,argv)->int``` to specify entry(just like ```int main(int argc,char** argv)``` in C).  
  使用 ```entry(argc,argv)->int``` 定义程序入口点。  
3.use ```<==``` to set value.  
  使用 ```<==``` 赋值。  
4.use ```->``` to specify function and variable types explicitly. Also it would act like a type cast.  
  使用 ```->``` 明确指定变量与函数类型，同时也可用于强制类型转换。   
5.use ```$``` to import files.  
  使用 ```$``` 导入文件。  
6.use ```@``` to specify pointers and get values from them.  
  使用 ```@``` 定义指针并从中取值。  
