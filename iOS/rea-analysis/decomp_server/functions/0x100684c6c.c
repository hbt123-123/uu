// rea decompile_all
// name: FUN_100684c6c
// address: 0x100684c6c
// body: available
// range: 0x100684c6c-0x10068516f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100684f40) */
/* WARNING: Removing unreachable block (ram,0x000100684d30) */
/* WARNING: Removing unreachable block (ram,0x000100684e48) */

void FUN_100684c6c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  char cVar5;
  long *unaff_x20;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  ID local_f8 [3];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  char local_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  char local_6e;
  
  if (*(char *)((long)unaff_x20 + 0x31) == '\x03') {
    if ((param_2 < 0) || (*(long *)(*unaff_x20 + 0x10) <= param_2)) {
      puVar2 = &_OBJC_CLASS___NSNull;
      _objc_allocWithZone();
      IVar3 = _objc_msgSend((ID)puVar2,"init");
      uVar4 = 0;
      FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
      local_f8[0] = IVar3;
      local_e0 = uVar4;
      FUN_10003e8bc(local_f8,auStack_118);
      puVar1 = &local_128;
      _swift_dynamicCast(puVar1,auStack_118,PTR___sypN_100995e88 + 8,
                         PTR___s10Foundation4DataVN_1009961e8,0);
      if ((int)puVar1 == 0) {
        FUN_10003e8bc(local_f8,&local_d8);
        FUN_10068e2dc(&local_a0,&local_d8);
        FUN_10003f094(local_f8);
        uStack_158 = uStack_80;
        local_160 = local_88;
        uVar4 = local_78;
        uVar8 = local_90;
        local_170 = local_a0;
        uStack_168 = uStack_98;
        uVar6 = local_6f;
        uVar7 = local_70;
      }
      else {
        FUN_100008184(local_128,uStack_120);
        FUN_10068e3b8(&local_d8,local_128,uStack_120,0);
        FUN_100006cdc(local_128,uStack_120);
        FUN_10003f094(local_f8);
        FUN_100006cdc(local_128,uStack_120);
        uStack_158 = uStack_b8;
        local_160 = local_c0;
        uVar4 = local_b0;
        uVar8 = local_c8;
        local_170 = local_d8;
        uStack_168 = uStack_d0;
        uVar6 = local_a7;
        uVar7 = local_a8;
      }
      FUN_10003f094(auStack_118);
      cVar5 = '\x01';
    }
    else {
      FUN_10003e8bc(*unaff_x20 + param_2 * 0x20 + 0x20,local_f8);
      FUN_10003e8bc(local_f8,auStack_118);
      puVar1 = &local_128;
      _swift_dynamicCast(puVar1,auStack_118,PTR___sypN_100995e88 + 8,
                         PTR___s10Foundation4DataVN_1009961e8,0);
      if ((int)puVar1 == 0) {
        FUN_10003e8bc(local_f8,&local_d8);
        FUN_10068e2dc(&local_a0,&local_d8);
        FUN_10003f094(local_f8);
        uStack_158 = uStack_80;
        local_160 = local_88;
        uVar4 = local_78;
        uVar8 = local_90;
        local_170 = local_a0;
        uStack_168 = uStack_98;
        uVar6 = local_6f;
        uVar7 = local_70;
        cVar5 = local_6e;
      }
      else {
        FUN_100008184(local_128,uStack_120);
        FUN_10068e3b8(&local_d8,local_128,uStack_120,0);
        FUN_100006cdc(local_128,uStack_120);
        FUN_10003f094(local_f8);
        FUN_100006cdc(local_128,uStack_120);
        uStack_158 = uStack_b8;
        local_160 = local_c0;
        uVar4 = local_b0;
        uVar8 = local_c8;
        local_170 = local_d8;
        uStack_168 = uStack_d0;
        uVar6 = local_a7;
        uVar7 = local_a8;
        cVar5 = local_a6;
      }
      FUN_10003f094(auStack_118);
    }
  }
  else {
    puVar2 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar3 = _objc_msgSend((ID)puVar2,"init");
    uVar4 = 0;
    FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
    local_f8[0] = IVar3;
    local_e0 = uVar4;
    FUN_10003e8bc(local_f8,auStack_118);
    puVar1 = &local_128;
    _swift_dynamicCast(puVar1,auStack_118,PTR___sypN_100995e88 + 8,
                       PTR___s10Foundation4DataVN_1009961e8,0);
    if ((int)puVar1 == 0) {
      FUN_10003e8bc(local_f8,&local_d8);
      FUN_10068e2dc(&local_a0,&local_d8);
      FUN_10003f094(local_f8);
      uStack_158 = uStack_80;
      local_160 = local_88;
      uVar4 = local_78;
      uVar8 = local_90;
      local_170 = local_a0;
      uStack_168 = uStack_98;
      uVar6 = local_6f;
      uVar7 = local_70;
    }
    else {
      FUN_100008184(local_128,uStack_120);
      FUN_10068e3b8(&local_d8,local_128,uStack_120,0);
      FUN_100006cdc(local_128,uStack_120);
      FUN_10003f094(local_f8);
      FUN_100006cdc(local_128,uStack_120);
      uStack_158 = uStack_b8;
      local_160 = local_c0;
      uVar4 = local_b0;
      uVar8 = local_c8;
      local_170 = local_d8;
      uStack_168 = uStack_d0;
      uVar6 = local_a7;
      uVar7 = local_a8;
    }
    FUN_10003f094(auStack_118);
    cVar5 = '\x03';
    if (*(char *)((long)unaff_x20 + 0x32) != '\x06') {
      cVar5 = *(char *)((long)unaff_x20 + 0x32);
    }
  }
  param_1[1] = uStack_168;
  *param_1 = local_170;
  param_1[2] = uVar8;
  param_1[4] = uStack_158;
  param_1[3] = local_160;
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 6) = uVar7;
  *(undefined1 *)((long)param_1 + 0x31) = uVar6;
  *(char *)((long)param_1 + 0x32) = cVar5;
  return;
}

