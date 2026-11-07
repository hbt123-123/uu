// rea decompile_all
// name: FUN_100589c30
// address: 0x100589c30
// body: available
// range: 0x100589c30-0x100589e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100589c30(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_d8 [24];
  ulong local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar9 = *(ulong *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  local_78 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_6f = (undefined7)*(undefined8 *)(unaff_x20 + 0x61);
  uStack_68 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x61) >> 0x38);
  uStack_77 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar10 == 0) {
LAB_100589de0:
    uVar7 = 1;
  }
  else {
    uVar1 = CONCAT71(uStack_77,local_78);
    uVar2 = CONCAT71(uStack_6f,uStack_70);
    local_b0 = lVar10;
    uStack_a8 = uVar11;
    uStack_a0 = uVar13;
    local_98 = uVar14;
    local_90 = uVar9;
    uStack_88 = uVar7;
    uStack_80 = uVar12;
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(uVar11);
    FUN_100008184(uVar13,uVar14);
    _swift_bridgeObjectRetain(uVar9);
    FUN_1005a7f54(uVar7,uVar12,uVar1,uVar2);
    FUN_100510c38();
    if ((uVar9 & 1) != 0) {
      FUN_10056a264();
      lVar8 = *(long *)(lVar10 + 0x10);
      uVar9 = 0xffffffffffffffff;
      lVar5 = lVar10 + 0x20;
      do {
        if (uVar9 - lVar8 == -1) {
          _swift_bridgeObjectRelease(lVar10);
          if (uVar1 != 0) {
            FUN_100008184(uVar7,uVar12);
            uVar9 = uVar1;
            _swift_bridgeObjectRetain();
            FUN_100510c38();
            FUN_100040bb4(&local_b0,&DAT_100aab4f8,&DAT_100838f20);
            FUN_100541944(uVar7,uVar12,uVar1,uVar2);
            if ((uVar9 & 1) != 0) goto LAB_100589de0;
            goto LAB_100589d64;
          }
          FUN_100040bb4(&local_b0,&DAT_100aab4f8,&DAT_100838f20);
          goto LAB_100589de0;
        }
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100589e08);
          (*pcVar4)();
        }
        FUN_1000b142c(lVar5,auStack_d8);
        lVar3 = lStack_b8;
        uVar6 = local_c0;
        FUN_10003f030(auStack_d8,local_c0);
        (**(code **)(lVar3 + 0x20))(uVar6,lVar3);
        FUN_10003f094(auStack_d8);
        lVar5 = lVar5 + 0x28;
      } while ((uVar6 & 1) != 0);
      _swift_bridgeObjectRelease(lVar10);
    }
    FUN_100040bb4(&local_b0,&DAT_100aab4f8,&DAT_100838f20);
LAB_100589d64:
    uVar7 = 0;
  }
  return uVar7;
}

