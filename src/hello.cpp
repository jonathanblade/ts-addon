#include <node.h>
#include <iostream>

using namespace std;
using namespace v8;

void say_hello(const FunctionCallbackInfo<Value>& args) {
  cout << "Hello from C++!" << endl;
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "sayHello", say_hello);
}

NODE_MODULE(hello_addon, init);
