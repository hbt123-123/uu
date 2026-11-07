// rea decompile_all
// name: FUN_10007d958
// address: 0x10007d958
// body: available
// range: 0x10007d958-0x10007dbeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10007d958(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  undefined1 auStack_e0 [8];
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  byte local_31;
  
  FUN_1000133cc(unaff_x20 + 0x80,&local_d8,&DAT_100104818,&DAT_1000d62d0);
  if (lStack_d0 == 0) {
    FUN_10001fc18(&local_d8,&DAT_100104818,&DAT_1000d62d0);
    uVar11 = *(ulong *)(unaff_x20 + 0x78);
    if (*(long *)(uVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10007dbec);
      (*pcVar3)();
    }
    uVar6 = uVar11;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100080fc8();
      lVar10 = *(long *)(uVar11 + 0x10);
    }
    else {
      lVar10 = *(long *)(uVar11 + 0x10);
    }
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10007dbe8);
      (*pcVar3)();
    }
    *(long *)(uVar11 + 0x10) = lVar10 + -1;
    FUN_10006c8f8(uVar11 + lVar10 * 0x28 + -8,&local_d8);
    FUN_10005b984(&local_d8,&local_90);
    lVar10 = lStack_78;
    plVar7 = &local_90;
    FUN_100001400(plVar7,lStack_78);
    puVar8 = auStack_e0 + -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(*(long *)(lVar10 + -8) + 0x10))(puVar8,plVar7,lVar10);
    FUN_100096aa4();
    plVar7 = &local_90;
    FUN_100001428();
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,plVar7,0,0);
    *plVar7 = (long)puVar8;
    plVar7[1] = uVar11;
    plVar7[2] = lVar10;
    plVar7[6] = lStack_78;
    plVar7[5] = local_80;
    plVar7[4] = lStack_88;
    plVar7[3] = local_90;
    plVar7[8] = lStack_68;
    plVar7[7] = local_70;
    plVar7[9] = local_60;
    *(undefined1 *)(plVar7 + 10) = 0xc;
    _swift_willThrow();
    FUN_100001428(&local_d8);
    uVar9 = extraout_w8;
  }
  else {
    lStack_68 = uStack_b0;
    local_70 = local_b8;
    uStack_58 = uStack_a0;
    local_60 = local_a8;
    local_50 = local_98;
    lStack_88 = lStack_d0;
    local_90 = local_d8;
    lStack_78 = lStack_c0;
    local_80 = local_c8;
    puVar4 = &DAT_100104198;
    FUN_1000133cc(&lStack_78,&local_d8,&DAT_100104198,&DAT_1000d5180);
    FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
    pbVar5 = &local_31;
    _swift_dynamicCast(pbVar5,&local_d8,puVar4,PTR___sSbN_1000f03a0,6);
    lVar2 = local_80;
    lVar1 = lStack_88;
    lVar10 = local_90;
    if (((ulong)pbVar5 & 1) == 0) {
      FUN_100083864();
      _swift_allocError(&DAT_1000fa958,pbVar5,0,0);
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0xe3;
      pbVar5[0] = 0x6e;
      pbVar5[1] = 0x69;
      pbVar5[2] = 0x6c;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      *(long *)(pbVar5 + 0x10) = lVar10;
      *(long *)(pbVar5 + 0x18) = lVar1;
      *(long *)(pbVar5 + 0x20) = lVar2;
      pbVar5[0x28] = 0;
      _swift_willThrow();
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(lVar2);
      FUN_100065194(&local_90);
      uVar9 = extraout_w8_00;
    }
    else {
      FUN_100065194(&local_90);
      uVar9 = (uint)local_31;
    }
  }
  return uVar9 & 1;
}

