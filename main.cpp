#include <iostream>
using namespace std;

class CGirl
{
public:
    string name;
    int age;
    enum{girl=1,boy=2};
    int sex;
    void setvalue(string name1,int age1)
    {
        name=name1;
        age=age1;
        show();
    }

    void show(){
        cout<<"姓名："<<name<<"，年龄："<<age<<endl;
        if (sex==girl){;}
    }
};


int main() {
    CGirl girl;
    girl.setvalue("西施",26);
    girl.sex=girl.boy;
    //girl.show();
    return 0;
}
