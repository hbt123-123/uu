// rea decompile_all
// name: FUN_100359854
// address: 0x100359854
// body: available
// range: 0x100359854-0x100359baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100359a58) */

undefined1  [16]
FUN_100359854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  code *pcStack_a8;
  long local_a0;
  undefined8 local_98;
  
  local_a0 = *(long *)(param_8 + -8);
  puVar6 = auStack_d0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_b8 = param_2;
  local_b0 = param_6;
  pcStack_a8 = param_5;
  local_98 = param_4;
  __s10Foundation17URLResourceValuesVMa();
  lVar14 = *(long *)(lVar1 + -8);
  lVar16 = (long)puVar6 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar13 = lVar16 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar3 + -8);
  lVar15 = lVar13 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10035a614(param_3,lVar13);
  lVar4 = lVar13;
  (**(code **)(lVar17 + 0x30))(lVar13,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a83428,&DAT_100817bb0);
    puVar5 = (undefined1 *)0x0;
    FUN_100277ad0(0);
    puVar6 = puVar5;
    FUN_1002c272c();
    puVar11 = puVar5;
    _swift_allocError(puVar5,puVar6,0,0);
    uVar7 = 0;
    FUN_1002782c4(0);
    _swift_storeEnumTagMultiPayload(puVar6,uVar7,5);
    _swift_storeEnumTagMultiPayload(puVar6,puVar5,9);
    uVar12 = 1;
  }
  else {
    local_c0 = param_8;
    (**(code **)(lVar17 + 0x20))(lVar15,lVar13,lVar3);
    puVar2 = &DAT_100a88458;
    FUN_100004bb4(&DAT_100a88458,&DAT_10081c5d0);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSURLFileSizeKey_100995368;
    puVar8 = puVar2;
    FUN_100348164();
    _swift_setDeallocating(puVar2);
    uVar9 = 0;
    FUN_1000d27dc(puVar2 + 0x20);
    uVar12 = 0;
    __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
              (lVar16,puVar8);
    _swift_bridgeObjectRelease();
    __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
    local_c8 = puVar8;
    (**(code **)(lVar14 + 8))(lVar16,lVar1);
    uVar7 = local_98;
    _swift_unownedRetainStrong(local_98);
    (*pcStack_a8)(puVar6);
    lVar4 = local_c0;
    puVar11 = (undefined1 *)0x0;
    if (((uVar9 & 1) == 0) && (local_c8 != (undefined *)0x0)) {
      puVar11 = puVar6;
      uVar10 = local_b8;
      FUN_10035ab0c(puVar6,local_b8,local_c0,param_9);
      uVar12 = (uint)uVar10;
    }
    _swift_release(uVar7);
    (**(code **)(local_a0 + 8))(puVar6,lVar4);
    (**(code **)(lVar17 + 8))(lVar15,lVar3);
  }
  auVar18._8_4_ = uVar12 & 1;
  auVar18._0_8_ = puVar11;
  auVar18._12_4_ = 0;
  return auVar18;
}

