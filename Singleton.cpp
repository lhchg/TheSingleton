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
				instance = new(nothrow) Ty();
			}
		}

	private:
		static Ty* instance;
	};

}
