# Singleton
some usage for Singleton

we can use Singleton to make global variable like this sample
  

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




we only add a get() function in Singleton
let the struct inherit the Singleton

	struct Argument : public Singleton<Argument>
	{
		union {
			struct {
				int width;
				int height;
			};
		};
	};


In the main function, we can call get() function which belongs to the struct,
it will build a object
when we call get() function again in another function, the struct's object will not rebuild,
so the argument in struct will be the blobal variable

	void print()
	{
		cout << "the second time to call get() " << endl;
		Argument* param = Argument::get();
		cout << "param.height = " << param->height << endl;
		cout << "param.width = " << param->width << endl;
	}

	int main()
	{
		cout << "the first time to call get() " << endl;
		Argument* argument = Argument::get();
		argument->height = 100;
		argument->width = 200;
		print();
		return 0;

	}