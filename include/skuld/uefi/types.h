#ifndef __SKULD_UEFI_TYPES_H__
#define __SKULD_UEFI_TYPES_H__

// https://uefi.org/specs/UEFI/2.10/02_Overview.html?highlight=uint128#data-types

typedef bool BOOLEAN;
#define TRUE true
#define FALSE false

typedef int INTN;
typedef unsigned int UINTN;
typedef signed char INT8;
typedef unsigned char UINT8;
typedef short INT16;
typedef unsigned short UINT16;
typedef long INT32;
typedef unsigned long UINT32;
typedef long long INT64;
typedef unsigned long long UINT64;

// todo: not define unsed INT128 and UINT128
#define INT128
#define UINT128

typedef char CHAR8;
typedef unsigned short CHAR16;
typedef char16_t CHAR16;

typedef void VOID;

typedef struct _EFI_GUID {
    UINT32  Data1;
    UINT16  Data2;
    UINT16  Data3;
    UINT8   Data4[8]; 
} EFI_GUID;


typedef UINTN EFI_STATUS
typedef VOID* EFI_HANDLE
typedef VOID* EFI_EVENT
typedef UINT64 EFI_LBA
typedef UINTN EFI_TPL

typedef struct _EFI_MAC_ADDRESS {
    UINT8                   Addr[32];
} EFI_MAC_ADDRESS;

typedef struct _EFI_IPv4_ADDRESS {
    UINT8                   Addr[4];
} EFI_IPv4_ADDRESS;

typedef struct _EFI_IPv6_ADDRESS {
    UINT8                   Addr[16];
} EFI_IPv6_ADDRESS;

// todo: not define unsed EFI_IP_ADDRESS and Bitfields
#define EFI_IP_ADDRESS 
#define Bitfields

// such define is empty, only for read
#define IN
#define OUT
#define OPTIONAL
#define CONST const
#define EFIAPI

#endif