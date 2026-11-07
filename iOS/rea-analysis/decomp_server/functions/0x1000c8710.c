// rea decompile_all
// name: FUN_1000c8710
// address: 0x1000c8710
// body: available
// range: 0x1000c8710-0x1000c8a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000c8710(void)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  undefined8 uVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long alStack_e0 [5];
  undefined **ppuStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined *local_98;
  undefined **local_90;
  ID local_88 [3];
  undefined *local_70;
  undefined **local_68;
  
  local_88[0] = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  local_70 = &DAT_10099b990;
  local_68 = &PTR_PTR_10099b9a8;
  IVar2 = 0;
  FUN_1000cf108();
  IVar3 = IVar2;
  _swift_allocObject();
  FUN_1000ce034(local_88,&DAT_10099b990);
  (*(code *)PTR____chkstk_darwin_100995498)(_DAT_100c82940);
  puVar10 = (undefined8 *)((long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  uVar8 = *puVar10;
  *(undefined **)(IVar3 + 0x28) = &DAT_10099b990;
  *(undefined ***)(IVar3 + 0x30) = &PTR_PTR_10099b9a8;
  *(undefined8 *)(IVar3 + 0x10) = uVar8;
  *(undefined8 *)(IVar3 + 0x38) = 0x2f3a;
  *(undefined8 *)(IVar3 + 0x40) = 0xe200000000000000;
  *(undefined8 *)(IVar3 + 0x48) = 0x2f;
  *(undefined8 *)(IVar3 + 0x50) = 0xe100000000000000;
  *(undefined8 *)(IVar3 + 0x58) = 0x73656d756c6f562f;
  *(undefined8 *)(IVar3 + 0x60) = 0xe800000000000000;
  FUN_10003f094(local_88);
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  FUN_1000d5e78();
  lVar5 = 0;
  FUN_1000d4e24();
  lVar6 = lVar5;
  _swift_allocObject();
  FUN_1000d4e44();
  local_68 = &PTR_PTR_10099b808;
  local_90 = &PTR_PTR_10099bb00;
  local_98 = &DAT_10099bae8;
  local_b0 = FUN_1000d4784;
  uStack_a8 = 0;
  ppuStack_b8 = &PTR_PTR_10099bc00;
  lVar7 = 0;
  alStack_e0[1] = lVar6;
  alStack_e0[4] = lVar5;
  local_88[0] = IVar3;
  local_70 = (undefined *)IVar2;
  FUN_1000d5a88();
  _swift_allocObject();
  FUN_1000ce034(local_88,IVar2);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(IVar2 - 8) + 0x40));
  puVar10 = (undefined8 *)((long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar10);
  puVar1 = local_98;
  FUN_1000ce034(&local_b0,local_98);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)puVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar11);
  lVar6 = alStack_e0[4];
  FUN_1000ce034(alStack_e0 + 1,alStack_e0[4]);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar12 = (undefined8 *)((long)puVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_02 + 0x10))(puVar12);
  uVar8 = *puVar10;
  uVar9 = *puVar12;
  *(ID *)(lVar7 + 0x28) = IVar2;
  *(undefined ***)(lVar7 + 0x30) = &PTR_PTR_10099b808;
  *(undefined8 *)(lVar7 + 0x10) = uVar8;
  *(undefined **)(lVar7 + 0x50) = &DAT_10099bae8;
  *(undefined ***)(lVar7 + 0x58) = &PTR_PTR_10099bb00;
  uVar8 = *puVar11;
  *(undefined8 *)(lVar7 + 0x40) = puVar11[1];
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  *(long *)(lVar7 + 0x80) = lVar5;
  *(undefined ***)(lVar7 + 0x88) = &PTR_PTR_10099bc00;
  *(ID *)(lVar7 + 0x60) = IVar4;
  *(undefined8 *)(lVar7 + 0x68) = uVar9;
  *(undefined8 *)(lVar7 + 0x90) = 0x3ff0000000000000;
  FUN_10003f094(alStack_e0 + 1);
  FUN_10003f094(&local_b0);
  FUN_10003f094(local_88);
  return lVar7;
}

