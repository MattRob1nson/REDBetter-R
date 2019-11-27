#ifndef CONFIG_CONSTANTS
#define CONFIG_CONSTANTS

#include <string>
#include <vector>


namespace REDBetterR {
    namespace Config {
        namespace Constants {
            class File {
            public:
                static const std::string FILE_PATH;
            };

            class JSON {
            public:
                static const std::vector<std::string> JSON_FIELDS;
                static const std::vector<std::string> REQUIRED_JSON_FIELDS;
            };
        }
    }
}

#endif // CONFIG_CONSTANTS
