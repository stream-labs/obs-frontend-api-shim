// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
) {
	switch (ul_reason_for_call) {
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
}

extern "C" {
	#define EXPORT __declspec(dllexport)

	EXPORT void* obs_frontend_get_main_window(void) {
		return nullptr;
	}

	EXPORT void *obs_frontend_get_main_window_handle(void) {
		return nullptr;
	}

	EXPORT char **obs_frontend_get_scene_names(void) {
		return nullptr;
	}

	EXPORT void obs_frontend_get_scenes(void *sources) {
		return;
	}

	EXPORT void *obs_frontend_get_current_scene(void) {
		return nullptr;
	}

	EXPORT void obs_frontend_set_current_scene(void *scene) {
		return;
	}

	EXPORT void obs_frontend_get_transitions(void *sources) {
		return;
	}

	EXPORT void *obs_frontend_get_current_transition(void) {
		return nullptr;
	}

	EXPORT void obs_frontend_set_current_transition(void *transition) {
		return;
	}

	EXPORT char **obs_frontend_get_scene_collections(void) {
		return nullptr;
	}

	EXPORT char *obs_frontend_get_current_scene_collection(void) {
		return nullptr;
	}

	EXPORT void obs_frontend_set_current_scene_collection(const char *collection) {
		return;
	}

	EXPORT char **obs_frontend_get_profiles(void) {
		return nullptr;
	}

	EXPORT char *obs_frontend_get_current_profile(void) {
		return nullptr;
	}

	EXPORT void obs_frontend_set_current_profile(const char *profile) {
		return;
	}

	EXPORT void obs_frontend_streaming_start(void) {
		return;
	}

	EXPORT void obs_frontend_streaming_stop(void) {
		return;
	}

	EXPORT bool obs_frontend_streaming_active(void) {
		return false;
	}


	EXPORT void obs_frontend_recording_start(void) {
		return;
	}

	EXPORT void obs_frontend_recording_stop(void) {
		return;
	}

	EXPORT bool obs_frontend_recording_active(void) {
		return false;
	}


	EXPORT void obs_frontend_replay_buffer_start(void) {
		return;
	}

	EXPORT void obs_frontend_replay_buffer_stop(void) {
		return;
	}

	EXPORT bool obs_frontend_replay_buffer_active(void) {
		return false;
	}


	typedef void(*obs_frontend_cb)(void *private_data);

	EXPORT void *obs_frontend_add_tools_menu_qaction(const char *name) {
		return nullptr;
	}

	EXPORT void obs_frontend_add_tools_menu_item(const char *name,
		obs_frontend_cb callback, void *private_data) {
		return;
	}

	typedef void(*obs_frontend_event_cb)(enum obs_frontend_event event,
		void *private_data);

	EXPORT void obs_frontend_add_event_callback(obs_frontend_event_cb callback,
		void *private_data) {
		return;
	}

	EXPORT void obs_frontend_remove_event_callback(obs_frontend_event_cb callback,
		void *private_data) {
		return;
	}


	typedef void(*obs_frontend_save_cb)(void *save_data, bool saving,
		void *private_data);

	EXPORT void obs_frontend_save(void) {
		return;
	}

	EXPORT void obs_frontend_add_save_callback(obs_frontend_save_cb callback,
		void *private_data) {
		return;
	}

	EXPORT void obs_frontend_remove_save_callback(obs_frontend_save_cb callback,
		void *private_data) {
		return;
	}

	EXPORT void *obs_frontend_get_streaming_output(void) {
		return nullptr;
	}

	EXPORT void *obs_frontend_get_recording_output(void) {
		return nullptr;
	}

	EXPORT void *obs_frontend_get_replay_buffer_output(void) {
		return nullptr;
	}


	EXPORT void *obs_frontend_get_profile_config(void) {
		return nullptr;
	}

	EXPORT void *obs_frontend_get_global_config(void) {
		return nullptr;
	}

	typedef bool(*obs_frontend_translate_ui_cb)(const char *text,
		const char **out);

	EXPORT void obs_frontend_push_ui_translation(
		obs_frontend_translate_ui_cb translate) {
		return;
	}

	EXPORT void obs_frontend_pop_ui_translation(void) {
		return;
	}
}
