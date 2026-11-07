// rea decompile_all
// name: thunk_FUN_100591768
// address: 0x100591eb4
// body: available
// range: 0x100591eb4-0x100591eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_100591768(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_c8 [24];
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(ulong *)(unaff_x20 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  uVar6 = *(ulong *)(unaff_x20 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  if (lVar7 == 0) {
    return 1;
  }
  lStack_a0 = lVar7;
  uStack_98 = uVar9;
  uStack_90 = uVar11;
  uStack_88 = uVar6;
  uStack_78 = uVar8;
  uStack_70 = uVar10;
  uStack_68 = uVar12;
  uStack_60 = uVar5;
  _swift_bridgeObjectRetain(lVar7);
  FUN_100008184(uVar9,uVar11);
  _swift_bridgeObjectRetain(uVar6);
  FUN_1005a7f54(uVar8,uVar10,uVar12,uVar5);
  FUN_100510c38();
  if ((uVar6 & 1) == 0) {
LAB_1005918c8:
    FUN_100040bb4(&lStack_a0,&DAT_100aab4a0,&DAT_100837c10);
  }
  else {
    if (uVar12 != 0) {
      FUN_100008184(uVar8,uVar10);
      uVar6 = uVar12;
      _swift_bridgeObjectRetain();
      FUN_100510c38();
      FUN_100541944(uVar8,uVar10,uVar12,uVar5);
      if ((uVar6 & 1) == 0) goto LAB_1005918c8;
    }
    FUN_10056a264();
    lVar4 = *(long *)(lVar7 + 0x10);
    uVar6 = 0xffffffffffffffff;
    lVar3 = lVar7 + 0x20;
    do {
      if (uVar6 - lVar4 == -1) {
        FUN_100040bb4(&lStack_a0,&DAT_100aab4a0,&DAT_100837c10);
        _swift_bridgeObjectRelease(lVar7);
        return 1;
      }
      uVar6 = uVar6 + 1;
      if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10059192c);
        (*pcVar2)();
      }
      FUN_1000b142c(lVar3,auStack_c8);
      lVar1 = lStack_a8;
      uVar12 = uStack_b0;
      FUN_10003f030(auStack_c8,uStack_b0);
      (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
      FUN_10003f094(auStack_c8);
      lVar3 = lVar3 + 0x28;
    } while ((uVar12 & 1) != 0);
    FUN_100040bb4(&lStack_a0,&DAT_100aab4a0,&DAT_100837c10);
    _swift_bridgeObjectRelease(lVar7);
  }
  return 0;
}

