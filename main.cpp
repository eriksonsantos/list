#include <iostream>
#include "List.hpp"

using namespace std;

int main(){
    List *L = new List();
    int n,k;
    cin >> n >> k;
    
        for (int i=n; i>=0; i--){

            L->insert(i);

        }
        L->print();
        cout << L->_size;
        for (int i=0; i<k;i++){
            L->removeFirst();
        }
        cout << endl;
        L->print();
        cout<< L->_size;
        cout << endl;

        
        for (int i=0; i <= L->_size;i++){
            if(L->_head->_value % 2 == 0 ){
                L->remove(i);
            }
            L->_head = L->_head->_next;
            

        } 
    
        L->print();
        
        cout << L->_size;
    

	return 0;
}