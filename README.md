# chinese.h
Chinese expression C header

```c
#include "chinese.h"

无返回 misc();

noreturn 整数 main(整数 argc, 字符 数组(指向(argv))) 定义为
  打印 参数 "你好世界" 调用 然后
  调用方法(misc) 然后 退出程序(0);
结束

函数 misc() 定义为
  打印 参数 "%s", 源代码文件 调用 然后
  无限循环 做
    打印 参数 "%c", 调用方法(获取字符) 调用 然后
  完成
结束
```
