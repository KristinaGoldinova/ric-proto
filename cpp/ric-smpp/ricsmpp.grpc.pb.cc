// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-smpp/ricsmpp.proto

#include "ric-smpp/ricsmpp.pb.h"
#include "ric-smpp/ricsmpp.grpc.pb.h"

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
namespace smpp {

static const char* SMPP_method_names[] = {
  "/ric.smpp.SMPP/Send",
  "/ric.smpp.SMPP/Status",
  "/ric.smpp.SMPP/GatewayInfo",
};

std::unique_ptr< SMPP::Stub> SMPP::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SMPP::Stub> stub(new SMPP::Stub(channel));
  return stub;
}

SMPP::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Send_(SMPP_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Status_(SMPP_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GatewayInfo_(SMPP_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SMPP::Stub::Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::ric::smpp::SendResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Send_, context, request, response);
}

void SMPP::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

void SMPP::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::SendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>* SMPP::Stub::AsyncSendRaw(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::smpp::SendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>* SMPP::Stub::PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::smpp::SendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, false);
}

::grpc::Status SMPP::Stub::Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::ric::smpp::StatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Status_, context, request, response);
}

void SMPP::Stub::experimental_async::Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Status_, context, request, response, std::move(f));
}

void SMPP::Stub::experimental_async::Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::StatusResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Status_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>* SMPP::Stub::AsyncStatusRaw(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::smpp::StatusResponse>::Create(channel_.get(), cq, rpcmethod_Status_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>* SMPP::Stub::PrepareAsyncStatusRaw(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::smpp::StatusResponse>::Create(channel_.get(), cq, rpcmethod_Status_, context, request, false);
}

::grpc::Status SMPP::Stub::GatewayInfo(::grpc::ClientContext* context, const ::ric::smpp::GatewayInfoRequest& request, ::ric::smpp::GatewayInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GatewayInfo_, context, request, response);
}

void SMPP::Stub::experimental_async::GatewayInfo(::grpc::ClientContext* context, const ::ric::smpp::GatewayInfoRequest* request, ::ric::smpp::GatewayInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GatewayInfo_, context, request, response, std::move(f));
}

void SMPP::Stub::experimental_async::GatewayInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::GatewayInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GatewayInfo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::smpp::GatewayInfoResponse>* SMPP::Stub::AsyncGatewayInfoRaw(::grpc::ClientContext* context, const ::ric::smpp::GatewayInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::smpp::GatewayInfoResponse>::Create(channel_.get(), cq, rpcmethod_GatewayInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::smpp::GatewayInfoResponse>* SMPP::Stub::PrepareAsyncGatewayInfoRaw(::grpc::ClientContext* context, const ::ric::smpp::GatewayInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::smpp::GatewayInfoResponse>::Create(channel_.get(), cq, rpcmethod_GatewayInfo_, context, request, false);
}

SMPP::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMPP_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMPP::Service, ::ric::smpp::SendRequest, ::ric::smpp::SendResponse>(
          std::mem_fn(&SMPP::Service::Send), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMPP_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMPP::Service, ::ric::smpp::StatusRequest, ::ric::smpp::StatusResponse>(
          std::mem_fn(&SMPP::Service::Status), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMPP_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMPP::Service, ::ric::smpp::GatewayInfoRequest, ::ric::smpp::GatewayInfoResponse>(
          std::mem_fn(&SMPP::Service::GatewayInfo), this)));
}

SMPP::Service::~Service() {
}

::grpc::Status SMPP::Service::Send(::grpc::ServerContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SMPP::Service::Status(::grpc::ServerContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SMPP::Service::GatewayInfo(::grpc::ServerContext* context, const ::ric::smpp::GatewayInfoRequest* request, ::ric::smpp::GatewayInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace smpp

