#pragma once

#ifdef VZ_PLATFORM_WINDOWS
	#ifdef VZ_BUILD_DLL
		#define VUZLE_API __declspec(dllexport)
	#else
		#define VUZLE_API __declspec(dllimport)
	#endif
#else
	#error Vuzle is only supported on Windows!;
#endif