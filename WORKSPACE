workspace(name="graphics")

# Initialize the Graphics repo and all its dependencies.

# The cascade of load() statements and rr_workspace?() calls works around the
# restriction that load() statements need to be at the top of .bzl files.
# E.g. we can not retrieve a new repository with http_archive and then load()
# a macro from that repository in the same file.



# Vulkan rules repo
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = "rules_vulkan",
  remote = "https://github.com/jadarve/rules_vulkan.git",
  tag = "v0.0.9"
)

load("@rules_vulkan//vulkan:repositories.bzl", "vulkan_repositories")

# TODO(@Adam-Al-Rahman): SDK PATH setup if needed else remove this comment
# sdk_path = 'OPTIONAL: path to the host Vulkan SDK, otherwise use VULKAN_SDK env variable',
# android_use_host_vulkan_sdk = True, # For android, whether or not use the Vulkan headers provided by the NDK.
vulkan_repositories()


load("@//graphics:workspace0.bzl", "rr_workspace0")
rr_workspace0()
