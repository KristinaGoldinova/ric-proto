// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-bill/ricbill.proto

#include "ric-bill/ricbill.pb.h"
#include "ric-bill/ricbill.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ric {
namespace bill {

static const char* Billing_method_names[] = {
  "/ric.bill.Billing/SetupAccount",
  "/ric.bill.Billing/VerifyAccount",
  "/ric.bill.Billing/CloseAccount",
  "/ric.bill.Billing/CreateSubscription",
  "/ric.bill.Billing/UpdateSubscription",
  "/ric.bill.Billing/CancelSubscription",
  "/ric.bill.Billing/ResumeSubscription",
  "/ric.bill.Billing/ActivateSubscription",
  "/ric.bill.Billing/DeactivateSubscription",
};

std::unique_ptr< Billing::Stub> Billing::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Billing::Stub> stub(new Billing::Stub(channel));
  return stub;
}

Billing::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetupAccount_(Billing_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_VerifyAccount_(Billing_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CloseAccount_(Billing_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateSubscription_(Billing_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateSubscription_(Billing_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CancelSubscription_(Billing_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ResumeSubscription_(Billing_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ActivateSubscription_(Billing_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeactivateSubscription_(Billing_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Billing::Stub::SetupAccount(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::ric::bill::SetupResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetupAccount_, context, request, response);
}

void Billing::Stub::experimental_async::SetupAccount(::grpc::ClientContext* context, const ::ric::bill::SetupRequest* request, ::ric::bill::SetupResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetupAccount_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::SetupAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SetupResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetupAccount_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SetupResponse>* Billing::Stub::AsyncSetupAccountRaw(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SetupResponse>::Create(channel_.get(), cq, rpcmethod_SetupAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SetupResponse>* Billing::Stub::PrepareAsyncSetupAccountRaw(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SetupResponse>::Create(channel_.get(), cq, rpcmethod_SetupAccount_, context, request, false);
}

::grpc::Status Billing::Stub::VerifyAccount(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::ric::bill::SetupResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_VerifyAccount_, context, request, response);
}

void Billing::Stub::experimental_async::VerifyAccount(::grpc::ClientContext* context, const ::ric::bill::SetupRequest* request, ::ric::bill::SetupResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_VerifyAccount_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::VerifyAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SetupResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_VerifyAccount_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SetupResponse>* Billing::Stub::AsyncVerifyAccountRaw(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SetupResponse>::Create(channel_.get(), cq, rpcmethod_VerifyAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SetupResponse>* Billing::Stub::PrepareAsyncVerifyAccountRaw(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SetupResponse>::Create(channel_.get(), cq, rpcmethod_VerifyAccount_, context, request, false);
}

::grpc::Status Billing::Stub::CloseAccount(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::ric::bill::SetupResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CloseAccount_, context, request, response);
}

void Billing::Stub::experimental_async::CloseAccount(::grpc::ClientContext* context, const ::ric::bill::SetupRequest* request, ::ric::bill::SetupResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CloseAccount_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::CloseAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SetupResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CloseAccount_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SetupResponse>* Billing::Stub::AsyncCloseAccountRaw(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SetupResponse>::Create(channel_.get(), cq, rpcmethod_CloseAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SetupResponse>* Billing::Stub::PrepareAsyncCloseAccountRaw(::grpc::ClientContext* context, const ::ric::bill::SetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SetupResponse>::Create(channel_.get(), cq, rpcmethod_CloseAccount_, context, request, false);
}

::grpc::Status Billing::Stub::CreateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::ric::bill::SubscriptionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateSubscription_, context, request, response);
}

void Billing::Stub::experimental_async::CreateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateSubscription_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::CreateSubscription(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateSubscription_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::AsyncCreateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_CreateSubscription_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::PrepareAsyncCreateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_CreateSubscription_, context, request, false);
}

::grpc::Status Billing::Stub::UpdateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::ric::bill::SubscriptionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateSubscription_, context, request, response);
}

void Billing::Stub::experimental_async::UpdateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateSubscription_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::UpdateSubscription(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateSubscription_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::AsyncUpdateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_UpdateSubscription_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::PrepareAsyncUpdateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_UpdateSubscription_, context, request, false);
}

::grpc::Status Billing::Stub::CancelSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::ric::bill::SubscriptionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CancelSubscription_, context, request, response);
}

void Billing::Stub::experimental_async::CancelSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CancelSubscription_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::CancelSubscription(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CancelSubscription_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::AsyncCancelSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_CancelSubscription_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::PrepareAsyncCancelSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_CancelSubscription_, context, request, false);
}

::grpc::Status Billing::Stub::ResumeSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::ric::bill::SubscriptionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ResumeSubscription_, context, request, response);
}

void Billing::Stub::experimental_async::ResumeSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ResumeSubscription_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::ResumeSubscription(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ResumeSubscription_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::AsyncResumeSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_ResumeSubscription_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::PrepareAsyncResumeSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_ResumeSubscription_, context, request, false);
}

::grpc::Status Billing::Stub::ActivateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::ric::bill::SubscriptionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ActivateSubscription_, context, request, response);
}

void Billing::Stub::experimental_async::ActivateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ActivateSubscription_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::ActivateSubscription(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ActivateSubscription_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::AsyncActivateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_ActivateSubscription_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::PrepareAsyncActivateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_ActivateSubscription_, context, request, false);
}

::grpc::Status Billing::Stub::DeactivateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::ric::bill::SubscriptionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeactivateSubscription_, context, request, response);
}

void Billing::Stub::experimental_async::DeactivateSubscription(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeactivateSubscription_, context, request, response, std::move(f));
}

void Billing::Stub::experimental_async::DeactivateSubscription(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::bill::SubscriptionResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeactivateSubscription_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::AsyncDeactivateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_DeactivateSubscription_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::bill::SubscriptionResponse>* Billing::Stub::PrepareAsyncDeactivateSubscriptionRaw(::grpc::ClientContext* context, const ::ric::bill::SubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::bill::SubscriptionResponse>::Create(channel_.get(), cq, rpcmethod_DeactivateSubscription_, context, request, false);
}

Billing::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SetupRequest, ::ric::bill::SetupResponse>(
          std::mem_fn(&Billing::Service::SetupAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SetupRequest, ::ric::bill::SetupResponse>(
          std::mem_fn(&Billing::Service::VerifyAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SetupRequest, ::ric::bill::SetupResponse>(
          std::mem_fn(&Billing::Service::CloseAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SubscriptionRequest, ::ric::bill::SubscriptionResponse>(
          std::mem_fn(&Billing::Service::CreateSubscription), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SubscriptionRequest, ::ric::bill::SubscriptionResponse>(
          std::mem_fn(&Billing::Service::UpdateSubscription), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SubscriptionRequest, ::ric::bill::SubscriptionResponse>(
          std::mem_fn(&Billing::Service::CancelSubscription), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SubscriptionRequest, ::ric::bill::SubscriptionResponse>(
          std::mem_fn(&Billing::Service::ResumeSubscription), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SubscriptionRequest, ::ric::bill::SubscriptionResponse>(
          std::mem_fn(&Billing::Service::ActivateSubscription), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Billing_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Billing::Service, ::ric::bill::SubscriptionRequest, ::ric::bill::SubscriptionResponse>(
          std::mem_fn(&Billing::Service::DeactivateSubscription), this)));
}

Billing::Service::~Service() {
}

::grpc::Status Billing::Service::SetupAccount(::grpc::ServerContext* context, const ::ric::bill::SetupRequest* request, ::ric::bill::SetupResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::VerifyAccount(::grpc::ServerContext* context, const ::ric::bill::SetupRequest* request, ::ric::bill::SetupResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::CloseAccount(::grpc::ServerContext* context, const ::ric::bill::SetupRequest* request, ::ric::bill::SetupResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::CreateSubscription(::grpc::ServerContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::UpdateSubscription(::grpc::ServerContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::CancelSubscription(::grpc::ServerContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::ResumeSubscription(::grpc::ServerContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::ActivateSubscription(::grpc::ServerContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Billing::Service::DeactivateSubscription(::grpc::ServerContext* context, const ::ric::bill::SubscriptionRequest* request, ::ric::bill::SubscriptionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace bill

