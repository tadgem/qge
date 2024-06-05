//
// Created by liam_ on 6/5/2024.
//

#ifndef QGE_ALL_HASHMAP_H
#define QGE_ALL_HASHMAP_H
#include <unordered_map>

namespace qge
{
    template<typename _Key, typename _Value>
    using HashMap = std::unordered_map<_Key, _Value>;
}

#endif //QGE_ALL_HASHMAP_H
