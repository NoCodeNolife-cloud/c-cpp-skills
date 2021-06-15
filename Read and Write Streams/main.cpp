#include <bits/stdc++.h>

using namespace std;

int main() {

//    打开“example.dat”文件进行读写
    filebuf buffer;
    ostream output(&buffer);
    istream input(&buffer);

//    先清空，再读写
    buffer.open("example.dat",ios::in|ios::out|ios::trunc);
    for(int i=1;i<=4;++i){

//        写一行
        output<<i<<". line"<<endl;

//        打印所有文件内容
        input.seekg(0);
        char c;
        while(input.get(c)){
            cout.put(c);
        }
        cout<<endl;

//        清除eofbit和failbit
        input.clear();
    }
    return 0;
}
