// rea decompile_all
// name: FUN_10005a35c
// address: 0x10005a35c
// body: available
// range: 0x10005a35c-0x10005a4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10005a35c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  uVar6 = *(ulong *)(unaff_x20 + 0x90);
  if (uVar6 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x88) & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar2 = 0x5c;
      uVar4 = 0xe100000000000000;
      FUN_100053b50(0x5c,0xe100000000000000,0x5c5c,0xe200000000000000);
      uVar3 = 0x3a;
      uVar5 = 0xe100000000000000;
      FUN_100053b50(0x3a,0xe100000000000000,0x3a5c,0xe200000000000000,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      uVar2 = 0x5b;
      uVar4 = 0xe100000000000000;
      FUN_100053b50(0x5b,0xe100000000000000,0x5b5c,0xe200000000000000,uVar3,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      uVar3 = 0x5d;
      uVar5 = 0xe100000000000000;
      FUN_100053b50(0x5d,0xe100000000000000,0x5d5c,0xe200000000000000,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      uVar2 = 1;
      FUN_100052ee8(1,uVar3,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(uVar2,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      __sSS6appendyySSF(0x5d,0xe100000000000000);
      uVar2 = 0x5b;
      uVar3 = 0xe100000000000000;
      goto LAB_10005a490;
    }
  }
  uVar2 = 0;
  uVar3 = 0xe000000000000000;
LAB_10005a490:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}

