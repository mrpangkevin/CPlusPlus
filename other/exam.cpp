#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int getRandom(int d){
    int r;
    do{
        r=random()%d;
    }while(r==0);
    return r;
}
vector<int> gen_vector_int(int len){
    int i,d;
    vector<int> v;
    for(i=0;i<len;i++){
        d=getRandom(len);
        v.push_back(d);
    }
    return v;
}
void view_vector_int(vector<int>v){
    int i;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
       cout<<*it<<" ";
    }
    cout<<endl;
    cout<<endl;
    //while(v.size()>0){
    //    v.pop_back();
    //    cout<<v.size()<<" ";
    //}
    //cout<<endl;
}
void view_vector_string(vector<string>v){
    for(vector<string>::iterator it = v.begin() ; it!=v.end(); it++){
        cout<<*it<<endl;
    }
}

vector<string>  gen_vector_string(int vectorlen){
    int i,j,rlen,rd;
    char rc;
    string str;
    vector<string> v(vectorlen,"");
    for(i=0;i<vectorlen;i++){
        rlen=getRandom(vectorlen);
        str="";
        for(j=0;j<rlen;j++){
            rd=getRandom(26);
            rc='a'+rd;
            str+=rc;
        }
        v[i]=str;
    }
    return v;
}

vector<vector<string> > gen_vectors_string(int vectorlen){
    int k;
    vector<vector<string> > vs;
    for(k=0;k<vectorlen;k++){
        vs.push_back(gen_vector_string(20));
    }
    for(int i=0;i<vs.size();i++){
        vector<string> v = vs.at(i);
        view_vector_string(v);
        cout<<"-----------"<<endl;
    }
    return vs;
}
void find_str_in_vector(vector<vector<string> > vs, string str){
    int posi=-1;
    for(int i=0;i<vs.size();i++){
        vector<string> v = vs.at(i);
        for(vector<string>::iterator it = v.begin() ; it!=v.end(); it++){
        //    cout<<*it<<endl;
            posi=it->find(str);
            if((posi>=0)&&(posi<it->size())){
                cout<<"Found :"<<*it<<endl;
            }
        }
       //cout<<"-----------"<<endl;
    }
}

stack<int> gen_stack_int(int len){
    int i,d;
    stack<int> s;
    for(i=0;i<len;i++){
        d=getRandom(len);
        s.push(d);
        cout<<"Push :"<<d<<endl;
    }
    return s;
}
void pop_stack_int(stack<int> s){
    for(int d, i=0, len=s.size();i<len;i++){
        d=s.top();
        s.pop();
        cout<<"Pop :"<<d<<endl;
    }
}

queue<int> gen_queue_int(int len){
    queue<int> q;
    for(int i=0,d;i<len;i++){
        d=getRandom(len);
        cout<<"Push:"<<d<<endl;
        q.push(d);
    }
    return q;
}
void pop_queue_int(queue<int> q){
    for(int i=0,d,len=q.size();i<len;i++){
        cout<<"Pop:"<<q.front()<<endl;
        q.pop();
    }
}

map<int,int> gen_map_int_int(int len, int sum){
    map<int,int> m;
    map<int,int>::iterator it;
    for(int i=0,d;i<len;i++){
        d=getRandom(sum);
        it = m.find(d);
        if(it==m.end()){
            //m.insert(d,0);
            m[d]++;
            cout<<"insert "<<i<<":"<<d<<endl;
        }
        else{
            i--;
            cout<<"duplication:"<<d<<endl;    
        }
    }
    cout<<"gen :"<<m.size()<<endl;
    return m;
}
void view_map_int_int(map<int,int> m){
    cout<<"view:"<<m.size()<<endl;
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
}
map<int,int> find_sum_map_int_int(map<int,int> m, int sum){
    map<int,int>::iterator found;
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
        found = m.find(sum-it->first);
        if ( found!=m.end() ){
            cout<<"Found:"<<it->first<<" , "<<found->first<<endl;
            found->second=found->first;
        }else{
            it->second=0;
        }
    }
    return m;
}
bool compare(){
    return false;
}
int main ( int argc, char* argv[] ){
//    vector<int> vi = gen_vector_int(20);
//    view_vector_int(vi);
//    vi.insert(vi.begin(), 99);
//    view_vector_int(vi);
//    vi.erase(vi.begin());
//    view_vector_int(vi);
//    
//    string str="";
//    vector<vector<string> > vs = gen_vector_string();
//    cin>>str;
//    cout<<"Finding "<<str<<endl;
//    find_str_in_vector(vs, str);
//    
//    stack<int> s = gen_stack_int(20);
//    pop_stack_int(s);
//    return 0;
//    
//    queue<int> q = gen_queue_int(20);
//    pop_queue_int(q);
    
//    map<int,int> m = gen_map_int_int(10,50);
//    view_map_int_int(m);
//    m = find_sum_map_int_int(m,50);
//    view_map_int_int(m);
        
//    int a,b,c;
//    a=b=c=10;
//    cout<<a<<b<<c<<endl;
//    
    
//    vector<int> vi = gen_vector_int(20);
//    view_vector_int(vi);
//    sort(vi.begin(), vi.end());
//    view_vector_int(vi);

    vector<string> v = gen_vector_string(20);
    view_vector_string(v);
    cout<<endl;
    sort(v.begin(), v.end());
    view_vector_string(v);
}
