#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template<typename T>
void max_heapify(std::vector<T>& array, size_t index)
{
  size_t largest;
  size_t left  = (2*index) + 1;
  size_t right = left + 1;

  if(left < array.size() && array[left] > array[index])
    largest = left;
  else
    largest = index;

  if(right < array.size() && array[right] > array[largest])
    largest = right;

  if(largest != index)
  {
    int tmp = array[index];
    array[index] = array[largest];
    array[largest] = tmp;
    max_heapify(array, largest);
  }
}

template<typename T>
void build_max_heap(std::vector<T>& array)
{
  for(int64_t i = (int64_t(array.size())/2) - 1; i >= 0; i--)
  max_heapify(array, i);
}

template<typename T>
T heap_maximum(std::vector<T>& array)
{
  return array[0];
}

template<typename T>
T heap_extract_max(std::vector<T>& array)
{
  if(array.size() < 0)
  {
    std::cerr << "Heap Underflow \n";
    return -1;
  }
  else
  {
    T max = array[0];
    array[0] = array[array.size() - 1];
    array.erase(std::remove(array.begin(), array.end(), array[0]),
                  array.end());
    array.shrink_to_fit();
    max_heapify(array, 0);
    return max;
  }
}

template<typename T>
void heap_increase_key(std::vector<T>& array, size_t index, T value)
{
  if(value < array[index])
  {
    std::cerr <<"New value is smaller than the current value\n";
    return;
  }
  else
  {
    array[index] = value;
    while(index > 0 && array[(index/2) - 1] < array[index])
    {
      std::swap(array[index], array[(index/2) - 1]);
      index = (index/2) - 1;
    }
  }
}

template<typename T>
void max_heap_insert(std::vector<T>& array, T value)
{
  array.resize(array.size() + 1);
  array[array.size() - 1] = -1;
  heap_increase_key(array, array.size() - 1, value);
  build_max_heap(array);
}

int main()
{
std::vector<int> v({1, 2, 6, 3, 7});
build_max_heap(v);
std::cout << "Max-Heap: ";
for(size_t i = 0; i < v.size(); i++)
{
  std::cout << v[i] << " ";
}
std::cout << "\n";
std::cout << "Extract-Maximum: " << heap_extract_max(v) << "\n";
std::cout << "New Heap: ";
for(size_t i = 0; i < v.size(); i++)
{
  std::cout << v[i] << " ";
}
max_heap_insert(v, 10);
std::cout << "\nNew Heap after inserting 10: ";
for(size_t i = 0; i < v.size(); i++)
{
  std::cout << v[i] << " ";
}
std::cout << '\n';
}
