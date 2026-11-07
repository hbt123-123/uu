// rea decompile_all
// name: FUN_100590b14
// address: 0x100590b14
// body: available
// range: 0x100590b14-0x100590d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100590b14(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_e8 [24];
  ulong local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  ulong local_a8;
  long local_a0;
  long lStack_98;
  ulong uStack_90;
  long local_88;
  undefined1 local_80;
  undefined1 auStack_78 [24];
  ulong local_60;
  long lStack_58;
  
  lVar2 = *unaff_x20;
  FUN_10056a100();
  lVar3 = *(long *)(lVar2 + 0x10);
  uVar4 = 0xffffffffffffffff;
  lVar5 = lVar2 + 0x20;
  while (uVar4 - lVar3 != -1) {
    uVar4 = uVar4 + 1;
    if (*(ulong *)(lVar2 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100590d74);
      (*pcVar1)();
    }
    FUN_1000b142c(lVar5,auStack_78);
    lVar6 = lStack_58;
    uVar8 = local_60;
    FUN_10003f030(auStack_78,local_60);
    (**(code **)(lVar6 + 0x20))(uVar8,lVar6);
    FUN_10003f094(auStack_78);
    lVar5 = lVar5 + 0x28;
    if ((uVar8 & 1) == 0) goto LAB_100590bb4;
  }
  _swift_bridgeObjectRelease(lVar2);
  lVar5 = unaff_x20[6];
  lVar2 = unaff_x20[5];
  lVar7 = unaff_x20[10];
  lVar3 = unaff_x20[9];
  lVar9 = unaff_x20[0xc];
  uVar8 = unaff_x20[0xb];
  uVar4 = unaff_x20[8];
  lVar6 = unaff_x20[7];
  local_80 = (undefined1)unaff_x20[0xd];
  if (lVar2 == 0) {
    return 1;
  }
  local_c0 = lVar2;
  lStack_b8 = lVar5;
  lStack_b0 = lVar6;
  local_a8 = uVar4;
  local_a0 = lVar3;
  lStack_98 = lVar7;
  uStack_90 = uVar8;
  local_88 = lVar9;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100008184(lVar5,lVar6);
  _swift_bridgeObjectRetain(uVar4);
  FUN_1005a7f54(lVar3,lVar7,uVar8,lVar9);
  FUN_100510c38();
  if ((uVar4 & 1) == 0) {
LAB_100590d10:
    FUN_100040bb4(&local_c0,&DAT_100aab4a8,&DAT_10083e020);
    return 0;
  }
  if (uVar8 != 0) {
    FUN_100008184(lVar3,lVar7);
    uVar4 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_100510c38();
    FUN_100541944(lVar3,lVar7,uVar8,lVar9);
    if ((uVar4 & 1) == 0) goto LAB_100590d10;
  }
  FUN_10056a264();
  lVar3 = *(long *)(lVar2 + 0x10);
  uVar4 = 0xffffffffffffffff;
  lVar5 = lVar2 + 0x20;
  do {
    if (uVar4 - lVar3 == -1) {
      FUN_100040bb4(&local_c0,&DAT_100aab4a8,&DAT_10083e020);
      _swift_bridgeObjectRelease(lVar2);
      return 1;
    }
    uVar4 = uVar4 + 1;
    if (*(ulong *)(lVar2 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100590d78);
      (*pcVar1)();
    }
    FUN_1000b142c(lVar5,auStack_e8);
    lVar6 = lStack_c8;
    uVar8 = local_d0;
    FUN_10003f030(auStack_e8,local_d0);
    (**(code **)(lVar6 + 0x20))(uVar8,lVar6);
    FUN_10003f094(auStack_e8);
    lVar5 = lVar5 + 0x28;
  } while ((uVar8 & 1) != 0);
  FUN_100040bb4(&local_c0,&DAT_100aab4a8,&DAT_10083e020);
LAB_100590bb4:
  _swift_bridgeObjectRelease(lVar2);
  return 0;
}

