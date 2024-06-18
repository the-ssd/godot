/* register_types.cpp */

#include "register_types.h"

#ifndef RUST_BUILD_FAILED

#include "core/object/class_db.h"
#include "summator.h"

void initialize_example_rust_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
	ClassDB::register_class<Summator>();
}

void uninitialize_example_rust_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
   // Nothing to do here in this example.
}
#else

void initialize_example_rust_module(ModuleInitializationLevel p_level) {}
void uninitialize_example_rust_module(ModuleInitializationLevel p_level) {}

#endif // RUST_BUILD_FAILED
