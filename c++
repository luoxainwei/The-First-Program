第一个代码，当然是Hello word 了
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello Word!"<<endl;
    return 0;
}

C++中对小数点进行控制
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if(a<b)
    cout<<fixed<<setprecision(2)<<a<<" "<<b<<endl;
    else
    cout<<fixed<<setprecision(2)<<b<<" "<<a<<endl;
    return 0;
}

／**
#include <iostream>
#include <iomanip>
using namespace std;
int main( void )
{
    const double value = 12.3456789;
    cout << value << endl; // 默认以6精度，所以输出为 12.3457
    cout << setprecision(4) << value << endl; // 改成4精度，所以输出为12.35
    cout << setprecision(8) << value << endl; // 改成8精度，所以输出为12.345679
    cout << fixed << setprecision(4) << value << endl; // 加了fixed意味着是固定点方式显示，所以这里的精度指的是小数位，输出为12.3457
    cout << value << endl; // fixed和setprecision的作用还在，依然显示12.3457
    cout.unsetf( ios::fixed ); // 去掉了fixed，所以精度恢复成整个数值的有效位数，显示为12.35
    cout << value << endl;
    cout.precision( 6 ); // 恢复成原来的样子，输出为12.3457
    cout << value << endl;   
}
**／
