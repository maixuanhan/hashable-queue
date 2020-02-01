#ifndef HASHABLE_QUEUE_HPP
#define HASHABLE_QUEUE_HPP

#include <queue>
#include <list>
#include <unordered_map>

template <class K, class V>
class hashable_queue
{
public:
    bool empty() const
    {
        return this->m_keys.empty();
    }

    size_t size() const
    {
        return this->m_keys.size();
    }

    V &front()
    {
        auto &k = this->m_keys.front();
        return this->m_map[k];
    }

    V &back()
    {
        auto &k = this->m_keys.back();
        return this->m_map[k];
    }

    void pop()
    {
        if (!this->empty())
        {
            auto &k = this->m_keys.front();
            this->m_map.erase(k);
            this->m_keys.pop();
        }
    }

    V &operator[](const K &k)
    {
        auto &v = this->m_map[k];
        if (this->m_map.size() > this->m_keys.size())
        {
            this->m_keys.push(k);
        }
        return v;
    }

    V &at(const K &k)
    {
        return this->m_map.at(k);
    }

protected:
    std::queue<K, std::list<K>> m_keys;
    std::unordered_map<K, V> m_map;
};

#endif // HASHABLE_QUEUE_HPP
