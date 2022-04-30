#include "List.hpp"

List::List(){
	_size = 0;
	_head = NULL;
		
}

void List::insert(int value){
    Node* node = new Node();
	node->_value = value;
	node->_next = nullptr;
	

	if( _head == nullptr){
		_head = node;
		fim = node;
	}else{

		fim->_next = node;
		fim = node;
	}

	_size++;


}

void List::clearList() {
	_head = NULL;
	_size =0;
}


void List::print(){
	Node* node = _head;
	int i = 0;
		if (_size > 0){
			while(i < _size){
				std::cout << node->_value << " ";
				node = node->_next;
				i++;
			}
			std::cout<<std::endl;
		}
	else{
	    std::cout<<"-"<<std::endl;
		return;
	}
}
		

int List::removeFirst(){
	Node* current = _head;
	_head = _head->_next;
	delete current;
	_size--;
	return current->_value;
	
	
}

int List::indexOf(int value){
	if (_size > 0){
		Node* head = _head;
		int index = 0;
		while(index < _size){
			if (head->_value == value){
			
				return index; 
			}else{
				index++;
				head = head->_next;
			}
		}
			
		return -1;
	}
	else{
		return -1;
	}
}

void List::remove(int value){
	if(_size == 0){
		return;
	}else{
		int index = 0;
		Node* head = _head;

		if(value == head->_value){
			_head = _head->_next;
			_size--;
		}else{

			if(fim->_value == value){
				
				for(int i=0; i< _size; i++){
					
					if(value == head->_next->_value){
						fim->_value = _head->_value;
						_size--;
						return;
					}
					head = head->_next;
					
				}

			}else{
				
				while(index < _size && head->_next != nullptr){
			
					if(head->_next->_value == value){
						head->_next = head->_next->_next;
						_size--;
						return;
					}

				index++;
				head = head->_next;
		}
		_head = head;
		
			}
			

		}
		
		
	}
	
}