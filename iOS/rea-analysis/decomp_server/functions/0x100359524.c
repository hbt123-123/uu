// rea decompile_all
// name: FUN_100359524
// address: 0x100359524
// body: available
// range: 0x100359524-0x100359853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010035970c) */

undefined1  [16]
FUN_100359524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined8 local_98 [7];
  
  lVar1 = 0;
  local_a8 = param_6;
  pcStack_a0 = param_5;
  __s10Foundation17URLResourceValuesVMa();
  lVar13 = *(long *)(lVar1 + -8);
  lVar16 = (long)&local_b0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar10 = lVar16 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar12 = lVar10 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10035a614(param_3,lVar10);
  lVar4 = lVar10;
  (**(code **)(lVar15 + 0x30))(lVar10,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a83428,&DAT_100817bb0);
    uVar5 = 0;
    FUN_100277ad0(0);
    uVar6 = uVar5;
    FUN_1002c272c();
    uVar11 = uVar5;
    _swift_allocError(uVar5,uVar6,0,0);
    uVar7 = 0;
    FUN_1002782c4(0);
    _swift_storeEnumTagMultiPayload(uVar6,uVar7,5);
    _swift_storeEnumTagMultiPayload(uVar6,uVar5,9);
    uVar14 = 1;
  }
  else {
    local_b0 = param_2;
    (**(code **)(lVar15 + 0x20))(lVar12,lVar10,lVar3);
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
    __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
              (lVar16,puVar8);
    _swift_bridgeObjectRelease();
    __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
    (**(code **)(lVar13 + 8))(lVar16,lVar1);
    _swift_unownedRetainStrong(param_4);
    (*pcStack_a0)(local_98);
    if (((uVar9 & 1) == 0) && (puVar8 != (undefined *)0x0)) {
      uVar11 = local_98[0];
      uVar6 = local_b0;
      FUN_10035b0f4(local_98[0],local_b0);
      uVar14 = (uint)uVar6;
      _swift_release(param_4);
    }
    else {
      _swift_release(param_4);
      uVar11 = 0;
      uVar14 = 0;
    }
    (**(code **)(lVar15 + 8))(lVar12,lVar3);
    _swift_bridgeObjectRelease(local_98[0]);
  }
  auVar17._8_4_ = uVar14 & 1;
  auVar17._0_8_ = uVar11;
  auVar17._12_4_ = 0;
  return auVar17;
}

