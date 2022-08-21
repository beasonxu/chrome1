// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_WEBGL2_RENDERINGCONTEXT_WEBGLRENDERINGCONTEXT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_WEBGL2_RENDERINGCONTEXT_WEBGLRENDERINGCONTEXT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class WebGL2RenderingContext;
class WebGLRenderingContext;

class MODULES_EXPORT V8UnionWebGL2RenderingContextOrWebGLRenderingContext final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kWebGL2RenderingContext, kWebGLRenderingContext
};

static V8UnionWebGL2RenderingContextOrWebGLRenderingContext* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionWebGL2RenderingContextOrWebGLRenderingContext(WebGL2RenderingContext* value) : content_type_(ContentType::kWebGL2RenderingContext), member_webgl2_rendering_context_(value) {
  DCHECK(value);
}
explicit  V8UnionWebGL2RenderingContextOrWebGLRenderingContext(WebGLRenderingContext* value) : content_type_(ContentType::kWebGLRenderingContext), member_webgl_rendering_context_(value) {
  DCHECK(value);
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
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


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(WebGL2RenderingContext or WebGLRenderingContext)";
}

ContentType content_type_;

Member<WebGL2RenderingContext> member_webgl2_rendering_context_;
Member<WebGLRenderingContext> member_webgl_rendering_context_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_WEBGL2_RENDERINGCONTEXT_WEBGLRENDERINGCONTEXT_H_
