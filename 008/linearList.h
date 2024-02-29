enum bool{false,true};
template <class T>
class LinearList{
public:
	LinearList();
	~LinearList();
	virtual int Size()const=0;
	virtual int Length()const=0;
	virtual int Search(T& x)const=0;
	virtual int Locate(int i)const=0;
	virtual bool getData(int i,T& x)const=0;
	virtual void setData(int i,T& x)const=0;
	virtual bool Insert(int i,T& x)const=0;
	virtual bool Remove(int i,T& x)const=0;