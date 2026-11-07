// rea decompile_all
// name: FUN_100112ad8
// address: 0x100112ad8
// body: available
// range: 0x100112ad8-0x100112ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100112ad8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  
  FUN_100401b14(0);
  local_70 = param_2;
  FUN_1003fb48c(FUN_100112cec,auStack_80,0xd0000000000000ac,0x800000010088b950,0xd00000000000001e,
                0x800000010088be70,0x191,0);
  local_90 = (int)param_1;
  local_88 = param_2;
  FUN_1003fb48c(FUN_100112cf4,auStack_a0,0xd0000000000000ac,0x800000010088b950,0xd00000000000001e,
                0x800000010088be70,0x192,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar1 = DAT_100b360a8;
  uVar2 = *(undefined8 *)(DAT_100b360a8 + 0x80);
  _swift_retain(uVar2);
  uVar3 = param_1;
  FUN_10001adc4(param_1,param_2,1);
  _swift_release(uVar2);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_b0 = (int)uVar3;
  FUN_1003fb48c(FUN_100112d00,local_c0,0xd0000000000000ac,0x800000010088b950,0xd00000000000001e,
                0x800000010088be70,0x194,0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c0[0] = (int)param_1;
  local_b8 = param_2;
  local_b0 = (int)uVar3;
  FUN_1003fb48c(FUN_100112d08,auStack_d0,0xd0000000000000ac,0x800000010088b950,0xd00000000000001e,
                0x800000010088be70,0x195,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x80);
  _swift_retain(uVar3);
  FUN_100022b6c(param_1);
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(lVar1 + 0x80);
  _swift_retain(uVar3);
  FUN_100024070();
  _swift_release(uVar3);
  return;
}

