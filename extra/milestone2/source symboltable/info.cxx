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

void quad_array::emit(string res,string arg1,string op,string arg2){
	quad insertion;
	insertion.op=op;
	insertion.arg1=arg1;
	insertion.arg2=arg2;
	insertion.result=res;
	a1.pb(insertion);
	nextinstr++;
}

void quad_array::emit(string res,int constant,string unary_op){
	quad insertion;
	insertion.result=res;
	insertion.op=unary_op;
	stringstream temp1;
	temp1<<constant;
	temp1>>insertion.arg1;
	a1.pb(insertion);
	nextinstr++;
}

void  quad_array::emit(string res,double constant,string unary_op){
	quad insertion;
	insertion.op=unary_op;
	insertion.result=res;
	stringstream temp1;
	temp1<<constant;
	temp1>>insertion.arg1;
	a1.pb(insertion);
	nextinstr++;
}

void  quad_array::emit(string res,char constant,string unary_op){
	quad insertion;
	insertion.op=unary_op;
	insertion.result=res;
	stringstream temp1;
	temp1<<constant;
	temp1>>insertion.arg1;
	a1.pb(insertion);
	nextinstr++;
}

void quad::print(){
	if(op=="GOTO_L"){
		cout<<"IF "<<arg1<<" < "<<arg2<<" GOTO "<<result<<endl;
	}
	else if(op=="GOTO_G"){
		cout<<"IF "<<arg1<<" > "<<arg2<<" GOTO "<<result<<endl;
	}
	else if(op=="GOTO_LE"){
		cout<<"IF "<<arg1<<" <= "<<arg2<<" GOTO "<<result<<endl;
	}
	else if(op=="GOTO_GE"){
		cout<<"IF "<<arg1<<" >= "<<arg2<<" GOTO "<<result<<endl;
	}
	else if(op=="EQ"){
		cout<<"IF "<<arg1<<" == "<<arg2<<" GOTO "<<result<<endl;
	}
	else if(op=="PARAM"){
		cout<<"PARAM "<<result<<endl;
	}
	else if(op=="CALL"){
		cout<<"CALL "<<result<<" "<<arg1<<endl;
	}
	else if(op=="NE"){
		cout<<"IF "<<arg1<<" != "<<arg2<<" GOTO "<<result<<endl;
	}
	else if(op=="GOTO" || op == "RETURN"){
		cout<<op<<" "<<result<<endl;
	}
	else if(op=="ASSIGN"){
		cout<<result<<" "<<arg2<<" "<<arg1<<endl;
	}
	else
	cout<<result<<" = "<<arg1<<" "<<op<<" "<<arg2<<endl;
}

void quad_array::backpatch(list<int> argumentlist,int index){
	list<int>::iterator it=argumentlist.begin();
	while(it!=argumentlist.end()){
		stringstream temp1;
		temp1<<index;
		temp1>>a1[(*it)].result;
		it++;
	}
}

string quad_array::gentmp(){
	stringstream temp1;
	temp1<<"t"<<counter++;
	string res;
	temp1>>res;
	return res;
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
