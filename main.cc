#include "rtow.h"

#include "camera.h"
#include "hittable.h"
#include "hittable_list.h"
#include "material.h"
#include "sphere.h"

int main() {
    // -- world -- 

    hittable_list world;

    // materials
    shared_ptr<lambertian> material_ground = make_shared<lambertian>(color(0.8, 0.8, 0.0));
    shared_ptr<lambertian> material_center = make_shared<lambertian>(color(0.1, 0.2, 0.5));
    shared_ptr<metal> material_left = make_shared<metal>(color(0.8, 0.8, 0.8));
    shared_ptr<metal> material_right = make_shared<metal>(color(0.8, 0.6, 0.2));

    world.add(make_shared<sphere>(point3(  0.0, -100.5, -1.0 ), 100.0, material_ground));
    world.add(make_shared<sphere>(point3(  0.0,    0.0, -1.2 ),   0.5, material_center));
    world.add(make_shared<sphere>(point3( -1.0,    0.0, -1.0 ),   0.5, material_left));
    world.add(make_shared<sphere>(point3(  1.0,    0.0, -1.0 ),   0.5, material_right));

    // -- camera -- 

    camera cam;
    
    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 480;
    cam.samples_per_pixel = 100;
    cam.max_depth = 50;

    cam.render(world);
}