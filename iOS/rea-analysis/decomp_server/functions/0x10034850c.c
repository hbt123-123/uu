// rea decompile_all
// name: FUN_10034850c
// address: 0x10034850c
// body: available
// range: 0x10034850c-0x10034869f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034850c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = &DAT_100a86ef0;
  FUN_100004bb4(&DAT_100a86ef0,&DAT_10081ae80);
  lVar3 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar6 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar2,uVar6 + lVar7 * 0x12,uVar5 | 7);
  *(undefined8 *)(puVar2 + 0x18) = 0x24;
  *(undefined8 *)(puVar2 + 0x10) = 0x12;
  puVar1 = puVar2 + uVar6;
  __s10Foundation8URLErrorV4CodeV38backgroundSessionInUseByAnotherProcessAEvgZ(puVar1);
  __s10Foundation8URLErrorV4CodeV32backgroundSessionWasDisconnectedAEvgZ(puVar1 + lVar7);
  __s10Foundation8URLErrorV4CodeV17badServerResponseAEvgZ(puVar1 + lVar7 * 2);
  __s10Foundation8URLErrorV4CodeV12callIsActiveAEvgZ(puVar1 + lVar7 * 3);
  __s10Foundation8URLErrorV4CodeV19cannotConnectToHostAEvgZ(puVar1 + lVar7 * 4);
  __s10Foundation8URLErrorV4CodeV14cannotFindHostAEvgZ(puVar1 + lVar7 * 5);
  __s10Foundation8URLErrorV4CodeV21cannotLoadFromNetworkAEvgZ(puVar1 + lVar7 * 6);
  __s10Foundation8URLErrorV4CodeV14dataNotAllowedAEvgZ(puVar1 + lVar7 * 7);
  __s10Foundation8URLErrorV4CodeV15dnsLookupFailedAEvgZ(puVar1 + lVar7 * 8);
  __s10Foundation8URLErrorV4CodeV31downloadDecodingFailedMidStreamAEvgZ(puVar1 + lVar7 * 9);
  __s10Foundation8URLErrorV4CodeV32downloadDecodingFailedToCompleteAEvgZ(puVar1 + lVar7 * 10);
  __s10Foundation8URLErrorV4CodeV23internationalRoamingOffAEvgZ(puVar1 + lVar7 * 0xb);
  __s10Foundation8URLErrorV4CodeV21networkConnectionLostAEvgZ(puVar1 + lVar7 * 0xc);
  __s10Foundation8URLErrorV4CodeV22notConnectedToInternetAEvgZ(puVar1 + lVar7 * 0xd);
  __s10Foundation8URLErrorV4CodeV22secureConnectionFailedAEvgZ(puVar1 + lVar7 * 0xe);
  __s10Foundation8URLErrorV4CodeV27serverCertificateHasBadDateAEvgZ(puVar1 + lVar7 * 0xf);
  __s10Foundation8URLErrorV4CodeV28serverCertificateNotYetValidAEvgZ(puVar1 + lVar7 * 0x10);
  __s10Foundation8URLErrorV4CodeV8timedOutAEvgZ(puVar1 + lVar7 * 0x11);
  puVar4 = puVar2;
  FUN_100347f1c();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar1,0x12,lVar3);
  _swift_deallocClassInstance(puVar2,0x20,7);
  DAT_100b365f0 = puVar4;
  return;
}

