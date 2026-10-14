cmake_minimum_required(VERSION 3.10.0)
project(rtow VERSION 0.1.0 LANGUAGES C CXX)

add_executable(rtow main.cc
    vec3.h
    color.h
    ray.h
    hittable.h
    sphere.h
    hittable_list.h
    rtow.h)

