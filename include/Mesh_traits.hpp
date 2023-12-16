//
// Created by Enrico on 28/11/2023.
//

#include <Eikonal_traits.hpp>
//@note good the idea of a trait, but it is rather poor in this case
// you could have added more type aliases
namespace Eikonal {
    template<std::size_t DIM, std::size_t MESHSIZE>
    using MeshElement = std::array<int, MESHSIZE>;
}