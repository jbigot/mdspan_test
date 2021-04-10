#include <array>
#include <experimental/mdspan>

using namespace std;
using namespace std::experimental;

int main() {

    array<size_t, 3> array_extents{3,4,5};

    extents<dynamic_extent,dynamic_extent,dynamic_extent> real_extents(array_extents);

}
