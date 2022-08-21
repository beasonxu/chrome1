#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/torque/runtime-support.h"
// Required Builtins:
#include "torque-generated/src/builtins/typed-array-with-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-with-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-with.tq?l=6&c=1
const char* kBuiltinNameWith_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.prototype.with";}

TF_BUILTIN(TypedArrayPrototypeWith, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, UintPtrT, UintPtrT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, UintPtrT, UintPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<JSTypedArray> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label5);
    ca_.Goto(&block7);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotTypedArray, kBuiltinNameWith_0(state_));
  }

  TNode<JSTypedArray> tmp6;
  TNode<UintPtrT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label8(&ca_);
    std::tie(tmp6, tmp7) = EnsureAttachedAndReadLength_0(state_, TNode<JSTypedArray>{tmp4}, &label8).Flatten();
    ca_.Goto(&block9);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameWith_0(state_));
  }

  TNode<Int32T> tmp9;
  TNode<BoolT> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp9 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp4});
    tmp10 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp9});
    ca_.Branch(tmp10, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<BigInt> tmp11;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp11 = CodeStubAssembler(state_).ToBigInt(TNode<Context>{parameter0}, TNode<Object>{tmp3});
    ca_.Goto(&block13, tmp11);
  }

  TNode<Number> tmp12;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp12 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp3});
    ca_.Goto(&block13, tmp12);
  }

  TNode<Object> phi_bb13_7;
  TNode<Number> tmp13;
  TNode<UintPtrT> tmp14;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7);
    tmp13 = ToInteger_Inline_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    compiler::CodeAssemblerLabel label15(&ca_);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp14 = ConvertRelativeIndex_1(state_, TNode<Number>{tmp13}, TNode<UintPtrT>{tmp7}, &label15, &label16);
    ca_.Goto(&block14);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block15);
    }
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block16);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block6);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block6);
  }

  TNode<JSTypedArray> tmp17;
  TNode<UintPtrT> tmp18;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    compiler::CodeAssemblerLabel label19(&ca_);
    std::tie(tmp17, tmp18) = EnsureAttachedAndReadLength_0(state_, TNode<JSTypedArray>{tmp4}, &label19).Flatten();
    ca_.Goto(&block17);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block6);
  }

  TNode<BoolT> tmp20;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp20 = CodeStubAssembler(state_).UintPtrGreaterThanOrEqual(TNode<UintPtrT>{tmp14}, TNode<UintPtrT>{tmp18});
    ca_.Branch(tmp20, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block6);
  }

  TNode<JSTypedArray> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<Int32T> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<BoolT> tmp26;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp21 = TypedArrayCreateSameType_0(state_, TNode<Context>{parameter0}, TNode<JSTypedArray>{tmp4}, TNode<UintPtrT>{tmp7});
    tmp22 = CodeStubAssembler(state_).UintPtrMin(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp18});
    std::tie(tmp23, tmp24) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<JSTypedArray>{tmp21}).Flatten();
    tmp25 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp26 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp25});
    ca_.Branch(tmp26, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.Goto(&block22);
  }

  TNode<UintPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<BoolT> tmp29;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp27 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp28 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp27}, TNode<UintPtrT>{tmp23});
    tmp29 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp28});
    ca_.Branch(tmp29, &block26, std::vector<compiler::Node*>{}, &block27, std::vector<compiler::Node*>{});
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.Goto(&block22);
  }

  TNode<UintPtrT> tmp30;
  TNode<RawPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<JSArrayBuffer> tmp33;
  TNode<BoolT> tmp34;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp30 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp23});
    tmp31 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp4});
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp33 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp4, tmp32});
    tmp34 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp33});
    ca_.Branch(tmp34, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<RawPtrT> tmp35;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp35 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp21});
    TypedArrayBuiltinsAssembler(state_).CallCRelaxedMemmove(TNode<RawPtrT>{tmp35}, TNode<RawPtrT>{tmp31}, TNode<UintPtrT>{tmp30});
    ca_.Goto(&block30);
  }

  TNode<RawPtrT> tmp36;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp36 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp21});
    TypedArrayBuiltinsAssembler(state_).CallCMemmove(TNode<RawPtrT>{tmp36}, TNode<RawPtrT>{tmp31}, TNode<UintPtrT>{tmp30});
    ca_.Goto(&block30);
  }

  TNode<Int32T> tmp37;
  TNode<BuiltinPtr> tmp38;
  TNode<BuiltinPtr> tmp39;
  TNode<BuiltinPtr> tmp40;
  TNode<Smi> tmp41;
  TNode<Smi> tmp42;
  TNode<BoolT> tmp43;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp37 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp21});
    std::tie(tmp38, tmp39, tmp40) = GetTypedArrayAccessor_0(state_, TNode<Int32T>{tmp37}).Flatten();
tmp41 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(3)).descriptor(), tmp40, parameter0, tmp21, tmp14, phi_bb13_7));
    tmp42 = kStoreFailureArrayDetached_0(state_);
    tmp43 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp41}, TNode<Smi>{tmp42});
    ca_.Branch(tmp43, &block34, std::vector<compiler::Node*>{}, &block35, std::vector<compiler::Node*>{});
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    ca_.Goto(&block42, tmp22);
  }

  TNode<UintPtrT> phi_bb42_23;
  TNode<IntPtrT> tmp44;
  TNode<UintPtrT> tmp45;
  TNode<BoolT> tmp46;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_23);
    tmp44 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp45 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp21, tmp44});
    tmp46 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{phi_bb42_23}, TNode<UintPtrT>{tmp45});
    ca_.Branch(tmp46, &block40, std::vector<compiler::Node*>{phi_bb42_23}, &block41, std::vector<compiler::Node*>{phi_bb42_23});
  }

  TNode<UintPtrT> phi_bb40_23;
  TNode<Oddball> tmp47;
  TNode<Smi> tmp48;
  TNode<Smi> tmp49;
  TNode<BoolT> tmp50;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_23);
    tmp47 = Undefined_0(state_);
tmp48 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(3)).descriptor(), tmp40, parameter0, tmp21, phi_bb40_23, tmp47));
    tmp49 = kStoreFailureArrayDetached_0(state_);
    tmp50 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp48}, TNode<Smi>{tmp49});
    ca_.Branch(tmp50, &block46, std::vector<compiler::Node*>{phi_bb40_23, phi_bb40_23, phi_bb40_23}, &block47, std::vector<compiler::Node*>{phi_bb40_23, phi_bb40_23, phi_bb40_23});
  }

  TNode<UintPtrT> phi_bb46_23;
  TNode<UintPtrT> phi_bb46_29;
  TNode<UintPtrT> phi_bb46_33;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_23, &phi_bb46_29, &phi_bb46_33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<UintPtrT> phi_bb47_23;
  TNode<UintPtrT> phi_bb47_29;
  TNode<UintPtrT> phi_bb47_33;
  TNode<UintPtrT> tmp51;
  TNode<UintPtrT> tmp52;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_23, &phi_bb47_29, &phi_bb47_33);
    tmp51 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp52 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{phi_bb47_23}, TNode<UintPtrT>{tmp51});
    ca_.Goto(&block42, tmp52);
  }

  TNode<UintPtrT> phi_bb41_23;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_23);
    arguments.PopAndReturn(tmp21);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidTypedArrayIndex);
  }
}

} // namespace internal
} // namespace v8
