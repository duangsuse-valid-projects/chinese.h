/**********

  Chinese Expression C Header

   Recommended to use Clang preprocessor
   Use HanPP before processing with GCC

    version: 0.1.0
    author: duangsuse
    license: CC-0

 **********/

#pragma once

#pragma clang diagnostic ignored "-Wunicode-homoglyph"

#ifndef CHINESE_H
# define CHINESE_H
#endif

#ifdef __cplusplus
# ifndef CXX_EXPERIMENTAL
#   warning "chinese.h has not *fully support* C++ language now, DO NOT send issue if something went wrong."
# endif
#endif

#ifndef __GNUC__
# warning "chinese.h has not *fully support* compilers without GNUC extensions."
#endif

#if defined(__OBJC__) || defined(__ASSEMBLER__) || defined(__GFORTRAN__)
# error "chinese.h does not support assembler or Objective-C, nor Fortran."
#endif

#ifdef _MSC_VER
# warning "chinese.h does not support MSVC or likely Microsoft compilers."
#endif

/* Customize */
#ifndef CHINESE_CUSTOMIZE
# define KEYWORD_CN 1
# define SYNTAX_EXT 1
# define CXX_CN     1
# define DUMMY_VAL  1
# define STDFUNC_CN 1
# define CPRELUDE   0
# define TYPEALIAS  1
# define STDVAL     1
#endif

/* CN Keywords */
#ifdef KEYWORD_CN
# define 自动类型 auto
# define 自动的 auto
# define 打断 break
# define 中断循环 break
# define 判定 switch (
# define 选项分支 switch (
# define 选择 switch (
# define 常量 const
# define 常数 const
# define 继续 continue
# define 重启循环 continue
# define 默认情况 default
# define 首先执行 do
# define 否则 else
# define 枚举 enum
# define 导入 extern
# define 外部对象 extern
# define 循环 for (
# define 对于 for (
# define 转到 goto
# define 跳转到 goto
# define 如果 if (
# define 若 if (
# define 内联 inline
# define 且内联 inline
# define 内联的 inline
# define 寄存器变量 register
# define 严格 __restrict__
# define 严格的 __restrict__
# define 受限的 __restrict__
# define 返回 return
# define 返回值为 return
# define 返回引用 return
# define 有符号的 signed
# define 有符 signed
# define 无符号的 unsigned
# define 无符 unsigned
# define 大小 sizeof
# define 结构长度 sizeof
# define 静态 static
# define 静态的 static
# define 结构体 struct
# define 配对 case
# define 若为 case
# define 类型定义 typedef
# define 定义类型 typedef
# define 将对象 typedef
# define 联合体 union
# define 联合结构 union
# define 混合结构 union
# define 易失的 volatile
# define 易变的 volatile
# define 且易变的 volatile
# define 且易失的 volatile
# define 当 while (
#endif

/* Syntax extensions */
#ifdef SYNTAX_EXT
# define restrict __restrict__
# define typeof __typeof__
# define boolean _Bool
# define complex _Complex

# define fn void
# define func auto

# define in :
# define 列表项 :

# define match switch
# define 匹配 switch

# define let auto
# define 设定变量 auto
# define 成为 =
# define 成 =
# define 重置为 =

# define andthen ?
# define ifnot :

# define unless(...) \
  if (!(__VA_ARGS__))

# define 除非(...) \
  if (!(__VA_ARGS__))

# define false 0
# define true 1

# define 真 1
# define 假 0

# define 布尔 _Bool

# define loop for (;;)
# define 无限循环 for (;;)

# define defer(...) \
  *(__VA_ARGS__)

# define refer(...) \
  &(__VA_ARGS__)

# define ref(...) \
  &(__VA_ARGS__)

# define points(...) \
  *(__VA_ARGS__)

# define array(...) \
  __VA_ARGS__ []

# define 数组(...) \
  __VA_ARGS__ []

# define 指向(...) \
  *(__VA_ARGS__)

# define 解指针(...) \
  *(__VA_ARGS__)

# define 取址(...) \
  &(__VA_ARGS__)

# define noinline __attribute__((noinline))
# define 禁止内联的 __attribute__((noinline))

# define noreturn __attribute__((noreturn))
# define pure __attribute__((pure))
# define 纯的 __attribute__

# define tlstorage _Thread_local
# define assert_static _Static_assert
# define generic _Generic
# define atomic _Atomic

# define returns_twice __attribute__((returns_twice))
# define entray_fn __attribute__((used))
# define internal __attribute__((internal))
# define hidden __attribute__((hidden))
# define inlined __attribute__((always_inline))

# define 总是内联 __attribute__((always_inline))

# define alias_fn(alias) \
  __attribute__((weak, alias (alias)));

# define panic(message) \
  fprintf(stderr, message); \
  exit(1);

# define assembly __asm__
# define 内联汇编 __asm__

# define stdcall __stdcall
# define 微软导出 __stdcall

# define declared(value) \
  __declspec(value)

# define 自增 ++
# define 自减 --

# define 加 +
# define 减 -
# define 乘 *
# define 除以 /
# define 乘方 ^
# define expo ^
# define 除 /

# define 或者 ||
# define 并且 &&
# define 与 &
# define 并 |
# define 非 !

# define 小于 <
# define 小于或等于 <=
# define 大于 >
# define 大于或等于 >=
# define 等于 ==
# define 不等于 !=

# define 右移 >>

# define 静态转型 static_cast
# define 重定向转型 reinterpret_cast

# define 数值函数 int
#endif

/* C++ Support */
#ifdef CXX_CN
# define 类 class
# define 虚接口 virtual
# define 命名空间 namespace
# define 公开定义 public:
# define 保护定义 protected:
# define 私有定义 private:
# define 新建 new
# define 使用 using
# define 模板 template
# define 类型名 typename
# define 覆盖 override
# define 重写 override
# define 删除 delete
# define 尝试 try
# define 捕获 catch
# define 抛出 throw
# define 空指针 nullptr
# define 显示的 explicit
# define 常量表达式 constexpr
# define 最终的 final
# define 不可继承 final
# define 默认 default
# define 类型标识 typeid
# define 运算符 operator
# define 本对象 this
# define 无异常 noexcept
# define 布尔值 bool
# define 链接类型 decltype
# define 返回新对象 return new

# define 属性
# define 方法
#endif

/* Dummy Macros */
#ifdef DUMMY_VAL
# define 尾参数 ...
# define 则 :
# define 时 :
# define 为
# define 定义
# define 类型
# define 做 {
# define 那么 ) {
# define 那么就 ) {
# define 结束 }
# define 完成 }
# define 执行 ) {
# define 参数 (
# define 调用 )
# define 就 ) {
# define 这时重复 while
# define 然后 ;
# define 循环执行 ;
# define 初始化
# define 直到 ;
# define 调用方法(name) name ()
# define 死循环 for (;;) {
# define 定义为 {
# define 标签
# define 接着 ;
# define 引用的 ->
# define 的 .
# define 被写 <<
# define 左移 <<
# define 中的 ::
# define 函数 void
# define 如果不 if (!

# ifdef HANPP_USED
#  define ， ,
#  define （ (
#  define ） )
#  define 。 ;
#  define 「 {
#  define 」 }
#  define 〔 [
#  define 〕 ]
#  define 、 ,
#  define ÷ /
#  define ； ;
#  define “ "
#  define ” "
#  define ‘ '
#  define ’ '
# endif
#endif

/* Standard Functions */
#ifdef STDFUNC_CN
# define 打印 printf
# define 输出到文件 fprintf
# define 退出程序 exit
# define 获取字符 getchar
# define 扫描 scanf
# define 打印到字符串 sprintf
# define 安全打印字符串 snprintf
# define 分配内存 malloc
# define 重分配内存 realloc
# define 释放内存 free
# define 标准输出 stdout
# define 标准输入 stdin
# define 标准错误 stderr
# define 错误流 cerr
# define 输入流 cin
# define 输出流 cout
#endif

/* C Standard Header Prelude */
#ifdef CPRELUDE
# include <stdio.h>
# include <stdint.h>
# include <fcntl.h>
# include <math.h>
# include <stdlib.h>
# include <stddef.h>
#endif

/* C Type Aliases */
#ifdef TYPEALIAS
# define 字符 char
# define 字符类型 char
# define 双精 double
# define 双精浮点 double
/* 大佬轻喷，我知道不是所有机器上 double 都有一个双字长 */
# define 双字 double
# define 实数 double
# define 浮点 float
# define 浮点数 float
# define 小数 float
# define 自然数 int
# define 整形数 int
# define 整数 int
# define 数 int
# define 数字 int
# define 数值 int
# define 长值 long
# define 长数值 long
# define 短值 short
# define 短数值 short
# define 空值 void
# define 无返回 void

# define 无符号整数 unsigned int
# define 无符号字符 unsigned char
# define 字节 unsigned char
# define 无符号长数 unsigned long
# define 超长数 long long

# define 数字指针 int *

# define i32 int32_t
# define u32 uint32_t
# define i8 signed char
# define u8 unsigned char
# define i16 signed short
# define u16 unsigned short
# define size size_t
# define ptr size_t
# define str char *
# define unit void
# define reference void *
# define pointer void *

# if __WORDSIZE == 64
#  define i64 int
#  define u64 unsigned int
# else
#  define i64 long
#  define u64 unsigned long
# endif

#endif

/* Standard C Preprocessor Macros */
#ifdef STDVAL
# define 源代码文件 __FILE__
# define 源代码行号 __LINE__
# define 编译日期 __DATE__
# define 编译时间 __TIME__
# define C语言标准 __STDC__
# define CXX语言标准 __cplusplus
# define GNU扩展 __GNUC__
# define 编译器信息 __VERSION__
# define UNIX系统 __unix__
# define 位大小 __WORDSIZE
#endif

