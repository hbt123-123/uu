// rea decompile_all
// name: FUN_10007eddc
// address: 0x10007eddc
// body: available
// range: 0x10007eddc-0x10007f0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10007eddc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long alStack_f0 [4];
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  lVar3 = 0;
  __sSqMa();
  lVar10 = *(long *)(lVar3 + -8);
  puVar8 = (undefined8 *)((long)alStack_f0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  FUN_1000133cc(unaff_x20 + 0x80,alStack_f0 + 1,&DAT_100104818,&DAT_1000d62d0);
  if (alStack_f0[2] == 0) {
    FUN_10001fc18(alStack_f0 + 1,&DAT_100104818,&DAT_1000d62d0);
    uVar9 = *(ulong *)(unaff_x20 + 0x78);
    if (*(long *)(uVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007f0f8);
      (*pcVar2)();
    }
    uVar6 = uVar9;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100080fc8();
      lVar3 = *(long *)(uVar9 + 0x10);
    }
    else {
      lVar3 = *(long *)(uVar9 + 0x10);
    }
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007f0f4);
      (*pcVar2)();
    }
    *(long *)(uVar9 + 0x10) = lVar3 + -1;
    FUN_10006c8f8(uVar9 + lVar3 * 0x28 + -8,alStack_f0 + 1);
    FUN_10005b984(alStack_f0 + 1,&local_a0);
    lVar3 = lStack_88;
    plVar7 = &local_a0;
    FUN_100001400(plVar7,lStack_88);
    lVar10 = (long)puVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(lVar10,plVar7,lVar3);
    FUN_100096aa4();
    plVar7 = &local_a0;
    FUN_100001428();
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,plVar7,0,0);
    *plVar7 = lVar10;
    plVar7[1] = uVar9;
    plVar7[2] = lVar3;
    plVar7[6] = lStack_88;
    plVar7[5] = local_90;
    plVar7[4] = lStack_98;
    plVar7[3] = local_a0;
    plVar7[8] = lStack_78;
    plVar7[7] = local_80;
    plVar7[9] = local_70;
    *(undefined1 *)(plVar7 + 10) = 0xc;
    _swift_willThrow();
    FUN_100001428(alStack_f0 + 1);
  }
  else {
    lStack_78 = uStack_c0;
    local_80 = local_c8;
    uStack_68 = uStack_b0;
    local_70 = local_b8;
    local_60 = local_a8;
    lStack_98 = alStack_f0[2];
    local_a0 = alStack_f0[1];
    lStack_88 = lStack_d0;
    local_90 = alStack_f0[3];
    puVar4 = &DAT_100104198;
    FUN_1000133cc(&lStack_88,alStack_f0 + 1,&DAT_100104198,&DAT_1000d5180);
    FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
    puVar5 = puVar8;
    _swift_dynamicCast(puVar8,alStack_f0 + 1,puVar4,param_3,6);
    if (((ulong)puVar5 & 1) == 0) {
      (**(code **)(*(long *)(param_3 + -8) + 0x38))(puVar8,1,1,param_3);
      (**(code **)(lVar10 + 8))(puVar8,lVar3);
      lVar1 = local_90;
      lVar10 = lStack_98;
      lVar3 = local_a0;
      FUN_100083864();
      _swift_allocError(&DAT_1000fa958,puVar8,0,0);
      puVar8[1] = 0xe300000000000000;
      *puVar8 = 0x6c696e;
      puVar8[2] = lVar3;
      puVar8[3] = lVar10;
      puVar8[4] = lVar1;
      *(undefined1 *)(puVar8 + 5) = 0;
      _swift_willThrow();
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(lVar1);
      FUN_100065194(&local_a0);
    }
    else {
      FUN_100065194(&local_a0);
      lVar3 = *(long *)(param_3 + -8);
      (**(code **)(lVar3 + 0x38))(puVar8,0,1,param_3);
      (**(code **)(lVar3 + 0x20))(param_1,puVar8,param_3);
    }
  }
  return;
}

