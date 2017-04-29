#include "info.h"
using namespace std;
#define pb push_back
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
typedef vector<int> vi;
string cur_funct="";
extern quad_array Quad;
extern symboltable globalst;
extern symboltable *current_ST;
extern int counter_temp;
extern string vib;

map<int,string> labels;

void quad_codes(quad q);
void STRINGS();
void GLOBAL();
void GENCODE();
extern vector<string> str_consts;


string symboltable::gentemp(basic_type b_type,basic_type base_t,int pc){
	
	stringstream temp1;
	temp1<<"t"<<counter_temp++;
	string res;
	temp1>>res;
	Symboltable[res]=new symboldata;
	order_symbol.pb(Symboltable[res]);
	Symboltable[res]->name=res;
	Symboltable[res]->type.b_type=b_type;
	Symboltable[res]->type.base_t=base_t;
	Symboltable[res]->type.pc=pc;
	Symboltable[res]->offset=offset;
	int temp2=0;
	if(b_type==type_int){
		temp2=SZ_INT;
	}
	else if(b_type==type_char){
		temp2=SZ_CHAR;
	}
	else if(b_type==type_double){
		temp2=SZ_DB;
	}
	else if(b_type==type_function || b_type==type_void){
		temp2=0;
	}
	else if(b_type==type_pointer){
		temp2=8;
	}
	else if(b_type==type_float){
		temp2=8;
	}

	Symboltable[res]->size=temp2;
	
	Symboltable[res]->initial_value=NULL;
	offset+=temp2;
	
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

void quad_array::emit(string result,string arg1,string op,string arg2){
	quad insertion;
	insertion.op=op;
	insertion.arg1=arg1;
	insertion.arg2=arg2;
	insertion.result=result;
	a1.pb(insertion);
	nextinstr++;
}

void quad_array::emit(string result,int constant,string unary_op){
	quad insertion;
	insertion.result=result;
	insertion.op=unary_op;
	stringstream temp1;
	temp1<<constant;
	temp1>>insertion.arg1;
	a1.pb(insertion);
	nextinstr++;
}

void  quad_array::emit(string result,double constant,string unary_op){
	quad insertion;
	insertion.op=unary_op;
	insertion.result=result;
	stringstream temp1;
	temp1<<constant;
	temp1>>insertion.arg1;
	a1.pb(insertion);
	nextinstr++;
}

void  quad_array::emit(string result,char constant,string unary_op){
	quad insertion;
	insertion.op=unary_op;
	insertion.result=result;
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
		cout<<arg2<<"CALL "<<result<<" "<<arg1<<endl;
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
	else if(op=="func_begin"){
		cout<<result<<":"<<endl;
	}
	else if(op=="func_ends"){
		cout<<"function "<<result<<" ends"<<endl;
	}
	else
	cout<<result<<" = "<<arg1<<" "<<op<<" "<<arg2<<endl;
}

void quad_array::backpatch(list<int> argumentlist,int index){
	list<int>::iterator it=argumentlist.begin();
	//cout<<"backpatch\n"<<argumentlist.size()<<endl;

	for(auto i:argumentlist){
		//cout<<i<<endl;
		stringstream temp1;
		temp1<<index;
		temp1>>a1[i].result;
	}

	
		//cout<<"backpatch\n";

}

string quad_array::gentmp(){
	stringstream temp1;
	temp1<<"t"<<counter++;
	string result;
	temp1>>result;
	return result;
}


list<int> makelist(int index){
	list<int> result;
	result.pb(index);
	return result;
}

list<int> merge(list<int> a,list<int> b){
	list<int> result;
	//cout<<a.size()<<" "<<b.size()<<endl;
	result.merge(a);
	result.merge(b);
	//cout<<result.size()<<endl;
	return result;
}

void GLOBAL(){
	for(auto it:globalst.order_symbol){
		if(it->type.b_type == type_int && it->name[0]!='t'){
			cout << "\t.comm\t" << it->name << ",4,4" << endl;
		}
		if(it->type.b_type == type_char && it->name[0]!='t'){
			cout << "\t.comm\t" << it->name << ",1,1" << endl;
		}
	}
}

void STRINGS()
{
	printf(".section\t.rodata\n");
	int num=0;
	for (std::vector<string>::iterator it = str_consts.begin(); it != str_consts.end(); ++it)
	{
		cout << ".LC" << num++ << ":\n";

		cout << "\t.string " <<  *it << endl;
	}
	
}
int label_count=0;
void set_labels()
{
	
	for (std::vector<quad>::iterator it = Quad.a1.begin(); it != Quad.a1.end(); ++it)
	{
		if(it->op=="GOTO" || it->op=="GOTO_L" || it->op=="GOTO_LE" || it->op=="GOTO_G" || it->op=="GOTO_GE" || it->op=="EQ" || it->op=="NE")
		{
			//cout << "printing goto " << it->res << "\n";
			int target;
			stringstream targ;
			targ << it->result;
			targ >> target;
			if(!labels.count(target))
			{
				string label_name;
				stringstream name;
				name << ".L" << label_count;
				label_count++;
				name >> label_name;
				labels[target]=label_name; 
			}
			it->result=labels[target];
		}
	}
}

void gen_prologue(int mem_bind)
{
	int space=(mem_bind/16 + 1)*16;
	cout << "\t.text\n";
	cout << "\t.globl\t" << cur_funct << "\n";
	cout << "\t.type\t" << cur_funct << ", @function\n";
	cout << cur_funct << ":\n";
	//cout << "\t.cfi_startproc\n";
	cout << "\tpushq\t%rbp\n";
	//ut << "\t.cfi_def_cfa_offset 16\n";
	//cout << "\t.cfi_offset 6, -16\n";
	cout << "\tmovq\t%rsp, %rbp\n";
	//cout << "\t.cfi_def_cfa_register 6\n";
	cout << "\tsubq\t$" << space << ", %rsp\n";
}


void GENCODE(){
	GLOBAL();
	STRINGS();
	symboldata *curr_func=NULL;
	symboltable *curr_func_tab=NULL;
	set_labels();
	//cout << "\t.text\n";
	for(int i=0;i<Quad.a1.size();i++)
	{
		
		cout << "# " ;
		Quad.a1[i].print();
		if(labels.count(i))
			cout << labels[i] << ":\n";
		if(Quad.a1[i].op=="func_begin")
		{
			i++;
			if(Quad.a1[i].op=="func_ends")
				continue;
			else
				i--;
			curr_func=globalst.lookup(Quad.a1[i].result);
			curr_func_tab=curr_func->nested_symboltable;
			//ret val and return address at 0  and 4
			int taking_param=1,mem_bind=16;
			current_ST=curr_func_tab;
			for(int j=0;j<curr_func_tab->order_symbol.size();j++)
			{
				//cout<<j<<"  (entry):  "<<curr_func_tab->order_symbol[j]->name<<"    "<<curr_func_tab->order_symbol[j]->size<<"     "<<mem_bind<<endl;
				if(curr_func_tab->order_symbol[j]->name == "RETURN_VAL")
				{
					taking_param=0;
					mem_bind=0;

					if(curr_func_tab->order_symbol.size()>j+1)
						mem_bind=-curr_func_tab->order_symbol[j+1]->size;
					//cout<<mem_bind<<endl;
				}
				else
				{
					if(!taking_param)
					{
						curr_func_tab->order_symbol[j]->offset=mem_bind;
						if(curr_func_tab->order_symbol.size()>j+1)
							mem_bind-=curr_func_tab->order_symbol[j+1]->size;
					}
					else
					{
						curr_func_tab->order_symbol[j]->offset=mem_bind;
						mem_bind+=8;
					}

				}
				//cout << "name -> " << curr_func_tab->order_symbol[j]->name << " bind->" << curr_func_tab->order_symbol[j]->offset << " size ->" << curr_func_tab->order_symbol[j]->size <<"\n";
			}
			if(mem_bind>=0)
				mem_bind=0;
			else
				mem_bind=(-1)*mem_bind;
			cur_funct=Quad.a1[i].result;
			//cout<<mem_bind<<endl;
			gen_prologue(mem_bind);
		}
		else if(Quad.a1[i].op=="func_ends")
		{
			current_ST=&(globalst);
			cur_funct="";
			cout << "\tleave\n";
			cout << "\tret\n";
			cout << "\t.size\t" << Quad.a1[i].result << ", .-" << Quad.a1[i].result << "\n";
		}
		//cout<<i<<endl;

		if(cur_funct!="")
			quad_codes(Quad.a1[i]);
		//cout<<i<<endl;
	}
}


stack<pair<string,int> > parameters;

void quad_codes(quad q)
{
	//cout << q.arg1 << "  " << q.result <<" "<<q.arg2<< endl;
	string have_label=q.result;
	bool has_str_label=false;
	if(q.result[0]=='.' && q.result[1]=='L' && q.result[2]=='C')
		has_str_label=true;
	string to_print1="",to_print2="",to_printres="";
	int off1=0,off2=0,offres=0;
	symboldata *local1=current_ST->lookup(q.arg1);
	symboldata *local2=current_ST->lookup(q.arg2);
	symboldata *local3=current_ST->lookup(q.result);
	symboldata *global1=globalst.lookup(q.arg1);
	symboldata *global2=globalst.lookup(q.arg2);
	symboldata *global3=globalst.lookup(q.result);
	//printf("args\n");
	//cout << q.arg1 << "  " << q.result << endl;
	if(current_ST!=&globalst)
	{
		//printf("here\n");

		if(global1==NULL && local1!=NULL)
		{
			//cout<<"aa gaya1\n";
			off1=local1->offset;
			//cout<<"aa 1gaya1\n";
		}
		//cout<<"aa 11gaya1\n";
		if(global2==NULL && local2!=NULL){
			//cout<<"aa gaya2\n";
			off2=local2->offset;
		}

		if(global3==NULL && local3!=NULL){
			//cout<<"aa gaya3\n";
			offres=local3->offset;
		}
		//cout<<"aa gaya\n";
		if(q.arg1[0]>'9' || q.arg1[0]<'0')
		{
			if(global1==NULL)
			{
				stringstream conv;
				conv << off1;
				conv >> to_print1;
				to_print1=to_print1+"(%rbp)";
				//printf("print1\n");
				//cout << to_print1 << endl;
			}
			else
			{
				to_print1=q.arg1+"(%rip)";
			}
		}
		//cout<<"aa gaya\n";
		if(q.result[0]>'9' || q.result[0]<'0')
		{
			if(global3==NULL)
			{
				stringstream conv;
				conv << offres;
				conv >> to_printres;
				to_printres=to_printres+"(%rbp)";
				//printf("printres\n");
				//cout << to_printres << endl;
			}
			else
			{
				to_printres=q.result+"(%rip)";
			}
		}
		if(q.arg2[0]>'9' || q.arg2[0]<'0')
		{
			if(global2==NULL)
			{
				stringstream conv;
				conv << off2;
				conv >> to_print2;
				to_print2=to_print2+"(%rbp)";

			}
			else
			{
				to_print2=q.arg2+"(%rip)";
			}
		}

	}
	else
	{
		//printf("wrong\n");
		to_print1=q.arg1;
		to_print2=q.arg2;
		to_printres=q.result;
	}
	//cout<<to_print1<<"  "<<to_print2<<" "<<to_printres<<endl;

	if(has_str_label)
		to_printres=have_label;

	if(q.op=="ASSIGN")
	{
		if(q.result[0]!='t' || local3->type.b_type==type_int || local3->type.b_type==type_pointer)
		{
			if(local3->type.b_type!=type_pointer)
			{
				if(q.arg1[0]<'0' || q.arg1[0]>'9')
				{
					cout << "\tmovl\t" << to_print1 << ", %eax" << endl;
					cout << "\tmovl\t%eax, " << to_printres << endl; 
				}
				else
				{
					cout << "\tmovl\t$" << q.arg1 << ", " << to_printres << endl;
				}
			}
			else
			{
				cout << "\tmovq\t" << to_print1 << ", %rax" << endl;
				cout << "\tmovq\t%rax, " << to_printres << endl; 
			}
		}
		else
		{
			int temp=q.arg1[0];
			cout << "\tmovb\t$" << temp << ", " << to_printres << endl;
		}
	}
	else if(q.op=="+")
	{
		if(q.arg1[0]>'0' && q.arg1[0]<='9')
		{
			cout << "\tmovl\t$" << q.arg1 << ", %eax\n";
		}
		else
		{
			cout << "\tmovl\t" << to_print1 << ", %eax\n"; 
		}
		if(q.arg2[0]>'0' && q.arg2[0]<='9')
		{
			cout << "\tmovl\t$" << q.arg2 << ", %edx\n";
		}
		else
		{
			cout << "\tmovl\t" << to_print2 << ", %edx\n"; 
		}
		cout << "\taddl\t%edx, %eax\n";
		cout << "\tmovl\t%eax, " << to_printres << endl;

	}
	else if(q.op=="-")
	{
		if(q.arg1[0]>'0' && q.arg1[0]<='9')
		{
			cout << "\tmovl\t$" << q.arg1 << ", %edx\n";
		}
		else
		{
			cout << "\tmovl\t" << to_print1 << ", %edx\n"; 
		}
		if(q.arg2[0]>'0' && q.arg2[0]<='9')
		{
			cout << "\tmovl\t$" << q.arg2 << ", %eax\n";
		}
		else
		{
			cout << "\tmovl\t" << to_print2 << ", %eax\n"; 
		}
		cout << "\tsubl\t%eax, %edx\n";
		cout << "\tmovl\t%edx, %eax\n";
		cout << "\tmovl\t%eax, " << to_printres << endl;
	}
	else if(q.op=="*")
	{
		if(q.arg1[0]>='0' && q.arg1[0]<='9')
		{
			cout << "\tmovl\t$" << q.arg1 << ", %eax\n";
		}
		else
		{
			cout << "\tmovl\t" << to_print1 << ", %eax\n"; 
		}
		/*if(q.arg2[0]>'0' && q.arg2[0]<='9')
		{
			cout << "\tmovl\t$" << q.arg2 << ", %edx\n";
		}
		else
		{
			cout << "\tmovl\t" << to_print2 << ", %edx\n"; 
		}*/
		cout << "\timull\t";
		if(q.arg2[0]>='0' && q.arg2[0]<='9')
		{
			cout << "$" << q.arg2 << ", %eax\n";
		}
		else
		{
			cout << to_print2 << ", %eax\n";
		}
		cout << "\tmovl\t%eax, " << to_printres << endl;
	}
	else if(q.op=="/")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		cout << "\tcltd\n\tidivl\t" << to_print2 << endl;
		cout << "\tmovl\t%eax, " << to_printres << endl;
	}
	else if(q.op=="%")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		cout << "\tcltd\n\tidivl\t" << to_print2 << endl;
		cout << "\tmovl\t%edx, " << to_printres << endl;
	}
	else if(q.op=="GOTO")
	{
		cout << "\tjmp\t" << q.result << endl;
	}
	else if(q.op=="GOTO_L")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		cout << "\tcmpl\t" << to_print2 << ", %eax\n";
		cout << "\tjge\t.L" << label_count << "\n";
		cout << "\tjmp\t" << q.result << endl;
		cout << ".L" << label_count++ << ":\n";
	}
	else if(q.op=="GOTO_G")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		cout << "\tcmpl\t" << to_print2 << ", %eax\n";
		cout << "\tjle\t.L" << label_count << "\n";
		cout << "\tjmp\t" << q.result << endl;
		cout << ".L" << label_count++ << ":\n";
	}
	else if(q.op=="GOTO_GE")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		cout << "\tcmpl\t" << to_print2 << ", %eax\n";
		cout << "\tjl\t.L" << label_count << "\n";
		cout << "\tjmp\t" << q.result << endl;
		cout << ".L" << label_count++ << ":\n";
	}
	else if(q.op=="GOTO_LE")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		cout << "\tcmpl\t" << to_print2 << ", %eax\n";
		cout << "\tjg\t.L" << label_count << "\n";
		cout << "\tjmp\t" << q.result << endl;
		cout << ".L" << label_count++ << ":\n";
	}
	else if(q.op=="EQ")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		if(q.arg2[0]>='0' && q.arg2[0]<='9')
			cout << "\tcmpl\t$" << q.arg2 << ", %eax\n";
		else
			cout << "\tcmpl\t" << to_print2 << ", %eax\n";
		cout << "\tjne\t.L" << label_count << "\n";
		cout << "\tjmp\t" << q.result << endl;
		cout << ".L" << label_count++ << ":\n";
	}
	else if(q.op=="NE")
	{
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		if(q.arg2[0]>='0' && q.arg2[0]<='9')
			cout << "\tcmpl\t$" << q.arg2 << ", %eax\n";
		else
			cout << "\tcmpl\t" << to_print2 << ", %eax\n";
		cout << "\tje\t" << q.result << "\n";
		cout << "\tjmp\t.L" << label_count << endl;
		cout << ".L" << label_count++ << ":\n";
	}
	else if(q.op=="ARR_IDX_ARG")
	{
		
		cout<<"\tmovl\t"<<to_print2<<", %edx\n";
		cout<<"cltq\n";
		if(off1<0)
		{
				cout<<"\tmovl\t"<<off1<<"(%rbp,%rdx,1), %eax\n";
				cout<<"\tmovl\t%eax, "<<to_printres<<"\n";
		}
		else
		{
			cout<<"\tmovq\t"<<off1<<"(%rbp), %rdi\n";
			cout<<"\taddq\t%rdi, %rdx\n";
			cout<<"\tmovq\t(%rdx) ,%rax\n";
			cout<<"\tmovq\t%rax, "<<to_printres<<endl;
		}
	}
	else if(q.op=="ARR_IDX_RES")
	{
		cout<<"\tmovl\t"<<to_print2<<", %edx\n";
		cout<<"\tmovl\t"<<to_print1<<", %eax\n";
		cout<<"cltq\n";
		if(offres>0)
		{
			cout<<"\tmovq\t"<<offres<<"(%rbp), %rdi\n";
			cout<<"\taddq\t%rdi, %rdx\n";
			cout<<"\tmovl\t%eax, (%rdx)\n";
		}
		else
		{
			cout<<"\tmovl\t%eax, "<<offres<<"(%rbp,%rdx,1)\n";
		}
	}
	else if(q.op=="REFERENCE")
	{
		if(off1<0)
		{
			cout << "\tleaq\t" << to_print1 << ", %rax\n";
			cout << "\tmovq\t%rax, " << to_printres << endl;
		}
		else
		{
			cout << "\tmovq\t" << to_print1 << ", %rax\n";
			cout << "\tmovq\t%rax, " << to_printres << endl;
		}
	}
	else if(q.op=="DEREFERENCE")
	{
		cout << "\tmovq\t" << to_print1 << ", %rax\n";
		cout << "\tmovq\t(%rax), %rdx\n";
		cout << "\tmovq\t%rdx, " << to_printres << endl;
	}
	else if(q.op=="L_DEREF")
	{
		cout << "\tmovq\t" << to_printres << ", %rdx\n";
		cout << "\tmovl\t" << to_print1 << ", %eax\n";
		cout << "\tmovl\t%eax, (%rdx)\n";
		//cout << "\tmovl\t%eax, " << to_printres <<"\n";
	}
	else if(q.op=="PARAM")
	{
		int size_of_param;
		if(global3==NULL)
		{
			if(local3->type.b_type==type_int)
				size_of_param=4;
			else if(local3->type.b_type==type_char)
				size_of_param=1;
			else
				size_of_param=4;
		}
		else
		{
			if(global3->type.b_type==type_int)
				size_of_param= 4;
			else if(global3->type.b_type==type_char)
				size_of_param=1;
			else
				size_of_param=4;
		}
		stringstream one;
		if(q.result[0]=='.')
		{
			one << "\tmovq\t$" << to_printres << ", %rax\n";
		}
		else if(q.result[0]>='0' && q.result[0]<='9')
		{
			one << "\tmovq\t$" << q.result << ", %rax\n";
		}
		else
		{
			if(local3->type.b_type!=type_array)
			{
				if(local3->type.b_type!=type_pointer)
				{
					one << "\tmovq\t" << to_printres << ", %rax\n";
				}
				else
				{
					if(local3==NULL)
					{
						one << "\tleaq\t" << to_printres << ", %rax\n";
					}
					else
					{
						one << "\tmovq\t" << to_printres << ", %rax\n";
					}
				}
			}
			else
			{
				if(offres<0)
					one << "\tleaq\t" << to_printres << ", %rax\n";
				else
				{
					one<<"\tmovq\t"<<offres<<"(%rbp), %rdi\n";
					one << "\tmovq\t%rdi, %rax\n";
				}
			}
		}
		parameters.push(make_pair(one.str(),size_of_param));
	}
	else if(q.op=="CALL")
	{
		int num_of_params;
		stringstream conv;
		conv << q.arg1;
		conv >> num_of_params;
		int total_size=0;
		int k=0;
		while(!parameters.empty())
			{
				if(parameters.size()==6)
				{
					cout << parameters.top().first << "\tpushq\t%rax\n" << "\tmovq\t%rax, %r9d\n";
					total_size+=parameters.top().second;
					parameters.pop();
				}
				else if(parameters.size()==5)
				{
					cout << parameters.top().first << "\tpushq\t%rax\n" << "\tmovq\t%rax, %r8d\n";
					total_size+=parameters.top().second;
					parameters.pop();
				}
				else if(parameters.size()==4)
				{
					cout << parameters.top().first << "\tpushq\t%rax\n" << "\tmovq\t%rax, %rcx\n";
					total_size+=parameters.top().second;
					parameters.pop();
				}
				else if(parameters.size()==3)
				{
					cout << parameters.top().first << "\tpushq\t%rax\n" << "\tmovq\t%rax, %rdx\n";
					total_size+=parameters.top().second;
					parameters.pop();
				}
				else if(parameters.size()==2)
				{
					cout << parameters.top().first << "\tpushq\t%rax\n" << "\tmovq\t%rax, %rsi\n";
					total_size+=parameters.top().second;
					parameters.pop();
				}
				else if(parameters.size()==1)
				{
					cout << parameters.top().first << "\tpushq\t%rax\n" << "\tmovq\t%rax, %rdi\n";
					total_size+=parameters.top().second;
					parameters.pop();
				}
			}
		cout << "\tcall\t" << q.result <<"\n";
		if(q.arg2!= "")
			cout << "\tmovq\t%rax, " << to_print2 << endl;
		cout << "\taddq\t$" << total_size << ", %rsp\n";
	}
	else if(q.op=="RETURN")
	{
		if(q.result!="")
		{
			cout << "\tmovq\t" << to_printres << ", %rax\n";
		}
		cout << "\tleave\n";
		cout << "\tret\n";
	}
}


