#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::sort(arr.begin(), arr.end());

    int m;
    std::cin >> m;

    std::vector<int> ans(m);
    for (int i = 0; i < m; i++)
    {
        int a;
        std::cin >> a;
        int start = 0, end = n - 1;
        int flag = 0;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[mid] < a)
                start = mid + 1;
            else if (arr[mid] > a)
                end = mid - 1;
            else
            {
                flag = 1;
                break;
            }
        }
        ans[i] = flag;
    }

    for (int i = 0; i < m; i++)
        std::cout << ans[i] << " ";

    return 0;
}
