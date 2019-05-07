#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//声明字符串打印函数
__attribute__((dipperlib_wasm_import))
void prints( const char* cstr );

#ifdef __cplusplus
}
#endif