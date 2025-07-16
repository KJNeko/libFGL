//
// Created by kj16609 on 7/16/25.
//
#pragma once

#ifdef __cpp_pp_embed
#if __cpp_pp_embed >= 202502L
#define FGL_HAS_EMBED 1
#else
#define FGL_HAS_EMBED 0
#endif
#endif

#ifndef FGL_HAS_EMBED
#define FGL_HAS_EMBED 0
#endif
