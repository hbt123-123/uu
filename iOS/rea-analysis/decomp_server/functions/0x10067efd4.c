// rea decompile_all
// name: FUN_10067efd4
// address: 0x10067efd4
// body: available
// range: 0x10067efd4-0x10067f36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010067f13c) */
/* WARNING: Removing unreachable block (ram,0x00010067f204) */
/* WARNING: Removing unreachable block (ram,0x00010067f264) */

void FUN_10067efd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [32];
  ID local_f8;
  ulong uStack_f0;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar13 = *(long *)(lVar4 + -8);
  IVar11 = (long)&local_170 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar4;
  local_a0 = param_2;
  uStack_98 = param_3;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(IVar11);
  FUN_10068e4f8();
  uVar9 = 0;
  IVar7 = IVar11;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (IVar11,0,PTR___sSSN_1009957f8,lVar5);
  (**(code **)(lVar13 + 8))(IVar11,lVar4);
  _swift_bridgeObjectRelease(param_3);
  puVar6 = PTR___s10Foundation4DataVN_1009961e8;
  if (uVar9 >> 0x3c < 0xf) {
    local_e0 = PTR___s10Foundation4DataVN_1009961e8;
    local_f8 = IVar7;
    uStack_f0 = uVar9;
    FUN_10003e8bc(&local_f8,auStack_118);
    puVar8 = &local_128;
    _swift_dynamicCast(puVar8,auStack_118,PTR___sypN_100995e88 + 8,puVar6,0);
    if ((int)puVar8 == 0) goto LAB_10067f274;
    FUN_100008184(local_128,local_120);
    FUN_10068e3b8(&local_d8,local_128,local_120,0);
    FUN_100006cdc(local_128,local_120);
    FUN_100006cdc(local_128,local_120);
    FUN_10003f094(&local_f8);
  }
  else {
    puVar6 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar7 = _objc_msgSend((ID)puVar6,"init");
    puVar6 = (undefined *)0x0;
    FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
    local_f8 = IVar7;
    local_e0 = puVar6;
    FUN_10003e8bc(&local_f8,auStack_118);
    puVar8 = &local_128;
    _swift_dynamicCast(puVar8,auStack_118,PTR___sypN_100995e88 + 8,
                       PTR___s10Foundation4DataVN_1009961e8,0);
    if ((int)puVar8 == 0) {
LAB_10067f274:
      FUN_10003e8bc(&local_f8,&local_d8);
      FUN_10068e2dc(&local_a0,&local_d8);
      FUN_10003f094(&local_f8);
      uStack_158 = uStack_80;
      local_160 = local_88;
      uVar10 = local_78;
      uVar12 = local_90;
      local_d8 = local_a0;
      uStack_d0 = uStack_98;
      uVar1 = local_6e;
      uVar2 = local_6f;
      uVar3 = local_70;
      goto LAB_10067f310;
    }
    FUN_100008184(local_128,local_120);
    FUN_10068e3b8(&local_d8,local_128,local_120,0);
    FUN_100006cdc(local_128,local_120);
    FUN_10003f094(&local_f8);
    FUN_100006cdc(local_128,local_120);
  }
  uStack_158 = uStack_b8;
  local_160 = local_c0;
  uVar10 = local_b0;
  uVar12 = local_c8;
  uVar1 = local_a6;
  uVar2 = local_a7;
  uVar3 = local_a8;
LAB_10067f310:
  local_170 = local_d8;
  uStack_168 = uStack_d0;
  FUN_10003f094(auStack_118);
  param_1[1] = uStack_168;
  *param_1 = local_170;
  param_1[2] = uVar12;
  param_1[4] = uStack_158;
  param_1[3] = local_160;
  param_1[5] = uVar10;
  *(undefined1 *)(param_1 + 6) = uVar3;
  *(undefined1 *)((long)param_1 + 0x31) = uVar2;
  *(undefined1 *)((long)param_1 + 0x32) = uVar1;
  return;
}

