// rea decompile_all
// name: FUN_1001127fc
// address: 0x1001127fc
// body: available
// range: 0x1001127fc-0x100112a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001127fc(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
  long local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  uint local_a4;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  lVar1 = param_2;
  FUN_100435e24(param_2,param_3,param_4);
  FUN_100401b14(0);
  local_90 = param_1;
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_4;
  local_70 = lVar1 == 2;
  FUN_1003fb48c(FUN_100112a48,auStack_a0,0xd0000000000000ac,0x800000010088b950,0xd000000000000035,
                0x800000010088bd50,0x1a4,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  local_a4 = (uint)(lVar1 == 2);
  uVar4 = *(undefined8 *)(DAT_100b360a8 + 0x80);
  FUN_100435bb4(param_2,param_3,param_4);
  puVar2 = &DAT_10099d718;
  _swift_allocObject(&DAT_10099d718,0x28,7);
  *(undefined4 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = param_2;
  uStack_c8 = param_3;
  local_c0 = lVar1 == 2;
  _swift_retain(uVar4);
  _swift_retain(param_6);
  FUN_1003fb48c(FUN_100112a8c,auStack_e0,0xd0000000000000a9,0x8000000100877660,0xd00000000000004a,
                0x800000010087a880,0x1be,0);
  puVar3 = &DAT_10099d740;
  _swift_allocObject(&DAT_10099d740,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100112a80;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  _swift_retain(puVar2);
  FUN_10004e158(param_2,param_3,local_a4,FUN_100112abc,puVar3);
  _swift_release(uVar4);
  _swift_bridgeObjectRelease(param_3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}

