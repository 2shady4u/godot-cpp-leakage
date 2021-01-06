#include "main.h"

using namespace godot;

void Leakage::_register_methods()
{
    register_method("other_leakage", &Leakage::other_leakage);
}

Leakage::Leakage()
{
}

Leakage::~Leakage()
{
}

void Leakage::_init()
{
}

void Leakage::other_leakage(Dictionary p_row_dict)
{
    Array p_array = p_row_dict.values();
}