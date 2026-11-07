// rea decompile_all
// name: FUN_10058d154
// address: 0x10058d154
// body: available
// range: 0x10058d154-0x10058d30f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10058d154(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 local_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(ulong *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(ulong *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar7 == 0) {
    return 1;
  }
  local_90 = lVar7;
  uStack_88 = uVar9;
  uStack_80 = uVar11;
  local_78 = uVar5;
  local_70 = uVar6;
  uStack_68 = uVar8;
  uStack_60 = uVar10;
  local_58 = uVar12;
  _swift_bridgeObjectRetain(lVar7);
  FUN_100008184(uVar9,uVar11);
  _swift_bridgeObjectRetain(uVar5);
  FUN_1005a7f54(uVar6,uVar8,uVar10,uVar12);
  FUN_100510c38();
  if ((uVar5 & 1) == 0) {
LAB_10058d2ac:
    FUN_100040bb4(&local_90,&DAT_100aab4c0,&DAT_100837c30);
  }
  else {
    if (uVar10 != 0) {
      FUN_100008184(uVar6,uVar8);
      uVar5 = uVar10;
      _swift_bridgeObjectRetain();
      FUN_100510c38();
      FUN_100541944(uVar6,uVar8,uVar10,uVar12);
      if ((uVar5 & 1) == 0) goto LAB_10058d2ac;
    }
    FUN_10056a264();
    lVar4 = *(long *)(lVar7 + 0x10);
    uVar5 = 0xffffffffffffffff;
    lVar3 = lVar7 + 0x20;
    do {
      if (uVar5 - lVar4 == -1) {
        FUN_100040bb4(&local_90,&DAT_100aab4c0,&DAT_100837c30);
        _swift_bridgeObjectRelease(lVar7);
        return 1;
      }
      uVar5 = uVar5 + 1;
      if (*(ulong *)(lVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10058d310);
        (*pcVar2)();
      }
      FUN_1000b142c(lVar3,auStack_b8);
      lVar1 = lStack_98;
      uVar10 = local_a0;
      FUN_10003f030(auStack_b8,local_a0);
      (**(code **)(lVar1 + 0x20))(uVar10,lVar1);
      FUN_10003f094(auStack_b8);
      lVar3 = lVar3 + 0x28;
    } while ((uVar10 & 1) != 0);
    FUN_100040bb4(&local_90,&DAT_100aab4c0,&DAT_100837c30);
    _swift_bridgeObjectRelease(lVar7);
  }
  return 0;
}

