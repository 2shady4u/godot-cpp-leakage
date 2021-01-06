#ifndef GDSQLITE_H
#define GDSQLITE_H

#include <Godot.hpp>
#include <Reference.hpp>
#include <FuncRef.hpp>
#include <ProjectSettings.hpp>
#include <Directory.hpp>
#include <JSON.hpp>
#include <JSONParseResult.hpp>

namespace godot {

class Leakage : public Reference {
    GODOT_CLASS(Leakage, Reference)

public:
    static void _register_methods();

    Leakage();
    ~Leakage();

    void _init();

    void attempt_some_leakage(PoolByteArray);
};

}

#endif
