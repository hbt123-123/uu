// rea decompile_all
// name: FUN_1000f9ad8
// address: 0x1000f9ad8
// body: available
// range: 0x1000f9ad8-0x1000f9ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1000f9ad8(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_1000c7b64();
    lVar6 = *(long *)(lVar3 + 0x78);
    bVar1 = *(byte *)(lVar3 + 0x81);
    _swift_release(lVar3);
    if (((bVar1 & 1) == 0) && (lVar6 == 6)) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000f9ca8,0,0xd0000000000000a2,0x80000001008898a0,0xd000000000000029,
                    0x8000000100889a30,0x139,0);
      goto LAB_1000f9bf4;
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  puVar4 = *(ulong **)(DAT_100b360a8 + 0x70);
  FUN_1003b2720();
  uVar7 = *puVar4;
  uVar5 = uVar7;
  _swift_retain();
  FUN_10039a1b8();
  _swift_release(uVar7);
  if ((uVar5 & 1) != 0) {
    FUN_1000b4ae8();
  }
LAB_1000f9bf4:
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar3 = DAT_100b360a8;
  uVar8 = *(undefined8 *)(DAT_100b360a8 + 0x50);
  _swift_retain(uVar8);
  FUN_10000dd3c();
  _swift_release(uVar8);
  uVar8 = *(undefined8 *)(lVar3 + 0x80);
  _swift_retain(uVar8);
  FUN_100021838(param_1);
  _swift_release(uVar8);
  uVar2 = 0;
  FUN_1000b35b4(0);
  FUN_1000b3ea8(param_1,uVar2 & 1);
  return 0;
}

