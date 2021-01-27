#include "Singleton.hpp"

namespace StructInheritance {
	class ClassImpl : public Singleton<ClassImpl> {
	public:
		int width;
		int height;
	};
}
