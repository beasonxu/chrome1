// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPUCANVASCONTEXT_IMAGEBITMAPRENDERINGCONTEXT_OFFSCREENCANVASRENDERINGCONTEXT_2D_WEBGL2_RENDERINGCONTEXT_WEBGLRENDERINGCONTEXT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPUCANVASCONTEXT_IMAGEBITMAPRENDERINGCONTEXT_OFFSCREENCANVASRENDERINGCONTEXT_2D_WEBGL2_RENDERINGCONTEXT_WEBGLRENDERINGCONTEXT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class GPUCanvasContext;
class ImageBitmapRenderingContext;
class OffscreenCanvasRenderingContext2D;
class V8UnionWebGL2RenderingContextOrWebGLRenderingContext;
class WebGL2RenderingContext;
class WebGLRenderingContext;

class MODULES_EXPORT V8UnionGPUCanvasContextOrImageBitmapRenderingContextOrOffscreenCanvasRenderingContext2DOrWebGL2RenderingContextOrWebGLRenderingContext final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kGPUCanvasContext, kImageBitmapRenderingContext, kOffscreenCanvasRenderingContext2D, kWebGL2RenderingContext, kWebGLRenderingContext
};

static V8UnionGPUCanvasContextOrImageBitmapRenderingContextOrOffscreenCanvasRenderingContext2DOrWebGL2RenderingContextOrWebGLRenderingContext* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionGPUCanvasContextOrImageBitmapRenderingContextOrOffscreenCanvasRenderingContext2DOrWebGL2RenderingContextOrWebGLRenderingContext(GPUCanvasContext* value) : content_type_(ContentType::kGPUCanvasContext), member_gpu_canvas_context_(value) {
  DCHECK(value);
}
explicit  V8UnionGPUCanvasContextOrImageBitmapRenderingContextOrOffscreenCanvasRenderingContext2DOrWebGL2RenderingContextOrWebGLRenderingContext(ImageBitmapRenderingContext* value) : content_type_(ContentType::kImageBitmapRenderingContext), member_image_bitmap_rendering_context_(value) {
  DCHECK(value);
}
explicit  V8UnionGPUCanvasContextOrImageBitmapRenderingContextOrOffscreenCanvasRenderingContext2DOrWebGL2RenderingContextOrWebGLRenderingContext(OffscreenCanvasRenderingContext2D* value) : content_type_(ContentType::kOffscreenCanvasRenderingContext2D), member_offscreen_canvas_rendering_context_2d_(value) {
  DCHECK(value);
}
explicit  V8UnionGPUCanvasContextOrImageBitmapRenderingContextOrOffscreenCanvasRenderingContext2DOrWebGL2RenderingContextOrWebGLRenderingContext(WebGL2RenderingContext* value) : content_type_(ContentType::kWebGL2RenderingContext), member_webgl2_rendering_context_(value) {
  DCHECK(value);
}
explicit  V8UnionGPUCanvasContextOrImageBitmapRenderingContextOrOffscreenCanvasRenderingContext2DOrWebGL2RenderingContextOrWebGLRenderingContext(WebGLRenderingContext* value) : content_type_(ContentType::kWebGLRenderingContext), member_webgl_rendering_context_(value) {
  DCHECK(value);
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsGPUCanvasContext() const {
  return content_type_ == ContentType::kGPUCanvasContext;
}
GPUCanvasContext* GetAsGPUCanvasContext() const {
  DCHECK_EQ(content_type_, ContentType::kGPUCanvasContext);
return member_gpu_canvas_context_;
}
void Set(GPUCanvasContext* value) {
  DCHECK(value);
Clear();
member_gpu_canvas_context_ = value;
content_type_ = ContentType::kGPUCanvasContext;
}

bool IsImageBitmapRenderingContext() const {
  return content_type_ == ContentType::kImageBitmapRenderingContext;
}
ImageBitmapRenderingContext* GetAsImageBitmapRenderingContext() const {
  DCHECK_EQ(content_type_, ContentType::kImageBitmapRenderingContext);
return member_image_bitmap_rendering_context_;
}
void Set(ImageBitmapRenderingContext* value) {
  DCHECK(value);
Clear();
member_image_bitmap_rendering_context_ = value;
content_type_ = ContentType::kImageBitmapRenderingContext;
}

bool IsOffscreenCanvasRenderingContext2D() const {
  return content_type_ == ContentType::kOffscreenCanvasRenderingContext2D;
}
OffscreenCanvasRenderingContext2D* GetAsOffscreenCanvasRenderingContext2D() const {
  DCHECK_EQ(content_type_, ContentType::kOffscreenCanvasRenderingContext2D);
return member_offscreen_canvas_rendering_context_2d_;
}
void Set(OffscreenCanvasRenderingContext2D* value) {
  DCHECK(value);
Clear();
member_offscreen_canvas_rendering_context_2d_ = value;
content_type_ = ContentType::kOffscreenCanvasRenderingContext2D;
}

bool IsWebGL2RenderingContext() const {
  return content_type_ == ContentType::kWebGL2RenderingContext;
}
WebGL2RenderingContext* GetAsWebGL2RenderingContext() const {
  DCHECK_EQ(content_type_, ContentType::kWebGL2RenderingContext);
return member_webgl2_rendering_context_;
}
void Set(WebGL2RenderingContext* value) {
  DCHECK(value);
Clear();
member_webgl2_rendering_context_ = value;
content_type_ = ContentType::kWebGL2RenderingContext;
}

bool IsWebGLRenderingContext() const {
  return content_type_ == ContentType::kWebGLRenderingContext;
}
WebGLRenderingContext* GetAsWebGLRenderingContext() const {
  DCHECK_EQ(content_type_, ContentType::kWebGLRenderingContext);
return member_webgl_rendering_context_;
}
void Set(WebGLRenderingContext* value) {
  DCHECK(value);
Clear();
member_webgl_rendering_context_ = value;
content_type_ = ContentType::kWebGLRenderingContext;
}

bool IsV8UnionWebGL2RenderingContextOrWebGLRenderingContext() const {
  return content_type_ == ContentType::kWebGL2RenderingContext || content_type_ == ContentType::kWebGLRenderingContext;
}
V8UnionWebGL2RenderingContextOrWebGLRenderingContext* GetAsV8UnionWebGL2RenderingContextOrWebGLRenderingContext() const;
void Set(const V8UnionWebGL2RenderingContextOrWebGLRenderingContext* value);
bool IsV8XRWebGLRenderingContext() const {
  return IsV8UnionWebGL2RenderingContextOrWebGLRenderingContext();
}
V8UnionWebGL2RenderingContextOrWebGLRenderingContext* GetAsV8XRWebGLRenderingContext() const {
  return GetAsV8UnionWebGL2RenderingContextOrWebGLRenderingContext();
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(GPUCanvasContext or ImageBitmapRenderingContext or OffscreenCanvasRenderingContext2D or WebGL2RenderingContext or WebGLRenderingContext)";
}

ContentType content_type_;

Member<GPUCanvasContext> member_gpu_canvas_context_;
Member<ImageBitmapRenderingContext> member_image_bitmap_rendering_context_;
Member<OffscreenCanvasRenderingContext2D> member_offscreen_canvas_rendering_context_2d_;
Member<WebGL2RenderingContext> member_webgl2_rendering_context_;
Member<WebGLRenderingContext> member_webgl_rendering_context_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPUCANVASCONTEXT_IMAGEBITMAPRENDERINGCONTEXT_OFFSCREENCANVASRENDERINGCONTEXT_2D_WEBGL2_RENDERINGCONTEXT_WEBGLRENDERINGCONTEXT_H_
