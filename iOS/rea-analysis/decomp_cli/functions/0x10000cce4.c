// rea decompile_all
// name: FUN_10000cce4
// address: 0x10000cce4
// body: available
// range: 0x10000cce4-0x10000ce3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10000cce4(void)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x20 + 0x28);
  if (lVar7 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(lVar3);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar3 = lVar7;
  }
  uVar5 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar5 != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 0x30);
    uVar1 = uVar6 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      _swift_bridgeObjectRetain(lVar7);
      __ss11_StringGutsV4growyySiF(0x20);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(uVar4,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      __sSS6appendyySSF(0x2820,0xe200000000000000);
      __sSS6appendyySSF(uVar6,uVar5);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      goto LAB_10000ce1c;
    }
  }
  _swift_bridgeObjectRetain(lVar7);
  __ss11_StringGutsV4growyySiF(0x1b);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(uVar4,lVar3);
  _swift_bridgeObjectRelease(lVar3);
LAB_10000ce1c:
  auVar2._8_8_ = 0x80000001000c4a70;
  auVar2._0_8_ = 0xd000000000000019;
  return auVar2;
}

