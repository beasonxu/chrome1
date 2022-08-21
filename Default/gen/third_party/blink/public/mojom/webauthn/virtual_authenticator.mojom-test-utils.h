// third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace test {
namespace mojom {


class BLINK_COMMON_EXPORT VirtualAuthenticatorInterceptorForTesting : public VirtualAuthenticator {
  virtual VirtualAuthenticator* GetForwardingInterface() = 0;
  void GetUniqueId(GetUniqueIdCallback callback) override;
  void AddRegistration(RegisteredKeyPtr key, AddRegistrationCallback callback) override;
  void GetRegistrations(GetRegistrationsCallback callback) override;
  void RemoveRegistration(const std::vector<uint8_t>& key_handle, RemoveRegistrationCallback callback) override;
  void ClearRegistrations(ClearRegistrationsCallback callback) override;
  void GetLargeBlob(const std::vector<uint8_t>& key_handle, GetLargeBlobCallback callback) override;
  void SetLargeBlob(const std::vector<uint8_t>& key_handle, const std::vector<uint8_t>& blob, SetLargeBlobCallback callback) override;
  void SetUserVerified(bool verified, SetUserVerifiedCallback callback) override;
};
class BLINK_COMMON_EXPORT VirtualAuthenticatorAsyncWaiter {
 public:
  explicit VirtualAuthenticatorAsyncWaiter(VirtualAuthenticator* proxy);

  VirtualAuthenticatorAsyncWaiter(const VirtualAuthenticatorAsyncWaiter&) = delete;
  VirtualAuthenticatorAsyncWaiter& operator=(const VirtualAuthenticatorAsyncWaiter&) = delete;

  ~VirtualAuthenticatorAsyncWaiter();
  void GetUniqueId(
      std::string* out_id);
  void AddRegistration(
      RegisteredKeyPtr key, bool* out_added);
  void GetRegistrations(
      std::vector<RegisteredKeyPtr>* out_keys);
  void RemoveRegistration(
      const std::vector<uint8_t>& key_handle, bool* out_removed);
  void ClearRegistrations(
      );
  void GetLargeBlob(
      const std::vector<uint8_t>& key_handle, absl::optional<std::vector<uint8_t>>* out_blob);
  void SetLargeBlob(
      const std::vector<uint8_t>& key_handle, const std::vector<uint8_t>& blob, bool* out_set);
  void SetUserVerified(
      bool verified);

 private:
  VirtualAuthenticator* const proxy_;
};


class BLINK_COMMON_EXPORT VirtualAuthenticatorManagerInterceptorForTesting : public VirtualAuthenticatorManager {
  virtual VirtualAuthenticatorManager* GetForwardingInterface() = 0;
  void CreateAuthenticator(VirtualAuthenticatorOptionsPtr options, CreateAuthenticatorCallback callback) override;
  void GetAuthenticators(GetAuthenticatorsCallback callback) override;
  void RemoveAuthenticator(const std::string& id, RemoveAuthenticatorCallback callback) override;
  void ClearAuthenticators(ClearAuthenticatorsCallback callback) override;
};
class BLINK_COMMON_EXPORT VirtualAuthenticatorManagerAsyncWaiter {
 public:
  explicit VirtualAuthenticatorManagerAsyncWaiter(VirtualAuthenticatorManager* proxy);

  VirtualAuthenticatorManagerAsyncWaiter(const VirtualAuthenticatorManagerAsyncWaiter&) = delete;
  VirtualAuthenticatorManagerAsyncWaiter& operator=(const VirtualAuthenticatorManagerAsyncWaiter&) = delete;

  ~VirtualAuthenticatorManagerAsyncWaiter();
  void CreateAuthenticator(
      VirtualAuthenticatorOptionsPtr options, ::mojo::PendingRemote<VirtualAuthenticator>* out_authenticator);
  void GetAuthenticators(
      std::vector<::mojo::PendingRemote<VirtualAuthenticator>>* out_authenticators);
  void RemoveAuthenticator(
      const std::string& id, bool* out_removed);
  void ClearAuthenticators(
      );

 private:
  VirtualAuthenticatorManager* const proxy_;
};




}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_TEST_UTILS_H_