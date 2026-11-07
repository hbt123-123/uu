// rea decompile_all
// name: thunk_FUN_100681db8
// address: 0x1006919c8
// body: available
// range: 0x1006919c8-0x1006919cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100681e84) */

void thunk_FUN_100681db8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *self;
  ID IVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  ID aIStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  
  self = &_OBJC_CLASS___NSNull;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)self,"init");
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
  aIStack_e8[0] = IVar4;
  uStack_d0 = uVar5;
  FUN_10003e8bc(aIStack_e8,auStack_108);
  puVar6 = &uStack_118;
  _swift_dynamicCast(puVar6,auStack_108,PTR___sypN_100995e88 + 8,
                     PTR___s10Foundation4DataVN_1009961e8,0);
  if ((int)puVar6 == 0) {
    FUN_10003e8bc(aIStack_e8,&uStack_c8);
    FUN_10068e2dc(&uStack_90,&uStack_c8);
    FUN_10003f094(aIStack_e8);
    uStack_148 = uStack_70;
    uStack_150 = uStack_78;
    uVar5 = uStack_68;
    uVar7 = uStack_80;
    uVar8 = uStack_90;
    uVar9 = uStack_88;
    uVar1 = uStack_5e;
    uVar2 = uStack_5f;
    uVar3 = uStack_60;
  }
  else {
    FUN_100008184(uStack_118,uStack_110);
    FUN_10068e3b8(&uStack_c8,uStack_118,uStack_110,0);
    FUN_100006cdc(uStack_118,uStack_110);
    FUN_10003f094(aIStack_e8);
    FUN_100006cdc(uStack_118,uStack_110);
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uVar5 = uStack_a0;
    uVar7 = uStack_b8;
    uVar8 = uStack_c8;
    uVar9 = uStack_c0;
    uVar1 = uStack_96;
    uVar2 = uStack_97;
    uVar3 = uStack_98;
  }
  FUN_10003f094(auStack_108);
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[2] = uVar7;
  param_1[4] = uStack_148;
  param_1[3] = uStack_150;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = uVar3;
  *(undefined1 *)((long)param_1 + 0x31) = uVar2;
  *(undefined1 *)((long)param_1 + 0x32) = uVar1;
  return;
}

