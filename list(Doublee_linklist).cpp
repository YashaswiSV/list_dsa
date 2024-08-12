#include <iostream>
#include <list>
#include <forward_list>
using namespace std;


int main()
{
    list <int> lis;

    lis.push_back(12);
    lis.push_back(13);
    lis.push_back(14);

    lis.push_front(22); //front me add    //22 12 13 14


   // lis.pop_front(); //front ka element delete; //12 13 14
    lis.pop_back();//  last ka element delete ;//22 12 13

    list <int>::iterator it;

    for(it=lis.begin();it!=lis.end();it++){

        cout<<*it<<" ";
    }

    //==================================second quest================================================

     list <int> lis {22,33,44,55,66,77};

       list <int>::iterator it1=lis.begin();

               //{it1=it1+5 -->not be possible (no indexing)}

       it1++;
       it1++;

       lis.insert(it1,100);

       list <int> :: iterator it = lis.begin();
       for(it=lis.begin();it!=lis.end();it++){
        cout<<*it<<" ";
       }

}
