// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ric-bill/ricbill.proto

#ifndef PROTOBUF_INCLUDED_ric_2dbill_2fricbill_2eproto
#define PROTOBUF_INCLUDED_ric_2dbill_2fricbill_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ric_2dbill_2fricbill_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_ric_2dbill_2fricbill_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_ric_2dbill_2fricbill_2eproto();
namespace ric {
namespace bill {
class PaymentRequest;
class PaymentRequestDefaultTypeInternal;
extern PaymentRequestDefaultTypeInternal _PaymentRequest_default_instance_;
class PaymentResponse;
class PaymentResponseDefaultTypeInternal;
extern PaymentResponseDefaultTypeInternal _PaymentResponse_default_instance_;
}  // namespace bill
}  // namespace ric
namespace google {
namespace protobuf {
template<> ::ric::bill::PaymentRequest* Arena::CreateMaybeMessage<::ric::bill::PaymentRequest>(Arena*);
template<> ::ric::bill::PaymentResponse* Arena::CreateMaybeMessage<::ric::bill::PaymentResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ric {
namespace bill {

// ===================================================================

class PaymentRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ric.bill.PaymentRequest) */ {
 public:
  PaymentRequest();
  virtual ~PaymentRequest();

  PaymentRequest(const PaymentRequest& from);

  inline PaymentRequest& operator=(const PaymentRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PaymentRequest(PaymentRequest&& from) noexcept
    : PaymentRequest() {
    *this = ::std::move(from);
  }

  inline PaymentRequest& operator=(PaymentRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const PaymentRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PaymentRequest* internal_default_instance() {
    return reinterpret_cast<const PaymentRequest*>(
               &_PaymentRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PaymentRequest* other);
  friend void swap(PaymentRequest& a, PaymentRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PaymentRequest* New() const final {
    return CreateMaybeMessage<PaymentRequest>(nullptr);
  }

  PaymentRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PaymentRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PaymentRequest& from);
  void MergeFrom(const PaymentRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PaymentRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:ric.bill.PaymentRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ric_2dbill_2fricbill_2eproto;
};
// -------------------------------------------------------------------

class PaymentResponse final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ric.bill.PaymentResponse) */ {
 public:
  PaymentResponse();
  virtual ~PaymentResponse();

  PaymentResponse(const PaymentResponse& from);

  inline PaymentResponse& operator=(const PaymentResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PaymentResponse(PaymentResponse&& from) noexcept
    : PaymentResponse() {
    *this = ::std::move(from);
  }

  inline PaymentResponse& operator=(PaymentResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const PaymentResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PaymentResponse* internal_default_instance() {
    return reinterpret_cast<const PaymentResponse*>(
               &_PaymentResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(PaymentResponse* other);
  friend void swap(PaymentResponse& a, PaymentResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PaymentResponse* New() const final {
    return CreateMaybeMessage<PaymentResponse>(nullptr);
  }

  PaymentResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PaymentResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PaymentResponse& from);
  void MergeFrom(const PaymentResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PaymentResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:ric.bill.PaymentResponse)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ric_2dbill_2fricbill_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PaymentRequest

// -------------------------------------------------------------------

// PaymentResponse

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace bill
}  // namespace ric

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_ric_2dbill_2fricbill_2eproto