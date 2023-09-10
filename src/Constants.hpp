#include <string>

namespace AppConstants
{
	inline std::string GetAssetPath(std::string assetName)
	{
		return ASSETS_PATH "" + assetName;
	}
}