
namespace {
  // wrapp CB_S
  std::function<void(char*)> _wrapper_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    return [cpp_function](char* c_str){
      cpp_function(c_str);
    };
  }
  // wrapp CB_I_S
  std::function<void(int,char*)> _wrapper_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
  {
    return [cpp_function](int code ,char* c_str)->void {
      cpp_function(code,c_str);
    };
  }
  // wrapp CB_S_I_S_S
  std::function<void(char*,int,char*,char*)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
  {
    return [cpp_function](char* operationID,int code,char* c_str,char* c_str2) -> void {
      cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2));
    };
  }
  // wrapp CB_S_I_S_S_I
  std::function<void(char*,int,char*,char*,int)> _wrapper_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
  {
    return [cpp_function](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
      cpp_function(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
    };
  }

  template<typename Func> 
  struct CallOnceWrapper {
    std::function<Func> f;
  };
  // wrapp function to onetime
  // wrapp CB_S to CallOnce
  std::function<void(char*)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&)>& cpp_function) {
    CallOnceWrapper* callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](char* c_str){
      callonceWrapper->f(c_str);
      delete callonceWrapper;
    };
  }
  // wrapp CB_I_S to CallOnce
  std::function<void(int,char*)> _wrapper_callonce_cpp_function(const std::function<void(int,const std::string&)>& cpp_function)
  {
    CallOnceWrapper callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](int code ,char* c_str)->void {
      callonceWrapper->f(code,c_str);
      delete callonceWrapper;
    };
  }
  // wrapp CB_S_I_S_S to CallOnce
  std::function<void(char*,int,char*,char*)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&)>& cpp_function)
  {
    CallOnceWrapper callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](char* operationID,int code,char* c_str,char* c_str2) -> void {
      callonceWrapper->f(std::string(operationID),code,std::string(c_str),std::string(c_str2));
      delete callonceWrapper;
    };
  }
  // wrapp CB_S_I_S_S_I to CallOnce
  std::function<void(char*,int,char*,char*,int)> _wrapper_callonce_cpp_function(const std::function<void(const std::string&,int,const std::string&,const std::string&,int)>& cpp_function)
  {
    CallOnceWrapper callonceWrapper =new CallOnceWrapper();
    callonceWrapper->f=_wrapper_cpp_function(cpp_function);
    return [callonceWrapper](char* operationID,int code,char* c_str,char* c_str2,int c_int) -> void {
      callonceWrapper->f(std::string(operationID),code,std::string(c_str),std::string(c_str2),c_int);
      delete callonceWrapper;
    };
  }
}

