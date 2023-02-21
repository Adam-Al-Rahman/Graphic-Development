"""Provides the repository macro to import GLFW."""

load("//third_party:repo.bzl", "rr_http_archive")

def repo():
    """Imports GLFW."""

    GLFW_VERSION = "3.3.5"
    GLFW_SHA256 = "a89bb6074bc12bc12fcd322dcf848af81b679ccdc695f70b29ca8a9aa066684b"

    rr_http_archive(
        name = "glfw",
        build_file = "@//third_party/glfw:glfw.BUILD",
        sha256 = GLFW_SHA256,
        strip_prefix = "glfw-{}".format(GLFW_VERSION),
        url = "https://github.com/glfw/glfw/archive/{}.zip".format(GLFW_VERSION),
    )





