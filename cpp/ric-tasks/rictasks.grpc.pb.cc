// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-tasks/rictasks.proto

#include "ric-tasks/rictasks.pb.h"
#include "ric-tasks/rictasks.grpc.pb.h"

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
namespace tasks {

static const char* Tasks_method_names[] = {
  "/ric.tasks.Tasks/Create",
  "/ric.tasks.Tasks/Get",
  "/ric.tasks.Tasks/Update",
  "/ric.tasks.Tasks/Delete",
  "/ric.tasks.Tasks/UpdateOrder",
  "/ric.tasks.Tasks/ChangeStatus",
};

std::unique_ptr< Tasks::Stub> Tasks::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Tasks::Stub> stub(new Tasks::Stub(channel));
  return stub;
}

Tasks::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Create_(Tasks_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Get_(Tasks_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Update_(Tasks_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Delete_(Tasks_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateOrder_(Tasks_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ChangeStatus_(Tasks_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Tasks::Stub::Create(::grpc::ClientContext* context, const ::ric::tasks::CreateRequest& request, ::ric::tasks::CreateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Create_, context, request, response);
}

void Tasks::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::ric::tasks::CreateRequest* request, ::ric::tasks::CreateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void Tasks::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::tasks::CreateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::CreateResponse>* Tasks::Stub::AsyncCreateRaw(::grpc::ClientContext* context, const ::ric::tasks::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::CreateResponse>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::CreateResponse>* Tasks::Stub::PrepareAsyncCreateRaw(::grpc::ClientContext* context, const ::ric::tasks::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::CreateResponse>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, false);
}

::grpc::Status Tasks::Stub::Get(::grpc::ClientContext* context, const ::ric::tasks::GetRequest& request, ::ric::tasks::GetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Get_, context, request, response);
}

void Tasks::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::ric::tasks::GetRequest* request, ::ric::tasks::GetResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void Tasks::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::tasks::GetResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::GetResponse>* Tasks::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::ric::tasks::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::GetResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::GetResponse>* Tasks::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::ric::tasks::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::GetResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, false);
}

::grpc::Status Tasks::Stub::Update(::grpc::ClientContext* context, const ::ric::tasks::UpdateRequest& request, ::ric::tasks::UpdateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Update_, context, request, response);
}

void Tasks::Stub::experimental_async::Update(::grpc::ClientContext* context, const ::ric::tasks::UpdateRequest* request, ::ric::tasks::UpdateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, std::move(f));
}

void Tasks::Stub::experimental_async::Update(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::tasks::UpdateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::UpdateResponse>* Tasks::Stub::AsyncUpdateRaw(::grpc::ClientContext* context, const ::ric::tasks::UpdateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::UpdateResponse>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::UpdateResponse>* Tasks::Stub::PrepareAsyncUpdateRaw(::grpc::ClientContext* context, const ::ric::tasks::UpdateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::UpdateResponse>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, false);
}

::grpc::Status Tasks::Stub::Delete(::grpc::ClientContext* context, const ::ric::tasks::DeleteRequest& request, ::ric::tasks::DeleteResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Delete_, context, request, response);
}

void Tasks::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::ric::tasks::DeleteRequest* request, ::ric::tasks::DeleteResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void Tasks::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::tasks::DeleteResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::DeleteResponse>* Tasks::Stub::AsyncDeleteRaw(::grpc::ClientContext* context, const ::ric::tasks::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::DeleteResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::DeleteResponse>* Tasks::Stub::PrepareAsyncDeleteRaw(::grpc::ClientContext* context, const ::ric::tasks::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::DeleteResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, false);
}

::grpc::Status Tasks::Stub::UpdateOrder(::grpc::ClientContext* context, const ::ric::tasks::UpdateOrderRequest& request, ::ric::tasks::UpdateOrderResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateOrder_, context, request, response);
}

void Tasks::Stub::experimental_async::UpdateOrder(::grpc::ClientContext* context, const ::ric::tasks::UpdateOrderRequest* request, ::ric::tasks::UpdateOrderResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateOrder_, context, request, response, std::move(f));
}

void Tasks::Stub::experimental_async::UpdateOrder(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::tasks::UpdateOrderResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateOrder_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::UpdateOrderResponse>* Tasks::Stub::AsyncUpdateOrderRaw(::grpc::ClientContext* context, const ::ric::tasks::UpdateOrderRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::UpdateOrderResponse>::Create(channel_.get(), cq, rpcmethod_UpdateOrder_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::UpdateOrderResponse>* Tasks::Stub::PrepareAsyncUpdateOrderRaw(::grpc::ClientContext* context, const ::ric::tasks::UpdateOrderRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::UpdateOrderResponse>::Create(channel_.get(), cq, rpcmethod_UpdateOrder_, context, request, false);
}

::grpc::Status Tasks::Stub::ChangeStatus(::grpc::ClientContext* context, const ::ric::tasks::ChangeStatusRequest& request, ::ric::tasks::ChangeStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ChangeStatus_, context, request, response);
}

void Tasks::Stub::experimental_async::ChangeStatus(::grpc::ClientContext* context, const ::ric::tasks::ChangeStatusRequest* request, ::ric::tasks::ChangeStatusResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ChangeStatus_, context, request, response, std::move(f));
}

void Tasks::Stub::experimental_async::ChangeStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::tasks::ChangeStatusResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ChangeStatus_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::ChangeStatusResponse>* Tasks::Stub::AsyncChangeStatusRaw(::grpc::ClientContext* context, const ::ric::tasks::ChangeStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::ChangeStatusResponse>::Create(channel_.get(), cq, rpcmethod_ChangeStatus_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::tasks::ChangeStatusResponse>* Tasks::Stub::PrepareAsyncChangeStatusRaw(::grpc::ClientContext* context, const ::ric::tasks::ChangeStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::tasks::ChangeStatusResponse>::Create(channel_.get(), cq, rpcmethod_ChangeStatus_, context, request, false);
}

Tasks::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Tasks_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Tasks::Service, ::ric::tasks::CreateRequest, ::ric::tasks::CreateResponse>(
          std::mem_fn(&Tasks::Service::Create), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Tasks_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Tasks::Service, ::ric::tasks::GetRequest, ::ric::tasks::GetResponse>(
          std::mem_fn(&Tasks::Service::Get), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Tasks_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Tasks::Service, ::ric::tasks::UpdateRequest, ::ric::tasks::UpdateResponse>(
          std::mem_fn(&Tasks::Service::Update), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Tasks_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Tasks::Service, ::ric::tasks::DeleteRequest, ::ric::tasks::DeleteResponse>(
          std::mem_fn(&Tasks::Service::Delete), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Tasks_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Tasks::Service, ::ric::tasks::UpdateOrderRequest, ::ric::tasks::UpdateOrderResponse>(
          std::mem_fn(&Tasks::Service::UpdateOrder), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Tasks_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Tasks::Service, ::ric::tasks::ChangeStatusRequest, ::ric::tasks::ChangeStatusResponse>(
          std::mem_fn(&Tasks::Service::ChangeStatus), this)));
}

Tasks::Service::~Service() {
}

::grpc::Status Tasks::Service::Create(::grpc::ServerContext* context, const ::ric::tasks::CreateRequest* request, ::ric::tasks::CreateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Tasks::Service::Get(::grpc::ServerContext* context, const ::ric::tasks::GetRequest* request, ::ric::tasks::GetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Tasks::Service::Update(::grpc::ServerContext* context, const ::ric::tasks::UpdateRequest* request, ::ric::tasks::UpdateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Tasks::Service::Delete(::grpc::ServerContext* context, const ::ric::tasks::DeleteRequest* request, ::ric::tasks::DeleteResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Tasks::Service::UpdateOrder(::grpc::ServerContext* context, const ::ric::tasks::UpdateOrderRequest* request, ::ric::tasks::UpdateOrderResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Tasks::Service::ChangeStatus(::grpc::ServerContext* context, const ::ric::tasks::ChangeStatusRequest* request, ::ric::tasks::ChangeStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace tasks

