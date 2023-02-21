"""Provides the repository macro to import GLM."""

load("//third_party:repo.bzl", "rr_http_archive")

def repo():
    """Imports GLM."""

    GLM_VERSION = "0.9.9.8"
    GLM_SHA256 = "4605259c22feadf35388c027f07b345ad3aa3b12631a5a316347f7566c6f1839"

    rr_http_archive(
        name = "glm",
        build_file = "@//third_party/glm:glm.BUILD",
        sha256 = GLM_SHA256,
        strip_prefix = "glm-{}".format(GLM_VERSION),
        url = "https://github.com/g-truc/glm/archive/{}.zip".format(GLM_VERSION),
    )