// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: winch/winch.proto

#include "winch/winch.pb.h"
#include "winch/winch.grpc.pb.h"

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
namespace winch {

static const char* WinchService_method_names[] = {
  "/mavsdk.rpc.winch.WinchService/SubscribeStatus",
  "/mavsdk.rpc.winch.WinchService/Relax",
  "/mavsdk.rpc.winch.WinchService/RelativeLengthControl",
  "/mavsdk.rpc.winch.WinchService/RateControl",
  "/mavsdk.rpc.winch.WinchService/Lock",
  "/mavsdk.rpc.winch.WinchService/Deliver",
  "/mavsdk.rpc.winch.WinchService/Hold",
  "/mavsdk.rpc.winch.WinchService/Retract",
  "/mavsdk.rpc.winch.WinchService/LoadLine",
  "/mavsdk.rpc.winch.WinchService/AbandonLine",
  "/mavsdk.rpc.winch.WinchService/LoadPayload",
};

std::unique_ptr< WinchService::Stub> WinchService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< WinchService::Stub> stub(new WinchService::Stub(channel, options));
  return stub;
}

WinchService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SubscribeStatus_(WinchService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Relax_(WinchService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RelativeLengthControl_(WinchService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RateControl_(WinchService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Lock_(WinchService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Deliver_(WinchService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Hold_(WinchService_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Retract_(WinchService_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LoadLine_(WinchService_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AbandonLine_(WinchService_method_names[9], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LoadPayload_(WinchService_method_names[10], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::mavsdk::rpc::winch::StatusResponse>* WinchService::Stub::SubscribeStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::SubscribeStatusRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::winch::StatusResponse>::Create(channel_.get(), rpcmethod_SubscribeStatus_, context, request);
}

void WinchService::Stub::async::SubscribeStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::SubscribeStatusRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::winch::StatusResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::winch::StatusResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeStatus_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::winch::StatusResponse>* WinchService::Stub::AsyncSubscribeStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::SubscribeStatusRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::winch::StatusResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeStatus_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::winch::StatusResponse>* WinchService::Stub::PrepareAsyncSubscribeStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::SubscribeStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::winch::StatusResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeStatus_, context, request, false, nullptr);
}

::grpc::Status WinchService::Stub::Relax(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelaxRequest& request, ::mavsdk::rpc::winch::RelaxResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::RelaxRequest, ::mavsdk::rpc::winch::RelaxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Relax_, context, request, response);
}

void WinchService::Stub::async::Relax(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelaxRequest* request, ::mavsdk::rpc::winch::RelaxResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::RelaxRequest, ::mavsdk::rpc::winch::RelaxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Relax_, context, request, response, std::move(f));
}

void WinchService::Stub::async::Relax(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelaxRequest* request, ::mavsdk::rpc::winch::RelaxResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Relax_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RelaxResponse>* WinchService::Stub::PrepareAsyncRelaxRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelaxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::RelaxResponse, ::mavsdk::rpc::winch::RelaxRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Relax_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RelaxResponse>* WinchService::Stub::AsyncRelaxRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelaxRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRelaxRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::RelativeLengthControl(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelativeLengthControlRequest& request, ::mavsdk::rpc::winch::RelativeLengthControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::RelativeLengthControlRequest, ::mavsdk::rpc::winch::RelativeLengthControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RelativeLengthControl_, context, request, response);
}

void WinchService::Stub::async::RelativeLengthControl(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelativeLengthControlRequest* request, ::mavsdk::rpc::winch::RelativeLengthControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::RelativeLengthControlRequest, ::mavsdk::rpc::winch::RelativeLengthControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RelativeLengthControl_, context, request, response, std::move(f));
}

void WinchService::Stub::async::RelativeLengthControl(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelativeLengthControlRequest* request, ::mavsdk::rpc::winch::RelativeLengthControlResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RelativeLengthControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RelativeLengthControlResponse>* WinchService::Stub::PrepareAsyncRelativeLengthControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelativeLengthControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::RelativeLengthControlResponse, ::mavsdk::rpc::winch::RelativeLengthControlRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RelativeLengthControl_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RelativeLengthControlResponse>* WinchService::Stub::AsyncRelativeLengthControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RelativeLengthControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRelativeLengthControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::RateControl(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RateControlRequest& request, ::mavsdk::rpc::winch::RateControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::RateControlRequest, ::mavsdk::rpc::winch::RateControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RateControl_, context, request, response);
}

void WinchService::Stub::async::RateControl(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RateControlRequest* request, ::mavsdk::rpc::winch::RateControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::RateControlRequest, ::mavsdk::rpc::winch::RateControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RateControl_, context, request, response, std::move(f));
}

void WinchService::Stub::async::RateControl(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RateControlRequest* request, ::mavsdk::rpc::winch::RateControlResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RateControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RateControlResponse>* WinchService::Stub::PrepareAsyncRateControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RateControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::RateControlResponse, ::mavsdk::rpc::winch::RateControlRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RateControl_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RateControlResponse>* WinchService::Stub::AsyncRateControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RateControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRateControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::Lock(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LockRequest& request, ::mavsdk::rpc::winch::LockResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::LockRequest, ::mavsdk::rpc::winch::LockResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Lock_, context, request, response);
}

void WinchService::Stub::async::Lock(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LockRequest* request, ::mavsdk::rpc::winch::LockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::LockRequest, ::mavsdk::rpc::winch::LockResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, std::move(f));
}

void WinchService::Stub::async::Lock(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LockRequest* request, ::mavsdk::rpc::winch::LockResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::LockResponse>* WinchService::Stub::PrepareAsyncLockRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::LockResponse, ::mavsdk::rpc::winch::LockRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Lock_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::LockResponse>* WinchService::Stub::AsyncLockRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LockRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncLockRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::Deliver(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::DeliverRequest& request, ::mavsdk::rpc::winch::DeliverResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::DeliverRequest, ::mavsdk::rpc::winch::DeliverResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Deliver_, context, request, response);
}

void WinchService::Stub::async::Deliver(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::DeliverRequest* request, ::mavsdk::rpc::winch::DeliverResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::DeliverRequest, ::mavsdk::rpc::winch::DeliverResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Deliver_, context, request, response, std::move(f));
}

void WinchService::Stub::async::Deliver(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::DeliverRequest* request, ::mavsdk::rpc::winch::DeliverResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Deliver_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::DeliverResponse>* WinchService::Stub::PrepareAsyncDeliverRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::DeliverRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::DeliverResponse, ::mavsdk::rpc::winch::DeliverRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Deliver_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::DeliverResponse>* WinchService::Stub::AsyncDeliverRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::DeliverRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeliverRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::Hold(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::HoldRequest& request, ::mavsdk::rpc::winch::HoldResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::HoldRequest, ::mavsdk::rpc::winch::HoldResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Hold_, context, request, response);
}

void WinchService::Stub::async::Hold(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::HoldRequest* request, ::mavsdk::rpc::winch::HoldResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::HoldRequest, ::mavsdk::rpc::winch::HoldResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Hold_, context, request, response, std::move(f));
}

void WinchService::Stub::async::Hold(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::HoldRequest* request, ::mavsdk::rpc::winch::HoldResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Hold_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::HoldResponse>* WinchService::Stub::PrepareAsyncHoldRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::HoldRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::HoldResponse, ::mavsdk::rpc::winch::HoldRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Hold_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::HoldResponse>* WinchService::Stub::AsyncHoldRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::HoldRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncHoldRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::Retract(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RetractRequest& request, ::mavsdk::rpc::winch::RetractResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::RetractRequest, ::mavsdk::rpc::winch::RetractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Retract_, context, request, response);
}

void WinchService::Stub::async::Retract(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RetractRequest* request, ::mavsdk::rpc::winch::RetractResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::RetractRequest, ::mavsdk::rpc::winch::RetractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Retract_, context, request, response, std::move(f));
}

void WinchService::Stub::async::Retract(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RetractRequest* request, ::mavsdk::rpc::winch::RetractResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Retract_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RetractResponse>* WinchService::Stub::PrepareAsyncRetractRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RetractRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::RetractResponse, ::mavsdk::rpc::winch::RetractRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Retract_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::RetractResponse>* WinchService::Stub::AsyncRetractRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::RetractRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRetractRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::LoadLine(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadLineRequest& request, ::mavsdk::rpc::winch::LoadLineResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::LoadLineRequest, ::mavsdk::rpc::winch::LoadLineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_LoadLine_, context, request, response);
}

void WinchService::Stub::async::LoadLine(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadLineRequest* request, ::mavsdk::rpc::winch::LoadLineResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::LoadLineRequest, ::mavsdk::rpc::winch::LoadLineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LoadLine_, context, request, response, std::move(f));
}

void WinchService::Stub::async::LoadLine(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadLineRequest* request, ::mavsdk::rpc::winch::LoadLineResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LoadLine_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::LoadLineResponse>* WinchService::Stub::PrepareAsyncLoadLineRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadLineRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::LoadLineResponse, ::mavsdk::rpc::winch::LoadLineRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_LoadLine_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::LoadLineResponse>* WinchService::Stub::AsyncLoadLineRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadLineRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncLoadLineRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::AbandonLine(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::AbandonLineRequest& request, ::mavsdk::rpc::winch::AbandonLineResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::AbandonLineRequest, ::mavsdk::rpc::winch::AbandonLineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AbandonLine_, context, request, response);
}

void WinchService::Stub::async::AbandonLine(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::AbandonLineRequest* request, ::mavsdk::rpc::winch::AbandonLineResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::AbandonLineRequest, ::mavsdk::rpc::winch::AbandonLineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AbandonLine_, context, request, response, std::move(f));
}

void WinchService::Stub::async::AbandonLine(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::AbandonLineRequest* request, ::mavsdk::rpc::winch::AbandonLineResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AbandonLine_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::AbandonLineResponse>* WinchService::Stub::PrepareAsyncAbandonLineRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::AbandonLineRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::AbandonLineResponse, ::mavsdk::rpc::winch::AbandonLineRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AbandonLine_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::AbandonLineResponse>* WinchService::Stub::AsyncAbandonLineRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::AbandonLineRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAbandonLineRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WinchService::Stub::LoadPayload(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadPayloadRequest& request, ::mavsdk::rpc::winch::LoadPayloadResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::winch::LoadPayloadRequest, ::mavsdk::rpc::winch::LoadPayloadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_LoadPayload_, context, request, response);
}

void WinchService::Stub::async::LoadPayload(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadPayloadRequest* request, ::mavsdk::rpc::winch::LoadPayloadResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::winch::LoadPayloadRequest, ::mavsdk::rpc::winch::LoadPayloadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LoadPayload_, context, request, response, std::move(f));
}

void WinchService::Stub::async::LoadPayload(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadPayloadRequest* request, ::mavsdk::rpc::winch::LoadPayloadResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LoadPayload_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::LoadPayloadResponse>* WinchService::Stub::PrepareAsyncLoadPayloadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadPayloadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::winch::LoadPayloadResponse, ::mavsdk::rpc::winch::LoadPayloadRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_LoadPayload_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::winch::LoadPayloadResponse>* WinchService::Stub::AsyncLoadPayloadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::winch::LoadPayloadRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncLoadPayloadRaw(context, request, cq);
  result->StartCall();
  return result;
}

WinchService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< WinchService::Service, ::mavsdk::rpc::winch::SubscribeStatusRequest, ::mavsdk::rpc::winch::StatusResponse>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::SubscribeStatusRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::winch::StatusResponse>* writer) {
               return service->SubscribeStatus(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::RelaxRequest, ::mavsdk::rpc::winch::RelaxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::RelaxRequest* req,
             ::mavsdk::rpc::winch::RelaxResponse* resp) {
               return service->Relax(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::RelativeLengthControlRequest, ::mavsdk::rpc::winch::RelativeLengthControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::RelativeLengthControlRequest* req,
             ::mavsdk::rpc::winch::RelativeLengthControlResponse* resp) {
               return service->RelativeLengthControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::RateControlRequest, ::mavsdk::rpc::winch::RateControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::RateControlRequest* req,
             ::mavsdk::rpc::winch::RateControlResponse* resp) {
               return service->RateControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::LockRequest, ::mavsdk::rpc::winch::LockResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::LockRequest* req,
             ::mavsdk::rpc::winch::LockResponse* resp) {
               return service->Lock(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::DeliverRequest, ::mavsdk::rpc::winch::DeliverResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::DeliverRequest* req,
             ::mavsdk::rpc::winch::DeliverResponse* resp) {
               return service->Deliver(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::HoldRequest, ::mavsdk::rpc::winch::HoldResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::HoldRequest* req,
             ::mavsdk::rpc::winch::HoldResponse* resp) {
               return service->Hold(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::RetractRequest, ::mavsdk::rpc::winch::RetractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::RetractRequest* req,
             ::mavsdk::rpc::winch::RetractResponse* resp) {
               return service->Retract(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::LoadLineRequest, ::mavsdk::rpc::winch::LoadLineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::LoadLineRequest* req,
             ::mavsdk::rpc::winch::LoadLineResponse* resp) {
               return service->LoadLine(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::AbandonLineRequest, ::mavsdk::rpc::winch::AbandonLineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::AbandonLineRequest* req,
             ::mavsdk::rpc::winch::AbandonLineResponse* resp) {
               return service->AbandonLine(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WinchService_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WinchService::Service, ::mavsdk::rpc::winch::LoadPayloadRequest, ::mavsdk::rpc::winch::LoadPayloadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](WinchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::winch::LoadPayloadRequest* req,
             ::mavsdk::rpc::winch::LoadPayloadResponse* resp) {
               return service->LoadPayload(ctx, req, resp);
             }, this)));
}

WinchService::Service::~Service() {
}

::grpc::Status WinchService::Service::SubscribeStatus(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::SubscribeStatusRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::winch::StatusResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::Relax(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::RelaxRequest* request, ::mavsdk::rpc::winch::RelaxResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::RelativeLengthControl(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::RelativeLengthControlRequest* request, ::mavsdk::rpc::winch::RelativeLengthControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::RateControl(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::RateControlRequest* request, ::mavsdk::rpc::winch::RateControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::Lock(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::LockRequest* request, ::mavsdk::rpc::winch::LockResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::Deliver(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::DeliverRequest* request, ::mavsdk::rpc::winch::DeliverResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::Hold(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::HoldRequest* request, ::mavsdk::rpc::winch::HoldResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::Retract(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::RetractRequest* request, ::mavsdk::rpc::winch::RetractResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::LoadLine(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::LoadLineRequest* request, ::mavsdk::rpc::winch::LoadLineResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::AbandonLine(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::AbandonLineRequest* request, ::mavsdk::rpc::winch::AbandonLineResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WinchService::Service::LoadPayload(::grpc::ServerContext* context, const ::mavsdk::rpc::winch::LoadPayloadRequest* request, ::mavsdk::rpc::winch::LoadPayloadResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace winch

