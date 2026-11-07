// rea decompile_all
// name: FUN_1006830d8
// address: 0x1006830d8
// body: available
// range: 0x1006830d8-0x10068364b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100683410) */
/* WARNING: Removing unreachable block (ram,0x0001006831d4) */
/* WARNING: Removing unreachable block (ram,0x0001006832f8) */

void FUN_1006830d8(long *param_1,undefined *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long *unaff_x20;
  ID *pIVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  undefined *local_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140 [40];
  undefined1 auStack_118 [32];
  ID local_f8 [3];
  undefined8 local_e0;
  undefined *local_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined *local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  
  uVar1 = param_4 >> 6 & 3;
  if (uVar1 == 0) {
    pIVar8 = (ID *)PTR___sSiN_100995968;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_a0 = param_2;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100683648);
      (*pcVar2)();
    }
    if (*(undefined **)(*unaff_x20 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068364c);
      (*pcVar2)();
    }
    FUN_10003e8bc(*unaff_x20 + (long)param_2 * 0x20 + 0x20,local_f8);
    FUN_10003e8bc(local_f8,auStack_118);
    puVar3 = &local_170;
    _swift_dynamicCast(puVar3,auStack_118,PTR___sypN_100995e88 + 8,
                       PTR___s10Foundation4DataVN_1009961e8,0);
    if ((int)puVar3 == 0) {
      FUN_10003e8bc(local_f8,&local_d8);
      FUN_10068e2dc(&local_a0,&local_d8);
      FUN_10003f094(local_f8);
      lStack_178 = lStack_80;
      local_180 = local_88;
      local_b0 = local_78;
      local_c8 = local_90;
      local_d8 = local_a0;
      lStack_d0 = lStack_98;
      uVar9 = local_6e;
      uVar10 = local_6f;
      uVar12 = local_70;
    }
    else {
      FUN_100008184(local_170,uStack_168);
      FUN_10068e3b8(&local_d8,local_170,uStack_168,0);
      FUN_100006cdc(local_170,uStack_168);
      FUN_10003f094(local_f8);
      FUN_100006cdc(local_170,uStack_168);
      lStack_178 = lStack_b8;
      local_180 = local_c0;
      uVar9 = local_a6;
      uVar10 = local_a7;
      uVar12 = local_a8;
    }
    puVar7 = auStack_118;
    lVar11 = local_b0;
    lVar13 = local_c8;
    local_190 = local_d8;
    lStack_188 = lStack_d0;
  }
  else {
    if (uVar1 != 1) {
      puVar4 = &_OBJC_CLASS___NSNull;
      _objc_allocWithZone();
      IVar5 = _objc_msgSend((ID)puVar4,"init");
      uVar6 = 0;
      FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
      local_f8[0] = IVar5;
      local_e0 = uVar6;
      FUN_10003e8bc(local_f8,auStack_118);
      puVar3 = &local_170;
      _swift_dynamicCast(puVar3,auStack_118,PTR___sypN_100995e88 + 8,
                         PTR___s10Foundation4DataVN_1009961e8,0);
      if ((int)puVar3 == 0) {
        FUN_10003e8bc(local_f8,&local_d8);
        FUN_10068e2dc(&local_a0,&local_d8);
        FUN_10003f094(local_f8);
        lStack_178 = lStack_80;
        local_180 = local_88;
        lVar11 = local_78;
        lVar13 = local_90;
        local_190 = local_a0;
        lStack_188 = lStack_98;
        uVar9 = local_6e;
        uVar10 = local_6f;
        uVar12 = local_70;
      }
      else {
        FUN_100008184(local_170,uStack_168);
        FUN_10068e3b8(&local_d8,local_170,uStack_168,0);
        FUN_100006cdc(local_170,uStack_168);
        FUN_10003f094(local_f8);
        FUN_100006cdc(local_170,uStack_168);
        lStack_178 = lStack_b8;
        local_180 = local_c0;
        lVar11 = local_b0;
        lVar13 = local_c8;
        local_190 = local_d8;
        lStack_188 = lStack_d0;
        uVar9 = local_a6;
        uVar10 = local_a7;
        uVar12 = local_a8;
      }
      FUN_10003f094(auStack_118);
      pIVar8 = (ID *)0x0;
      puVar4 = (undefined *)0xe000000000000000;
      goto LAB_100683600;
    }
    lVar11 = unaff_x20[1];
    pIVar8 = local_f8;
    puVar4 = param_2;
    FUN_10068364c(pIVar8,param_2,param_3,param_4 & 1,lVar11);
    FUN_10003f094(local_f8);
    FUN_10068364c(auStack_118,param_2,param_3,param_4 & 1,lVar11);
    _swift_bridgeObjectRelease(param_2);
    FUN_10003e8bc(auStack_118,local_140);
    puVar3 = &local_150;
    _swift_dynamicCast(puVar3,local_140,PTR___sypN_100995e88 + 8,
                       PTR___s10Foundation4DataVN_1009961e8,0);
    if (((ulong)puVar3 & 1) == 0) {
      FUN_10003e8bc(auStack_118,&local_d8);
      FUN_10068e2dc(&local_a0,&local_d8);
      FUN_10003f094(auStack_118);
      lStack_178 = lStack_80;
      local_180 = local_88;
      local_b0 = local_78;
      local_c8 = local_90;
      local_d8 = local_a0;
      lStack_d0 = lStack_98;
      uVar9 = local_6e;
      uVar10 = local_6f;
      uVar12 = local_70;
    }
    else {
      FUN_100008184(local_150,uStack_148);
      FUN_10068e3b8(&local_d8,local_150,uStack_148,0);
      FUN_100006cdc(local_150,uStack_148);
      FUN_10003f094(auStack_118);
      FUN_100006cdc(local_150,uStack_148);
      lStack_178 = lStack_b8;
      local_180 = local_c0;
      uVar9 = local_a6;
      uVar10 = local_a7;
      uVar12 = local_a8;
    }
    puVar7 = local_140;
    lVar11 = local_b0;
    lVar13 = local_c8;
    local_190 = local_d8;
    lStack_188 = lStack_d0;
  }
  FUN_10003f094(puVar7);
LAB_100683600:
  *param_1 = (long)pIVar8;
  param_1[1] = (long)puVar4;
  param_1[3] = lStack_188;
  param_1[2] = (long)local_190;
  param_1[4] = lVar13;
  param_1[6] = lStack_178;
  param_1[5] = local_180;
  param_1[7] = lVar11;
  *(undefined1 *)(param_1 + 8) = uVar12;
  *(undefined1 *)((long)param_1 + 0x41) = uVar10;
  *(undefined1 *)((long)param_1 + 0x42) = uVar9;
  return;
}

