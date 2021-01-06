#include "main.h"

using namespace godot;

void Leakage::_register_methods()
{

    register_method("attempt_some_leakage", &Leakage::attempt_some_leakage);
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

void Leakage::attempt_some_leakage(PoolByteArray p_array)
{
    PoolByteArray binding = ((const PoolByteArray &)p_array);
    PoolByteArray::Read r = binding.read();
}