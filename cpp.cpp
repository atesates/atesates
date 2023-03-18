#include <iostream>
#include <string>

namespace Test
{
    struct Foo
    {
        static std::string DoSomething(int i, std::string s)
        {
           return __func__ ; // Output: DoSomething
        }
    };
}

void bar()
{
    std::cout << "Mina!" << std::endl;

}
  class Myclass{
    public:
    Myclass() = default;
    // Myclass(){
    //   std::cout << "ctor this: " << this << std::endl;

    // };
    ~Myclass(){
      std::cout << "dtor this: " << this << std::endl;

    }
        int a;
        bool flag;
    };
void foo()
{
    std::cout << "Leylaaa!" << std::endl;    
    std::cout << "Sema!" << std::endl;    
}
int main()
{
    std::cout << "Ates!" << std::endl;
    std::cout << "Semaaaa!" << std::endl;
    std::cout << "Semaaa!" << std::endl;
    foo();
   

    std::cout << "Mina!" << std::endl;
    std::cout << "Mina!" << std::endl;
    std::cout << "Mina!" << std::endl;

    bar();


    //Myclass myclass;
    Myclass myclass{};
    //myclass.a = 3;
    std::cout << "myclass.a= " << myclass.a << std::endl;
    std::cout << "myclass.flag= " << myclass.flag << std::endl;
 

    std::string s = Test::Foo::DoSomething(42, "Hello");
   if("DoSomething"==Test::Foo::DoSomething(42, "Hello"))
    std::cout << "sq= " << s << std::endl;

}

class YourClass{
    private:
    int m_x {};
};