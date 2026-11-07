// rea decompile_all
// name: FUN_1002dc070
// address: 0x1002dc070
// body: available
// range: 0x1002dc070-0x1002dc267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002dc070(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar11 = *(undefined8 *)(param_4 + 0x10);
  puVar5 = &DAT_100a82488;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_5;
  uStack_80 = param_6;
  local_78 = param_1;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  lVar6 = 0;
  local_a0 = puVar5;
  __ss6ResultOMa(0,uVar11,puVar5,PTR___ss5ErrorWS_100995c48);
  lVar6 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  puVar5 = &DAT_100a83428;
  local_a8 = auStack_b0 + -(lVar6 + 0xfU & 0xfffffffffffffff0);
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar6 = (long)(auStack_b0 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar8 = lVar6 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314();
  uVar9 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x2c));
  FUN_10007f314(unaff_x20 + *(int *)(param_4 + 0x30),lVar6,&DAT_100a83428,&DAT_100817bb0);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x34));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar10 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x38));
  uVar12 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x3c));
  FUN_10010bd10(uVar2,uVar3);
  uVar7 = 0;
  __ss6ResultOMa(0,uVar11,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  puVar4 = local_a8;
  FUN_100311b84(local_a8,local_98,uStack_90,uVar7,local_88,uStack_80);
  *(undefined **)(lVar8 + -8) = PTR___ss5ErrorWS_100995c48;
  *(undefined **)(lVar8 + -0x10) = local_a0;
  FUN_1002d9d20(local_78,uVar12,lVar8,uVar9,lVar6,uVar2,uVar3,uVar10,puVar4,uVar11);
  return;
}

