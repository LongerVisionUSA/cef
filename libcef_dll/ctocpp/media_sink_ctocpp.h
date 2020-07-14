// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=81437a10eeb422cf962af49b782275dd24bea500$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_MEDIA_SINK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MEDIA_SINK_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_media_router_capi.h"
#include "include/cef_media_router.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefMediaSinkCToCpp : public CefCToCppRefCounted<CefMediaSinkCToCpp,
                                                      CefMediaSink,
                                                      cef_media_sink_t> {
 public:
  CefMediaSinkCToCpp();
  virtual ~CefMediaSinkCToCpp();

  // CefMediaSink methods.
  CefString GetId() OVERRIDE;
  bool IsValid() OVERRIDE;
  CefString GetName() OVERRIDE;
  CefString GetDescription() OVERRIDE;
  IconType GetIconType() OVERRIDE;
  void GetDeviceInfo(
      CefRefPtr<CefMediaSinkDeviceInfoCallback> callback) OVERRIDE;
  bool IsCastSink() OVERRIDE;
  bool IsDialSink() OVERRIDE;
  bool IsCompatibleWith(CefRefPtr<CefMediaSource> source) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_MEDIA_SINK_CTOCPP_H_
