// rea decompile_all
// name: FUN_10007e8bc
// address: 0x10007e8bc
// body: available
// range: 0x10007e8bc-0x10007eb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007e8bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
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
  
  FUN_1000133cc(unaff_x20 + 0x80,&local_d8,&DAT_100104818,&DAT_1000d62d0);
  if (lStack_d0 == 0) {
    FUN_10001fc18(&local_d8,&DAT_100104818,&DAT_1000d62d0);
    uVar10 = *(ulong *)(unaff_x20 + 0x78);
    if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10007eb4c);
      (*pcVar3)();
    }
    uVar6 = uVar10;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100080fc8();
      lVar9 = *(long *)(uVar10 + 0x10);
    }
    else {
      lVar9 = *(long *)(uVar10 + 0x10);
    }
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10007eb48);
      (*pcVar3)();
    }
    *(long *)(uVar10 + 0x10) = lVar9 + -1;
    FUN_10006c8f8(uVar10 + lVar9 * 0x28 + -8,&local_d8);
    FUN_10005b984(&local_d8,&local_90);
    lVar9 = lStack_78;
    plVar7 = &local_90;
    FUN_100001400(plVar7,lStack_78);
    puVar8 = auStack_e0 + -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar8,plVar7,lVar9);
    FUN_100096aa4();
    plVar7 = &local_90;
    FUN_100001428();
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,plVar7,0,0);
    *plVar7 = (long)puVar8;
    plVar7[1] = uVar10;
    plVar7[2] = lVar9;
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
    puVar5 = (undefined8 *)&stack0xffffffffffffffcc;
    _swift_dynamicCast(puVar5,&local_d8,puVar4,param_1,6);
    lVar2 = local_80;
    lVar1 = lStack_88;
    lVar9 = local_90;
    if (((ulong)puVar5 & 1) == 0) {
      FUN_100083864();
      _swift_allocError(&DAT_1000fa958,puVar5,0,0);
      puVar5[1] = 0xe300000000000000;
      *puVar5 = 0x6c696e;
      puVar5[2] = lVar9;
      puVar5[3] = lVar1;
      puVar5[4] = lVar2;
      *(undefined1 *)(puVar5 + 5) = 0;
      _swift_willThrow();
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(lVar2);
      FUN_100065194(&local_90);
    }
    else {
      FUN_100065194(&local_90);
    }
  }
  return;
}

