#include "info.h"
using namespace std;
#define pb push_back
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
typedef vector<int> vi;

void get(string x){
	cout<<"--"<<x<<endl;
}


string symboltable::gentemp(basic_type bt,bool check_,bool overflow_){
	static int count1=0;
	stringstream temp1;
	temp1<<"t"<<count1++;
	string res;
	temp1>>res;
	Symboltable[res]=new symboldata;
	order_symbol.pb(Symboltable[res]);
	Symboltable[res]->name=res;
	Symboltable[res]->type.b_type=bt;
	Symboltable[res]->offset=offset;
	int temp2=0;
	if(bt==type_int){
		temp2=SZ_INT;
	}
	else if(bt==type_char){
		temp2=SZ_CHAR;
	}
	else if(bt==type_double){
		temp2=SZ_DB;
	}
	else if(bt==type_function || bt==type_void){
		temp2=0;
	}
	Symboltable[res]->size=temp2;
	Symboltable[res]->initial_value=NULL;
	offset+=temp2;
	check_=true;
	assert(check_);
	return res;
}

symboldata* symboltable::lookup(string var){
	if(parent==NULL && Symboltable.find(var)==Symboltable.end())return NULL;
	if(Symboltable.find(var)== Symboltable.end())return parent->lookup(var);
	else return Symboltable[var];
}

	/*if(Symboltable.count(var)==0){
		ispresent=false;
		Symboltable[var]=new symboldata;
		order_symbol.pb(Symboltable[var]);
		Symboltable[var]->name=var;
		Symboltable[var]->type.b_type=bt;
		Symboltable[var]->offset=offset;
		int temp2=0;
		if(pc==0){
			if(bt==type_int){
				temp2=SZ_INT;
			}
			else if(bt==type_function || bt==type_void){
				temp2=0;
			}
			else if(bt==type_double){
				temp2=SZ_DB;
			}
			else if(bt==type_char){
				temp2=SZ_CHAR;
			}
		}
		else{
			temp2=SZ_PTR;
			Symboltable[var]->type.base_t=bt;
			Symboltable[var]->type.pc=pc;
			Symboltable[var]->type.b_type=type_array;
		}
		Symboltable[var]->size=temp2;
		Symboltable[var]->initial_value=NULL;
		offset+=temp2;
	}
	return Symboltable[var];
}*/

void symboltable::insert(symboldata* var){
	Symboltable[var->name]= var;
	order_symbol.push_back(var);
	offset+=var->size;
}

void symboltable::print(bool iserror){
	iserror=false;
	printf("NAME\tTYPE\t\tSIZE\tOFFSET\t\tINITVAL\n");

	For(i,0,order_symbol.size()){
		symboldata *t=order_symbol[i];
		cout<<t->name<<"\t";
		if(t->type.b_type==type_char){
			cout<<"char\t";
		}
		else if(t->type.b_type==type_int){
			cout<<"int\t";
		}
		else if(t->type.b_type==type_double){
			cout<<"double\t";
		}
		else if(t->type.b_type==type_float){
			cout<<"float\t";
		}
		else if(t->type.b_type==type_function){
			cout<<"function";
		}
		else{
			if(t->type.b_type==type_char){
				cout<<"char ";
			}
			else if(t->type.b_type==type_int){
				cout<<"int ";
			}
			else if(t->type.b_type==type_double){
				cout<<"double ";
			}
		}

		if(t->type.b_type==type_pointer){
			For(i,0,t->type.pc){
				cout<<"*";
			}
			cout<<"\t";
		}

		if(t->type.b_type==type_array){
			vi tmp=t->type.alist;
			For(i,0,tmp.size()){
				cout<<"["<<tmp[i]<<"]";
			}
		}
		cout<<"\t";
		cout<<t->size<<"\t"<<t->offset<<"\t";
		if(t->initial_value==NULL){
			cout<<"NULL";
		}
		else{
			if(t->type.b_type==type_char){
				cout<<t->initial_value->charval;
			}
			else if(t->type.b_type==type_int){
				cout<<t->initial_value->intval;
			}
			else if(t->type.b_type==type_double){
				cout<<t->initial_value->doubleval;
			}
			else{
				cout<<"NotAvailable";
			}
		}
		cout<<endl;
	}
}

list<int> makelist(int index){
	list<int> res;
	res.pb(index);
	return res;
}

list<int> merge(list<int> a,list<int> b){
	list<int> res;
	res.merge(a);
	res.merge(b);
	return res;
}
