#include <string>

namespace AppConstants
{
	const int ScreenWidth = 800;
	const int ScreenHeight = 800;

	inline std::string GetAssetPath(std::string assetName)
	{
		return ASSETS_PATH "" + assetName;
	}
}