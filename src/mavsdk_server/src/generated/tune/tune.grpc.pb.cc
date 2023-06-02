// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tune/tune.proto

#include "tune/tune.pb.h"
#include "tune/tune.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace tune {

static const char* TuneService_method_names[] = {
  "/mavsdk.rpc.tune.TuneService/PlayTune",
};

std::unique_ptr< TuneService::Stub> TuneService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TuneService::Stub> stub(new TuneService::Stub(channel, options));
  return stub;
}

TuneService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_PlayTune_(TuneService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TuneService::Stub::PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::mavsdk::rpc::tune::PlayTuneResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PlayTune_, context, request, response);
}

void TuneService::Stub::async::PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PlayTune_, context, request, response, std::move(f));
}

void TuneService::Stub::async::PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PlayTune_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>* TuneService::Stub::PrepareAsyncPlayTuneRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::tune::PlayTuneResponse, ::mavsdk::rpc::tune::PlayTuneRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PlayTune_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>* TuneService::Stub::AsyncPlayTuneRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPlayTuneRaw(context, request, cq);
  result->StartCall();
  return result;
}

TuneService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TuneService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TuneService::Service, ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TuneService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tune::PlayTuneRequest* req,
             ::mavsdk::rpc::tune::PlayTuneResponse* resp) {
               return service->PlayTune(ctx, req, resp);
             }, this)));
}

TuneService::Service::~Service() {
}

::grpc::Status TuneService::Service::PlayTune(::grpc::ServerContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace tune

