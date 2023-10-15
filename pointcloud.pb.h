// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pointcloud.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pointcloud_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pointcloud_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pointcloud_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pointcloud_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pointcloud_2eproto;
class Data;
class DataDefaultTypeInternal;
extern DataDefaultTypeInternal _Data_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Data* Arena::CreateMaybeMessage<::Data>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Data PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Data) */ {
 public:
  inline Data() : Data(nullptr) {};
  virtual ~Data();

  Data(const Data& from);
  Data(Data&& from) noexcept
    : Data() {
    *this = ::std::move(from);
  }

  inline Data& operator=(const Data& from) {
    CopyFrom(from);
    return *this;
  }
  inline Data& operator=(Data&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Data* internal_default_instance() {
    return reinterpret_cast<const Data*>(
               &_Data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Data& a, Data& b) {
    a.Swap(&b);
  }
  inline void Swap(Data* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Data* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Data* New() const final {
    return CreateMaybeMessage<Data>(nullptr);
  }

  Data* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Data>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Data& from);
  void MergeFrom(const Data& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Data* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Data";
  }
  protected:
  explicit Data(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pointcloud_2eproto);
    return ::descriptor_table_pointcloud_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointsFieldNumber = 3,
    kTopicFieldNumber = 1,
    kFrameidFieldNumber = 2,
  };
  // repeated double points = 3;
  int points_size() const;
  private:
  int _internal_points_size() const;
  public:
  void clear_points();
  private:
  double _internal_points(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_points() const;
  void _internal_add_points(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_points();
  public:
  double points(int index) const;
  void set_points(int index, double value);
  void add_points(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      points() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_points();

  // string topic = 1;
  void clear_topic();
  const std::string& topic() const;
  void set_topic(const std::string& value);
  void set_topic(std::string&& value);
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  std::string* mutable_topic();
  std::string* release_topic();
  void set_allocated_topic(std::string* topic);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_topic();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_topic(
      std::string* topic);
  private:
  const std::string& _internal_topic() const;
  void _internal_set_topic(const std::string& value);
  std::string* _internal_mutable_topic();
  public:

  // int32 frameid = 2;
  void clear_frameid();
  ::PROTOBUF_NAMESPACE_ID::int32 frameid() const;
  void set_frameid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_frameid() const;
  void _internal_set_frameid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Data)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > points_;
  mutable std::atomic<int> _points_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr topic_;
  ::PROTOBUF_NAMESPACE_ID::int32 frameid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_pointcloud_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Data

// string topic = 1;
inline void Data::clear_topic() {
  topic_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Data::topic() const {
  // @@protoc_insertion_point(field_get:Data.topic)
  return _internal_topic();
}
inline void Data::set_topic(const std::string& value) {
  _internal_set_topic(value);
  // @@protoc_insertion_point(field_set:Data.topic)
}
inline std::string* Data::mutable_topic() {
  // @@protoc_insertion_point(field_mutable:Data.topic)
  return _internal_mutable_topic();
}
inline const std::string& Data::_internal_topic() const {
  return topic_.Get();
}
inline void Data::_internal_set_topic(const std::string& value) {
  
  topic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Data::set_topic(std::string&& value) {
  
  topic_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Data.topic)
}
inline void Data::set_topic(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  topic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Data.topic)
}
inline void Data::set_topic(const char* value,
    size_t size) {
  
  topic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Data.topic)
}
inline std::string* Data::_internal_mutable_topic() {
  
  return topic_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Data::release_topic() {
  // @@protoc_insertion_point(field_release:Data.topic)
  return topic_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Data::set_allocated_topic(std::string* topic) {
  if (topic != nullptr) {
    
  } else {
    
  }
  topic_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), topic,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Data.topic)
}
inline std::string* Data::unsafe_arena_release_topic() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Data.topic)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return topic_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Data::unsafe_arena_set_allocated_topic(
    std::string* topic) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (topic != nullptr) {
    
  } else {
    
  }
  topic_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      topic, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Data.topic)
}

// int32 frameid = 2;
inline void Data::clear_frameid() {
  frameid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::_internal_frameid() const {
  return frameid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Data::frameid() const {
  // @@protoc_insertion_point(field_get:Data.frameid)
  return _internal_frameid();
}
inline void Data::_internal_set_frameid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  frameid_ = value;
}
inline void Data::set_frameid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_frameid(value);
  // @@protoc_insertion_point(field_set:Data.frameid)
}

// repeated double points = 3;
inline int Data::_internal_points_size() const {
  return points_.size();
}
inline int Data::points_size() const {
  return _internal_points_size();
}
inline void Data::clear_points() {
  points_.Clear();
}
inline double Data::_internal_points(int index) const {
  return points_.Get(index);
}
inline double Data::points(int index) const {
  // @@protoc_insertion_point(field_get:Data.points)
  return _internal_points(index);
}
inline void Data::set_points(int index, double value) {
  points_.Set(index, value);
  // @@protoc_insertion_point(field_set:Data.points)
}
inline void Data::_internal_add_points(double value) {
  points_.Add(value);
}
inline void Data::add_points(double value) {
  _internal_add_points(value);
  // @@protoc_insertion_point(field_add:Data.points)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Data::_internal_points() const {
  return points_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Data::points() const {
  // @@protoc_insertion_point(field_list:Data.points)
  return _internal_points();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Data::_internal_mutable_points() {
  return &points_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Data::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:Data.points)
  return _internal_mutable_points();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pointcloud_2eproto