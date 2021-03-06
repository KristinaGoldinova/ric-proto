// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-auth/ricauth.proto
#ifndef GRPC_ric_2dauth_2fricauth_2eproto__INCLUDED
#define GRPC_ric_2dauth_2fricauth_2eproto__INCLUDED

#include "ric-auth/ricauth.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace ric {
namespace auth {

class RicAuth final {
 public:
  static constexpr char const* service_full_name() {
    return "ric.auth.RicAuth";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status AuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::ric::auth::AuthObjectResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::AuthObjectResponse>> AsyncAuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::AuthObjectResponse>>(AsyncAuthObjectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::AuthObjectResponse>> PrepareAsyncAuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::AuthObjectResponse>>(PrepareAsyncAuthObjectRaw(context, request, cq));
    }
    virtual ::grpc::Status SendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::ric::auth::SendOfflineResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::SendOfflineResponse>> AsyncSendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::SendOfflineResponse>>(AsyncSendOfflineRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::SendOfflineResponse>> PrepareAsyncSendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::SendOfflineResponse>>(PrepareAsyncSendOfflineRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void AuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void AuthObject(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::AuthObjectResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendOffline(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::SendOfflineResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::AuthObjectResponse>* AsyncAuthObjectRaw(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::AuthObjectResponse>* PrepareAsyncAuthObjectRaw(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::SendOfflineResponse>* AsyncSendOfflineRaw(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::auth::SendOfflineResponse>* PrepareAsyncSendOfflineRaw(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status AuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::ric::auth::AuthObjectResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>> AsyncAuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>>(AsyncAuthObjectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>> PrepareAsyncAuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>>(PrepareAsyncAuthObjectRaw(context, request, cq));
    }
    ::grpc::Status SendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::ric::auth::SendOfflineResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::SendOfflineResponse>> AsyncSendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::SendOfflineResponse>>(AsyncSendOfflineRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::SendOfflineResponse>> PrepareAsyncSendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::auth::SendOfflineResponse>>(PrepareAsyncSendOfflineRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void AuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response, std::function<void(::grpc::Status)>) override;
      void AuthObject(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::AuthObjectResponse* response, std::function<void(::grpc::Status)>) override;
      void SendOffline(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response, std::function<void(::grpc::Status)>) override;
      void SendOffline(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::SendOfflineResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>* AsyncAuthObjectRaw(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>* PrepareAsyncAuthObjectRaw(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::auth::SendOfflineResponse>* AsyncSendOfflineRaw(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::auth::SendOfflineResponse>* PrepareAsyncSendOfflineRaw(::grpc::ClientContext* context, const ::ric::auth::SendOfflineRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_AuthObject_;
    const ::grpc::internal::RpcMethod rpcmethod_SendOffline_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response);
    virtual ::grpc::Status SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_AuthObject : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AuthObject() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_AuthObject() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAuthObject(::grpc::ServerContext* context, ::ric::auth::AuthObjectRequest* request, ::grpc::ServerAsyncResponseWriter< ::ric::auth::AuthObjectResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SendOffline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SendOffline() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SendOffline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendOffline(::grpc::ServerContext* context, ::ric::auth::SendOfflineRequest* request, ::grpc::ServerAsyncResponseWriter< ::ric::auth::SendOfflineResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_AuthObject<WithAsyncMethod_SendOffline<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_AuthObject : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_AuthObject() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::ric::auth::AuthObjectRequest, ::ric::auth::AuthObjectResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ric::auth::AuthObjectRequest* request,
                 ::ric::auth::AuthObjectResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->AuthObject(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_AuthObject() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SendOffline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SendOffline() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::ric::auth::SendOfflineRequest, ::ric::auth::SendOfflineResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ric::auth::SendOfflineRequest* request,
                 ::ric::auth::SendOfflineResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SendOffline(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_SendOffline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_AuthObject<ExperimentalWithCallbackMethod_SendOffline<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_AuthObject : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AuthObject() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_AuthObject() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SendOffline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SendOffline() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SendOffline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_AuthObject : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_AuthObject() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_AuthObject() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAuthObject(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendOffline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SendOffline() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_SendOffline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendOffline(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_AuthObject : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_AuthObject() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->AuthObject(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_AuthObject() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void AuthObject(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SendOffline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SendOffline() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SendOffline(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SendOffline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendOffline(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AuthObject : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AuthObject() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ric::auth::AuthObjectRequest, ::ric::auth::AuthObjectResponse>(std::bind(&WithStreamedUnaryMethod_AuthObject<BaseClass>::StreamedAuthObject, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AuthObject() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAuthObject(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ric::auth::AuthObjectRequest,::ric::auth::AuthObjectResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendOffline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SendOffline() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::ric::auth::SendOfflineRequest, ::ric::auth::SendOfflineResponse>(std::bind(&WithStreamedUnaryMethod_SendOffline<BaseClass>::StreamedSendOffline, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SendOffline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendOffline(::grpc::ServerContext* context, const ::ric::auth::SendOfflineRequest* request, ::ric::auth::SendOfflineResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendOffline(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ric::auth::SendOfflineRequest,::ric::auth::SendOfflineResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_AuthObject<WithStreamedUnaryMethod_SendOffline<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_AuthObject<WithStreamedUnaryMethod_SendOffline<Service > > StreamedService;
};

}  // namespace auth
}  // namespace ric


#endif  // GRPC_ric_2dauth_2fricauth_2eproto__INCLUDED
