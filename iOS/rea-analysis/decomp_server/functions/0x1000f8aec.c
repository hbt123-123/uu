// rea decompile_all
// name: FUN_1000f8aec
// address: 0x1000f8aec
// body: available
// range: 0x1000f8aec-0x1000f8c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f8aec(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined1 auStack_68 [24];
  
  FUN_1000fb630();
  uVar1 = 0;
  FUN_100401b14(0);
  local_90 = (undefined4)param_1;
  FUN_1003fb48c(uVar1,FUN_1000fb824,auStack_a0,0xd0000000000000a2,0x80000001008898a0,
                0xd000000000000019,0x80000001008899e0,0xc3,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar4 = *(long *)(DAT_100b360a8 + 0x80);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = lVar4;
  _swift_retain();
  if (lVar2 == 0) {
    uVar5 = 0;
    uVar6 = 1;
    uVar1 = 0;
  }
  else {
    FUN_1000c7b64();
    uVar1 = *(undefined8 *)(lVar3 + 0x40);
    uVar5 = (uint)*(byte *)(lVar3 + 0x48);
    uVar6 = (uint)*(byte *)(lVar3 + 0x49);
    _swift_release(lVar3);
  }
  FUN_1000157e8(param_1,param_2 & 0xffffffff | (param_2 >> 0x20 & 1) << 0x20,uVar1,
                uVar5 | uVar6 << 8);
  _swift_release(lVar4);
  return;
}

