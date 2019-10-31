// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: treasure.eproto

#ifndef PROTOBUF_INCLUDED_treasure_2eeproto
#define PROTOBUF_INCLUDED_treasure_2eeproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_treasure_2eeproto 

namespace protobuf_treasure_2eeproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_treasure_2eeproto
namespace dhc {
class treasure_t;
class treasure_tDefaultTypeInternal;
extern treasure_tDefaultTypeInternal _treasure_t_default_instance_;
}  // namespace dhc
namespace google {
namespace protobuf {
template<> ::dhc::treasure_t* Arena::CreateMaybeMessage<::dhc::treasure_t>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace dhc {

// ===================================================================

class treasure_t : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dhc.treasure_t) */ {
 public:
  treasure_t();
  virtual ~treasure_t();

  treasure_t(const treasure_t& from);

  inline treasure_t& operator=(const treasure_t& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  treasure_t(treasure_t&& from) noexcept
    : treasure_t() {
    *this = ::std::move(from);
  }

  inline treasure_t& operator=(treasure_t&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const treasure_t& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const treasure_t* internal_default_instance() {
    return reinterpret_cast<const treasure_t*>(
               &_treasure_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(treasure_t* other);
  friend void swap(treasure_t& a, treasure_t& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline treasure_t* New() const final {
    return CreateMaybeMessage<treasure_t>(NULL);
  }

  treasure_t* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<treasure_t>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const treasure_t& from);
  void MergeFrom(const treasure_t& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(treasure_t* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 star_rates = 15;
  int star_rates_size() const;
  void clear_star_rates();
  static const int kStarRatesFieldNumber = 15;
  ::google::protobuf::int32 star_rates(int index) const;
  void set_star_rates(int index, ::google::protobuf::int32 value);
  void add_star_rates(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      star_rates() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_star_rates();

  // repeated int32 star_bjs = 16;
  int star_bjs_size() const;
  void clear_star_bjs();
  static const int kStarBjsFieldNumber = 16;
  ::google::protobuf::int32 star_bjs(int index) const;
  void set_star_bjs(int index, ::google::protobuf::int32 value);
  void add_star_bjs(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      star_bjs() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_star_bjs();

  // uint64 guid = 1;
  void clear_guid();
  static const int kGuidFieldNumber = 1;
  ::google::protobuf::uint64 guid() const;
  void set_guid(::google::protobuf::uint64 value);

  // uint64 player_guid = 2;
  void clear_player_guid();
  static const int kPlayerGuidFieldNumber = 2;
  ::google::protobuf::uint64 player_guid() const;
  void set_player_guid(::google::protobuf::uint64 value);

  // uint64 role_guid = 4;
  void clear_role_guid();
  static const int kRoleGuidFieldNumber = 4;
  ::google::protobuf::uint64 role_guid() const;
  void set_role_guid(::google::protobuf::uint64 value);

  // int32 template_id = 3;
  void clear_template_id();
  static const int kTemplateIdFieldNumber = 3;
  ::google::protobuf::int32 template_id() const;
  void set_template_id(::google::protobuf::int32 value);

  // int32 enhance = 5;
  void clear_enhance();
  static const int kEnhanceFieldNumber = 5;
  ::google::protobuf::int32 enhance() const;
  void set_enhance(::google::protobuf::int32 value);

  // int32 enhance_exp = 6;
  void clear_enhance_exp();
  static const int kEnhanceExpFieldNumber = 6;
  ::google::protobuf::int32 enhance_exp() const;
  void set_enhance_exp(::google::protobuf::int32 value);

  // int32 jilian = 7;
  void clear_jilian();
  static const int kJilianFieldNumber = 7;
  ::google::protobuf::int32 jilian() const;
  void set_jilian(::google::protobuf::int32 value);

  // int32 locked = 8;
  void clear_locked();
  static const int kLockedFieldNumber = 8;
  ::google::protobuf::int32 locked() const;
  void set_locked(::google::protobuf::int32 value);

  // int32 enhance_counts = 9;
  void clear_enhance_counts();
  static const int kEnhanceCountsFieldNumber = 9;
  ::google::protobuf::int32 enhance_counts() const;
  void set_enhance_counts(::google::protobuf::int32 value);

  // int32 star = 10;
  void clear_star();
  static const int kStarFieldNumber = 10;
  ::google::protobuf::int32 star() const;
  void set_star(::google::protobuf::int32 value);

  // int32 star_exp = 11;
  void clear_star_exp();
  static const int kStarExpFieldNumber = 11;
  ::google::protobuf::int32 star_exp() const;
  void set_star_exp(::google::protobuf::int32 value);

  // int32 star_gold = 12;
  void clear_star_gold();
  static const int kStarGoldFieldNumber = 12;
  ::google::protobuf::int32 star_gold() const;
  void set_star_gold(::google::protobuf::int32 value);

  // int32 star_jewel = 13;
  void clear_star_jewel();
  static const int kStarJewelFieldNumber = 13;
  ::google::protobuf::int32 star_jewel() const;
  void set_star_jewel(::google::protobuf::int32 value);

  // int32 star_var = 14;
  void clear_star_var();
  static const int kStarVarFieldNumber = 14;
  ::google::protobuf::int32 star_var() const;
  void set_star_var(::google::protobuf::int32 value);

  // int32 star_luck = 17;
  void clear_star_luck();
  static const int kStarLuckFieldNumber = 17;
  ::google::protobuf::int32 star_luck() const;
  void set_star_luck(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:dhc.treasure_t)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > star_rates_;
  mutable int _star_rates_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > star_bjs_;
  mutable int _star_bjs_cached_byte_size_;
  ::google::protobuf::uint64 guid_;
  ::google::protobuf::uint64 player_guid_;
  ::google::protobuf::uint64 role_guid_;
  ::google::protobuf::int32 template_id_;
  ::google::protobuf::int32 enhance_;
  ::google::protobuf::int32 enhance_exp_;
  ::google::protobuf::int32 jilian_;
  ::google::protobuf::int32 locked_;
  ::google::protobuf::int32 enhance_counts_;
  ::google::protobuf::int32 star_;
  ::google::protobuf::int32 star_exp_;
  ::google::protobuf::int32 star_gold_;
  ::google::protobuf::int32 star_jewel_;
  ::google::protobuf::int32 star_var_;
  ::google::protobuf::int32 star_luck_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_treasure_2eeproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// treasure_t

// uint64 guid = 1;
inline void treasure_t::clear_guid() {
  set_changed();
  guid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 treasure_t::guid() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.guid)
  return guid_;
}
inline void treasure_t::set_guid(::google::protobuf::uint64 value) {
  set_changed();
  
  guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.guid)
}

// uint64 player_guid = 2;
inline void treasure_t::clear_player_guid() {
  set_changed();
  player_guid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 treasure_t::player_guid() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.player_guid)
  return player_guid_;
}
inline void treasure_t::set_player_guid(::google::protobuf::uint64 value) {
  set_changed();
  
  player_guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.player_guid)
}

// int32 template_id = 3;
inline void treasure_t::clear_template_id() {
  set_changed();
  template_id_ = 0;
}
inline ::google::protobuf::int32 treasure_t::template_id() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.template_id)
  return template_id_;
}
inline void treasure_t::set_template_id(::google::protobuf::int32 value) {
  set_changed();
  
  template_id_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.template_id)
}

// uint64 role_guid = 4;
inline void treasure_t::clear_role_guid() {
  set_changed();
  role_guid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 treasure_t::role_guid() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.role_guid)
  return role_guid_;
}
inline void treasure_t::set_role_guid(::google::protobuf::uint64 value) {
  set_changed();
  
  role_guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.role_guid)
}

// int32 enhance = 5;
inline void treasure_t::clear_enhance() {
  set_changed();
  enhance_ = 0;
}
inline ::google::protobuf::int32 treasure_t::enhance() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.enhance)
  return enhance_;
}
inline void treasure_t::set_enhance(::google::protobuf::int32 value) {
  set_changed();
  
  enhance_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.enhance)
}

// int32 enhance_exp = 6;
inline void treasure_t::clear_enhance_exp() {
  set_changed();
  enhance_exp_ = 0;
}
inline ::google::protobuf::int32 treasure_t::enhance_exp() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.enhance_exp)
  return enhance_exp_;
}
inline void treasure_t::set_enhance_exp(::google::protobuf::int32 value) {
  set_changed();
  
  enhance_exp_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.enhance_exp)
}

// int32 jilian = 7;
inline void treasure_t::clear_jilian() {
  set_changed();
  jilian_ = 0;
}
inline ::google::protobuf::int32 treasure_t::jilian() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.jilian)
  return jilian_;
}
inline void treasure_t::set_jilian(::google::protobuf::int32 value) {
  set_changed();
  
  jilian_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.jilian)
}

// int32 locked = 8;
inline void treasure_t::clear_locked() {
  set_changed();
  locked_ = 0;
}
inline ::google::protobuf::int32 treasure_t::locked() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.locked)
  return locked_;
}
inline void treasure_t::set_locked(::google::protobuf::int32 value) {
  set_changed();
  
  locked_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.locked)
}

// int32 enhance_counts = 9;
inline void treasure_t::clear_enhance_counts() {
  set_changed();
  enhance_counts_ = 0;
}
inline ::google::protobuf::int32 treasure_t::enhance_counts() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.enhance_counts)
  return enhance_counts_;
}
inline void treasure_t::set_enhance_counts(::google::protobuf::int32 value) {
  set_changed();
  
  enhance_counts_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.enhance_counts)
}

// int32 star = 10;
inline void treasure_t::clear_star() {
  set_changed();
  star_ = 0;
}
inline ::google::protobuf::int32 treasure_t::star() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star)
  return star_;
}
inline void treasure_t::set_star(::google::protobuf::int32 value) {
  set_changed();
  
  star_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star)
}

// int32 star_exp = 11;
inline void treasure_t::clear_star_exp() {
  set_changed();
  star_exp_ = 0;
}
inline ::google::protobuf::int32 treasure_t::star_exp() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star_exp)
  return star_exp_;
}
inline void treasure_t::set_star_exp(::google::protobuf::int32 value) {
  set_changed();
  
  star_exp_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star_exp)
}

// int32 star_gold = 12;
inline void treasure_t::clear_star_gold() {
  set_changed();
  star_gold_ = 0;
}
inline ::google::protobuf::int32 treasure_t::star_gold() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star_gold)
  return star_gold_;
}
inline void treasure_t::set_star_gold(::google::protobuf::int32 value) {
  set_changed();
  
  star_gold_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star_gold)
}

// int32 star_jewel = 13;
inline void treasure_t::clear_star_jewel() {
  set_changed();
  star_jewel_ = 0;
}
inline ::google::protobuf::int32 treasure_t::star_jewel() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star_jewel)
  return star_jewel_;
}
inline void treasure_t::set_star_jewel(::google::protobuf::int32 value) {
  set_changed();
  
  star_jewel_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star_jewel)
}

// int32 star_var = 14;
inline void treasure_t::clear_star_var() {
  set_changed();
  star_var_ = 0;
}
inline ::google::protobuf::int32 treasure_t::star_var() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star_var)
  return star_var_;
}
inline void treasure_t::set_star_var(::google::protobuf::int32 value) {
  set_changed();
  
  star_var_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star_var)
}

// repeated int32 star_rates = 15;
inline int treasure_t::star_rates_size() const {
  return star_rates_.size();
}
inline void treasure_t::clear_star_rates() {
  set_changed();
  star_rates_.Clear();
}
inline ::google::protobuf::int32 treasure_t::star_rates(int index) const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star_rates)
  return star_rates_.Get(index);
}
inline void treasure_t::set_star_rates(int index, ::google::protobuf::int32 value) {
  set_changed();
  star_rates_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star_rates)
}
inline void treasure_t::add_star_rates(::google::protobuf::int32 value) {
  set_changed();
  star_rates_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.treasure_t.star_rates)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
treasure_t::star_rates() const {
  // @@protoc_insertion_point(field_list:dhc.treasure_t.star_rates)
  return star_rates_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
treasure_t::mutable_star_rates() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.treasure_t.star_rates)
  return &star_rates_;
}

// repeated int32 star_bjs = 16;
inline int treasure_t::star_bjs_size() const {
  return star_bjs_.size();
}
inline void treasure_t::clear_star_bjs() {
  set_changed();
  star_bjs_.Clear();
}
inline ::google::protobuf::int32 treasure_t::star_bjs(int index) const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star_bjs)
  return star_bjs_.Get(index);
}
inline void treasure_t::set_star_bjs(int index, ::google::protobuf::int32 value) {
  set_changed();
  star_bjs_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star_bjs)
}
inline void treasure_t::add_star_bjs(::google::protobuf::int32 value) {
  set_changed();
  star_bjs_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.treasure_t.star_bjs)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
treasure_t::star_bjs() const {
  // @@protoc_insertion_point(field_list:dhc.treasure_t.star_bjs)
  return star_bjs_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
treasure_t::mutable_star_bjs() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.treasure_t.star_bjs)
  return &star_bjs_;
}

// int32 star_luck = 17;
inline void treasure_t::clear_star_luck() {
  set_changed();
  star_luck_ = 0;
}
inline ::google::protobuf::int32 treasure_t::star_luck() const {
  // @@protoc_insertion_point(field_get:dhc.treasure_t.star_luck)
  return star_luck_;
}
inline void treasure_t::set_star_luck(::google::protobuf::int32 value) {
  set_changed();
  
  star_luck_ = value;
  // @@protoc_insertion_point(field_set:dhc.treasure_t.star_luck)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dhc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_treasure_2eeproto
