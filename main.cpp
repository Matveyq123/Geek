#include <iostream>
#include <string>
#include <exception>
#include<cctype>
#include <algorithm>

int main()
{
    bool is_true = false;
    std::string str = "DYna.Co.loR.x.";
    std::string cameraType = "D.Yna.COL.Or>..";
    std::for_each(cameraType.begin(), cameraType.end(), [&cameraType]() 
    {
        auto it = cameraType.begin();
        while (it != cameraType.end())
        {
            if (isalpha(*it))
			{
				*it = std::tolower(*it);
			}
			else
			{
				cameraType.erase(it);
				--it;
				std::cout << cameraType << std::endl;
			}
			++it;
		}

	});
	auto it = str.begin();
	while(it != str.end())
	{
		if (isalpha(*it))
		{
			*it = std::tolower(*it);
		}
		else
		{
			std::cout << str << std::endl;
			str.erase(it);
			--it;
			std::cout << str << std::endl;
		}
		++it;
	}

	return 0;
}
