// You will write all your code for this tutorial here!
#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_keypad.h>


int main () {
    bn::core::init();

    bn::backdrop::set_color(bn::color(0, 31, 0)); // set initial color to green

    while(true) {
        if (bn::keypad::a_held() && bn::keypad::b_held()) { //  a and b are held
            bn::backdrop::set_color(bn::color(31, 0, 31)); // set to magenta
        } else if (bn::keypad::a_held()) { // only a is held
            bn::backdrop::set_color(bn::color(0, 0, 31)); // set to blue
        } else if (bn::keypad::b_held()) { // only b is held
            bn::backdrop::set_color(bn::color(31, 0, 0)); // set to red
        } else { // neither a or b is held
            bn::backdrop::set_color(bn::color(0, 31, 0)); // reset to green
        }

        bn::core::update();
    }
}