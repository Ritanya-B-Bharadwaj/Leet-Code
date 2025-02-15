#include <vector>
#include <limits>

// Optimal solution with O(n)

float maxValue(std::vector<float> numbers) {
  // todo
  float max = numbers[0];
  for(int i=1;i<numbers.size();i++)
    {
      if (numbers[i]>max)
        max = numbers[i];
    }
  return max;
}
