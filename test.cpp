#include <iostream>
using namespace std;

void output(){
	puts("Hello World!");
	cout << "使用namespace\n";
	std::cout << "不使用namespace\n";
}

//直三角形
void demo_one(){
	for(int i=1; i<=10; ++i){
		for(int j=1; j<=i; ++j)
			cout<<"M";
		cout<<endl;
	}
}

//等腰三角形
void demo_two(){
	for(int i=1; i<=10; ++i){
		for(int j=1; j<=10-i; ++j)
			cout<<" ";
		for(char ch='A'; ch<'A'+2*i-1; ++ch)
			cout<<ch;
		cout<<"\n";
	}
}

// 'switch/case'中如果不加'break'则会继续执行下面的语句
void switch_demo(char v){
	char grade = v;
	switch(grade){
		case 'D': cout<<"60---69\n"; break;
		case 'C': cout<<"70---79\n"; break;
		case 'B': cout<<"80---89\n"; 
		case 'A': cout<<"90---100\n"; 
	}
}

//有参数的三个常用流状态
//注：只有第一次使用有效
//with(int)       设置显示的宽度
//fill(char)      设置填充字符
//precision(int)  设置有效位数或精度
void cout_with_fill(){
	cout.width(10);
	cout.fill('s');
	cout<<"first"<<"second";
}

// 常量和变量
void const_variable(){
	int a, sum; //变量
	a = 1;
	const int b = 2; //常量
	a = 3;
	// b = 4;  //常量不能被改变会报错
	sum = a + b;
	cout<<"sum is "<<sum<<"\n";
}

// int main(){
	// output();   
	// demo_one(); //直三角形
	// demo_two(); //等腰三角形
	// switch_demo('D');//'switch/case'中如果不加'break'则会继续执行下面的语句
	// switch_demo('B');
	// cout_with_fill();
	// const_variable();
// }


//*********************************************************


//静态变量和动态变量的区别：
//静态变量，只是在编译时分配空间并初始化一次，离开函数后仍然存在
//动态变量，每次进入函数时都需要分配空间，离开函数后则不存在了
int fac(int n){
   // static int f = 1; //静态变量
   int f = 1;    //动态变量
   f = f * n;
   return(f) ;  
}
int main(){ 
   int i;
   for(i=1; i<=5; i++) {
       cout<<fac(i) << '\n' ;
   }
}


// 枚举类型
// int main(){
//    enum  weekday { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
//    weekday day1, day2;
//    // cin >> day2;  // 此行错
//    cout << Sun << '\t' << Sat << '\n';
//    // cout << Sun << '\t' << Sat << endl; //同上
//    day1 = Tue;
//    day2 = Fri;
//    cout << day1 << '\t' << day2 << '\n';
// }

































