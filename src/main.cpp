#include "main.h"

using namespace godot;

void Leakage::_register_methods()
{
    register_method("attempt_some_leakage", &Leakage::attempt_some_leakage);
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

void Leakage::attempt_some_leakage(Array p_array)
{
    for (int i = 0; i <= p_array.size() - 1; i++) {
        switch (p_array[i].get_type()) {
            case Variant::POOL_BYTE_ARRAY: {
                PoolByteArray binding = ((const PoolByteArray &)p_array);
                PoolByteArray::Read r = binding.read();
            }
        }
    }
}

void Leakage::other_leakage(Dictionary p_row_dict)
{
    Array param_bindings = p_row_dict.values();
    return attempt_some_leakage(param_bindings);
}