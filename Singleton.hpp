#include<iostream>
using namespace std;

namespace StructInheritance {

	template<typename Ty>
	class Singleton {
	public:
		static Ty* get()
		{
			if (!instance)
			{
				cout << "new Ty() " << endl;
				instance = new(nothrow) Ty();
			}
			return instance;
		}

	private:
		static Ty* instance;
	};

	template<typename Ty>
	Ty* Singleton<Ty>::instance = nullptr;
}
