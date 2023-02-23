
cc_library(
    name = "window",
    srcs = ["window/window.cc"],
    hdrs = ["window/window.h"],
    deps = [
      "//third_party/glfw",
      "//third_party/glm",
      "@rules_vulkan//vulkan:vulkan_cc_library"
    ],
    visibility = [
      "//graphics/src:__subpackages__",
      "//graphics/core:__subpackages__"
    ],
)

cc_library(
  name = "app",
  srcs = ["app/app.cc"],
  hdrs = ["app/app.h"],
  deps = [
    "//graphics/core:window"
  ],
  visibility = [
    "//graphics/src:__subpackages__",
  ]
)