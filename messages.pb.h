/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.0 at Sat Mar 09 17:32:27 2013. */

#ifndef _PB_MESSAGES_PB_H_
#define _PB_MESSAGES_PB_H_
#include "pb.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _GetDeviceUUID {
    uint8_t dummy_field;
} GetDeviceUUID;

typedef struct _GetMasterPublicKey {
    uint8_t dummy_field;
} GetMasterPublicKey;

typedef struct _GetNumberOfAddresses {
    uint8_t dummy_field;
} GetNumberOfAddresses;

typedef struct _ListWallets {
    uint8_t dummy_field;
} ListWallets;

typedef struct _NewAddress {
    uint8_t dummy_field;
} NewAddress;

typedef struct _Success {
    uint8_t dummy_field;
} Success;

typedef struct _UnloadWallet {
    uint8_t dummy_field;
} UnloadWallet;

typedef struct {
    size_t size;
    uint8_t bytes[65];
} Address_public_key_t;

typedef struct {
    size_t size;
    uint8_t bytes[20];
} Address_address_t;

typedef struct _Address {
    uint32_t address_handle;
    Address_public_key_t public_key;
    Address_address_t address;
} Address;

typedef struct _BackupWallet {
    bool has_is_encrypted;
    bool is_encrypted;
    bool has_device;
    uint32_t device;
} BackupWallet;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} ChangeEncryptionKey_encryption_key_t;

typedef struct _ChangeEncryptionKey {
    ChangeEncryptionKey_encryption_key_t encryption_key;
} ChangeEncryptionKey;

typedef struct {
    size_t size;
    uint8_t bytes[40];
} ChangeWalletName_wallet_name_t;

typedef struct _ChangeWalletName {
    ChangeWalletName_wallet_name_t wallet_name;
} ChangeWalletName;

typedef struct {
    size_t size;
    uint8_t bytes[16];
} DeviceUUID_device_uuid_t;

typedef struct _DeviceUUID {
    DeviceUUID_device_uuid_t device_uuid;
} DeviceUUID;

typedef struct _Entropy {
    pb_callback_t entropy;
} Entropy;

typedef struct _Failure {
    pb_callback_t error_message;
} Failure;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} FormatWalletArea_initial_entropy_pool_t;

typedef struct _FormatWalletArea {
    FormatWalletArea_initial_entropy_pool_t initial_entropy_pool;
} FormatWalletArea;

typedef struct _GetAddressAndPublicKey {
    uint32_t address_handle;
} GetAddressAndPublicKey;

typedef struct _GetEntropy {
    uint32_t number_of_bytes;
} GetEntropy;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} LoadWallet_encryption_key_t;

typedef struct _LoadWallet {
    bool has_wallet_number;
    uint32_t wallet_number;
    bool has_encryption_key;
    LoadWallet_encryption_key_t encryption_key;
} LoadWallet;

typedef struct {
    size_t size;
    uint8_t bytes[65];
} MasterPublicKey_public_key_t;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} MasterPublicKey_chain_code_t;

typedef struct _MasterPublicKey {
    MasterPublicKey_public_key_t public_key;
    MasterPublicKey_chain_code_t chain_code;
} MasterPublicKey;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} NewWallet_encryption_key_t;

typedef struct {
    size_t size;
    uint8_t bytes[40];
} NewWallet_wallet_name_t;

typedef struct _NewWallet {
    bool has_wallet_number;
    uint32_t wallet_number;
    bool has_encryption_key;
    NewWallet_encryption_key_t encryption_key;
    bool has_wallet_name;
    NewWallet_wallet_name_t wallet_name;
    bool has_is_hidden;
    bool is_hidden;
} NewWallet;

typedef struct _NumberOfAddresses {
    uint32_t number_of_addresses;
} NumberOfAddresses;

typedef struct _Ping {
    bool has_greeting;
    pb_callback_t greeting;
} Ping;

typedef struct _PingResponse {
    pb_callback_t version;
} PingResponse;

typedef struct _SignTransaction {
    uint32_t address_handle;
    pb_callback_t transaction_data;
} SignTransaction;

typedef struct {
    size_t size;
    uint8_t bytes[73];
} Signature_signature_data_t;

typedef struct _Signature {
    Signature_signature_data_t signature_data;
} Signature;

typedef struct {
    size_t size;
    uint8_t bytes[40];
} WalletInfo_wallet_name_t;

typedef struct {
    size_t size;
    uint8_t bytes[16];
} WalletInfo_wallet_uuid_t;

typedef struct _WalletInfo {
    uint32_t wallet_number;
    uint32_t version;
    WalletInfo_wallet_name_t wallet_name;
    WalletInfo_wallet_uuid_t wallet_uuid;
} WalletInfo;

typedef struct _Wallets {
    pb_callback_t wallet_info;
} Wallets;

typedef struct {
    size_t size;
    uint8_t bytes[64];
} RestoreWallet_seed_t;

typedef struct _RestoreWallet {
    NewWallet new_wallet;
    RestoreWallet_seed_t seed;
} RestoreWallet;

/* Default values for struct fields */
extern const uint32_t NewWallet_wallet_number_default;
extern const NewWallet_encryption_key_t NewWallet_encryption_key_default;
extern const NewWallet_wallet_name_t NewWallet_wallet_name_default;
extern const bool NewWallet_is_hidden_default;
extern const uint32_t LoadWallet_wallet_number_default;
extern const LoadWallet_encryption_key_t LoadWallet_encryption_key_default;
extern const bool BackupWallet_is_encrypted_default;
extern const uint32_t BackupWallet_device_default;

/* Struct field encoding specification for nanopb */
extern const pb_field_t Ping_fields[2];
extern const pb_field_t PingResponse_fields[2];
extern const pb_field_t Success_fields[1];
extern const pb_field_t Failure_fields[2];
extern const pb_field_t NewWallet_fields[5];
extern const pb_field_t NewAddress_fields[1];
extern const pb_field_t Address_fields[4];
extern const pb_field_t GetNumberOfAddresses_fields[1];
extern const pb_field_t NumberOfAddresses_fields[2];
extern const pb_field_t GetAddressAndPublicKey_fields[2];
extern const pb_field_t SignTransaction_fields[3];
extern const pb_field_t Signature_fields[2];
extern const pb_field_t LoadWallet_fields[3];
extern const pb_field_t UnloadWallet_fields[1];
extern const pb_field_t FormatWalletArea_fields[2];
extern const pb_field_t ChangeEncryptionKey_fields[2];
extern const pb_field_t ChangeWalletName_fields[2];
extern const pb_field_t ListWallets_fields[1];
extern const pb_field_t WalletInfo_fields[5];
extern const pb_field_t Wallets_fields[2];
extern const pb_field_t BackupWallet_fields[3];
extern const pb_field_t RestoreWallet_fields[3];
extern const pb_field_t GetDeviceUUID_fields[1];
extern const pb_field_t DeviceUUID_fields[2];
extern const pb_field_t GetEntropy_fields[2];
extern const pb_field_t Entropy_fields[2];
extern const pb_field_t GetMasterPublicKey_fields[1];
extern const pb_field_t MasterPublicKey_fields[3];

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif