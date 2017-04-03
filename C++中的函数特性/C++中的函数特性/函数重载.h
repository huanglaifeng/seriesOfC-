/*
---------------------函数重载-------------------------
概念:
1、在相同作用域内，同一个函数名定义的多个函数
2、参数的个数和参数类型不同

举例：：
int getMax(int x,int y,int z){
    //to do someThing
}
double getMax(double x, double y,double z){
    //to do someThing
}

//编译器使用以下方式识别函数
//getMax_int_int_int 以这种方式来形成新的参数来区分
//getMax_double_double_double
//重载带来什么好处---计算机会帮助处理你要调用的是哪个函数，函数命名更具目的性
---------------------------------------------------------------------


--------------------内联函数---------------------------
//编译时将函数体代码和实参代替函数调用语句
//内联函数的关键字：inline
inline int max(int a,int b,int c);
int main(){

    int i = 10; int j =20; int k = 30,m;
//    m = max(i,j,k);------其实这一块的代码在编译的时候已经加载进来了
    cout << "max=" << m <<endl;
    return 0;
}

==========注意
1、inline 使用内联函数对边一起来说也只是建议性的，是否采用由编译器自己决定
2、作为内联函数，内部代码必须简单---里面不能有想for、while 循环这样复杂的逻辑结构 调用的时候，建议是使用频繁但是逻辑简单的函数更建议大家使用内联函数
3、递归函数无法使用内联的方式
*/
