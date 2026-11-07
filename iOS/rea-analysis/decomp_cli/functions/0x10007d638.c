// rea decompile_all
// name: FUN_10007d638
// address: 0x10007d638
// body: available
// range: 0x10007d638-0x10007d957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007d638(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
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
  long local_38;
  
  FUN_1000133cc(unaff_x20 + 0x30,&local_d8,&DAT_100104818,&DAT_1000d62d0);
  if (lStack_d0 == 0) {
    FUN_10001fc18(&local_d8,&DAT_100104818,&DAT_1000d62d0);
    uVar8 = *(ulong *)(unaff_x20 + 0x10);
    if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10007d958);
      (*pcVar1)();
    }
    uVar4 = uVar8;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar4 & 1) == 0) {
      FUN_100080fc8();
      lVar7 = *(long *)(uVar8 + 0x10);
    }
    else {
      lVar7 = *(long *)(uVar8 + 0x10);
    }
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10007d954);
      (*pcVar1)();
    }
    *(long *)(uVar8 + 0x10) = lVar7 + -1;
    FUN_10006c8f8(uVar8 + lVar7 * 0x28 + -8,&local_d8);
    FUN_10005b984(&local_d8,&local_90);
    lVar7 = lStack_78;
    plVar5 = &local_90;
    FUN_100001400(plVar5,lStack_78);
    puVar6 = auStack_e0 + -(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(puVar6,plVar5,lVar7);
    FUN_100096aa4();
    plVar5 = &local_90;
    FUN_100001428();
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,plVar5,0,0);
    *plVar5 = (long)puVar6;
    plVar5[1] = uVar8;
    plVar5[2] = lVar7;
    plVar5[6] = lStack_78;
    plVar5[5] = local_80;
    plVar5[4] = lStack_88;
    plVar5[3] = local_90;
    plVar5[8] = lStack_68;
    plVar5[7] = local_70;
    plVar5[9] = local_60;
    *(undefined1 *)(plVar5 + 10) = 0xc;
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
    FUN_1000133cc(&lStack_78,&local_d8,&DAT_100104198,&DAT_1000d5180);
    if (lStack_c0 == 0) {
      plVar5 = &local_d8;
      FUN_10001fc18(plVar5,&DAT_100104198,&DAT_1000d5180);
    }
    else {
      puVar2 = &DAT_100104848;
      FUN_10000eb08(&DAT_100104848,&DAT_1000d5190);
      plVar5 = &local_38;
      _swift_dynamicCast(plVar5,&local_d8,PTR___sypN_1000f0728 + 8,puVar2,6);
      if (((ulong)plVar5 & 1) != 0) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
        param_1[3] = &DAT_1000f90c0;
        FUN_100083a1c();
        param_1[4] = plVar5;
        puVar2 = &DAT_1000f8fe8;
        _swift_allocObject(&DAT_1000f8fe8,0x88,7);
        *param_1 = puVar2;
        FUN_100083828(&local_90,puVar2 + 0x18);
        puVar3 = &DAT_100104858;
        FUN_10000eb08(&DAT_100104858,&DAT_1000d5198);
        *(undefined **)(puVar2 + 0x78) = puVar3;
        *(undefined ***)(puVar2 + 0x80) = &PTR_PTR_1000f91f8;
        *(long *)(puVar2 + 0x60) = local_38;
        *(undefined8 *)(puVar2 + 0x68) = 0;
        _swift_bridgeObjectRetain(uVar9);
        FUN_100065194(&local_90);
        *(undefined8 *)(puVar2 + 0x10) = uVar9;
        return;
      }
    }
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,plVar5,0,0);
    *plVar5 = 3;
    plVar5[2] = 0;
    plVar5[1] = 0;
    plVar5[4] = 0;
    plVar5[3] = 0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[9] = 0;
    *(undefined1 *)(plVar5 + 10) = 0x11;
    _swift_willThrow();
    FUN_100065194(&local_90);
  }
  return;
}

