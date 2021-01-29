// �ߺ� ���Ҹ� �����̳ʿ� ������ �� �ִ� set �����̳��� Ȯ����

#include <iostream>
#include <set>

using namespace std;

void print(multiset<int> s){

    multiset<int>::iterator iter;

    for(iter = s.begin(); iter != s.end(); ++iter){
        cout << *iter << " ";
    } cout << endl;

}

int main(){

    multiset<int> ms;
    multiset<int>::iterator iter;
    
    ms.insert(50);
    ms.insert(30);
    ms.insert(80);
    ms.insert(80); // �ߺ�
    ms.insert(30); // �ߺ�
    ms.insert(70);
    iter = ms.insert(10);

    // cout<< "iter�� ���� : "<< *iter << endl;

    print(ms);

    cout << "30 ������ ���� : " << ms.count(30) << endl;

    iter = ms.find(30);
    cout << "iter: " << *iter <<endl; 

    //////////////////////////////////////////////////////
    multiset<int>::iterator lower_iter = ms.lower_bound(30);
    multiset<int>::iterator upper_iter = ms.upper_bound(30);

    cout << "lower_iter: " << *lower_iter << endl;
    cout << "upper_iter: " << *upper_iter << endl;

    cout << "���� [lower_iter, upper_iter) �� ������: ";

    for(iter = lower_iter; iter != upper_iter ; iter++)
        cout << *iter << " ";
    cout << endl;
    
    ////////////////////////////////////////////////////////

    pair<multiset<int>::iterator, multiset<int>::iterator> iter_pair;
    iter_pair = ms.equal_range(30);

    for(iter = iter_pair.first; iter != iter_pair.second ; iter++)
        cout << *iter << " ";
    cout << endl;

    return 0;
}