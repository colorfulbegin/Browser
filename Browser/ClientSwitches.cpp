#include "ClientSwitches.h"

namespace Browser {
	namespace Switches {
		// CEF and Chromium support a wide range of command-line switches. This file
		// only contains command-line switches specific to the cefclient application.
		// View CEF/Chromium documentation or search for *_switches.cc files in the
		// Chromium source code to identify other existing command-line switches.
		// Below is a partial listing of relevant *_switches.cc files:
		//   base/base_switches.cc
		//   cef/libcef/common/cef_switches.cc
		//   chrome/common/chrome_switches.cc (not all apply)
		//   content/public/common/content_switches.cc

		const char kMultiThreadedMessageLoop[] = "multi-threaded-message-loop";
		const char kCachePath[] = "cache-path";
		const char kUrl[] = "url";
		const char kOffScreenRenderingEnabled[] = "off-screen-rendering-enabled";
		const char kOffScreenFrameRate[] = "off-screen-frame-rate";
		const char kTransparentPaintingEnabled[] = "transparent-painting-enabled";
		const char kShowUpdateRect[] = "show-update-rect";
		const char kMouseCursorChangeDisabled[] = "mouse-cursor-change-disabled";
		const char kRequestContextPerBrowser[] = "request-context-per-browser";
		const char kRequestContextSharedCache[] = "request-context-shared-cache";
		const char kBackgroundColor[] = "background-color";
		const char kEnableGPU[] = "enable-gpu";
		const char kFilterURL[] = "filter-url";
	}
}
