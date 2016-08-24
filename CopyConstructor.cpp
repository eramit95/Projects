using namespace std;
class Array{
        private:
                int size;
                int *p;
        public:
                Array(int size){
                        this->size = size;
                        cout<<size<<endl;
                        p = new int[size];
                        for(int i=0;i<size;i++){
                                cin>>p[i];
                        }
                }
                Array(const Array &a1){
                        size = a1.size;
                        cout<<size;
                        p =  new int[size];
                        for(int i=0;i<size;i++){
                                p[i] = a1.p[i];
                        }
                }
                int getElement(int index){
                        return p[index];
                }
                int getSize(){
                        return size;
                }


};

int main(){
        Array a1(3);
        cout<<"asdf";
        Array a2(a1);
        cout<<"ghjk";

return 0;
}
