// rea decompile_all
// name: FUN_1002dad2c
// address: 0x1002dad2c
// body: available
// range: 0x1002dad2c-0x1002daeef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002dad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  lVar6 = 0;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = uVar2;
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_1;
  __ss6ResultOMa(0,uVar2,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  local_a8 = *(long *)(lVar6 + -8);
  lVar9 = *(long *)(local_a8 + 0x40);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar2,param_5,param_6);
  lVar12 = (long)(auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar7 = lVar12 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314();
  uVar10 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x2c));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x30));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar11 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x34));
  uVar13 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x38));
  (**(code **)(local_a8 + 0x10))
            (auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),unaff_x20 + *(int *)(param_4 + 0x3c),
             lVar6);
  FUN_10010bd10(uVar2,uVar3);
  uVar5 = uStack_98;
  uVar4 = local_a0;
  FUN_1002d9be4(lVar12,local_88,uStack_80,lVar6,local_a0,uStack_98);
  *(undefined8 *)(lVar7 + -0x10) = uVar5;
  FUN_1002d9af4(local_78,uVar13,lVar7,uVar10,uVar2,uVar3,uVar11,lVar12,local_90,uVar4);
  return;
}

