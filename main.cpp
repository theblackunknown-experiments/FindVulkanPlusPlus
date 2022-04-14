
#include <spirv-tools/libspirv.h>
#include <glslang/Public/ShaderLang.h>
#include <shaderc/shaderc.h>
#include <vulkan/vulkan_core.h>

#include <iostream>


int main(int argc, char* argv[])
{
    uint32_t vk_version;
    vkEnumerateInstanceVersion(&vk_version);

    std::cout << "Vulkan Version: " << VK_VERSION_MAJOR(vk_version) << '.' << VK_VERSION_MINOR(vk_version) << '.' << VK_VERSION_PATCH(vk_version) << std::endl;

    #if 1
    std::cout << "SPIRV-Tools Version: " << spvSoftwareVersionString() << ", " << spvSoftwareVersionDetailsString() << std::endl;
    #endif

    #if 1
    const glslang::Version glslang_version = glslang::GetVersion();
    const char* glslang_essl_version = glslang::GetEsslVersionString();
    const char* glslang_glsl_version = glslang::GetGlslVersionString();
    const int glslang_khronos_tool_id = glslang::GetKhronosToolId();

    std::cout << "glslang Version: " << glslang_version.major << '.' << glslang_version.minor << '.' << glslang_version.patch << " (glsl version: " << glslang_glsl_version << ", essl version:" << glslang_essl_version << ", khronos tool:" << glslang_khronos_tool_id << ')' << std::endl;
    #endif

    #if 1
    unsigned int shaderc_version, shaderc_revision;
    shaderc_get_spv_version(&shaderc_version, &shaderc_revision);

    std::cout << "shaderc Version: " << shaderc_version << " (revision: " << shaderc_revision << ')' << std::endl;
    #endif

    return 0;
}
