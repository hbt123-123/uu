// rea decompile_all
// name: FUN_1000d1878
// address: 0x1000d1878
// body: available
// range: 0x1000d1878-0x1000d1b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d1990) */
/* WARNING: Removing unreachable block (ram,0x0001000d1a78) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_1000d1878(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ID *pIVar9;
  ID IVar10;
  code *pcVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long alStack_e0 [2];
  undefined *local_d0;
  uint local_c8;
  undefined4 local_c4;
  ID local_b8 [11];
  
  lVar3 = 0;
  __s10Foundation17URLResourceValuesVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1000d4610();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar17 = (undefined1 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)PTR__NSURLFileSizeKey_100995368;
  puVar6 = puVar5;
  FUN_100128084();
  _swift_setDeallocating(puVar5);
  pcVar11 = FUN_10000603c;
  FUN_1000d27dc(puVar5 + 0x20);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar16,puVar6);
  _swift_bridgeObjectRelease();
  __s10Foundation17URLResourceValuesV11isDirectorySbSgvg();
  local_c4 = SUB84(puVar6,0);
  __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
  local_c8 = (uint)pcVar11 & 1;
  pcVar12 = pcVar11;
  alStack_e0[1] = lVar15;
  local_d0 = puVar6;
  __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg
            (puVar17 + *(int *)(lVar4 + 0x18));
  __s10Foundation17URLResourceValuesV10volumeNameSSSgvg();
  puVar7 = puVar6;
  __s10Foundation17URLResourceValuesV16volumeIsReadOnlySbSgvg();
  puVar5 = local_d0;
  (**(code **)(alStack_e0[1] + 8))(lVar16,lVar3);
  uVar2 = local_c8;
  *puVar17 = (char)local_c4;
  *(undefined **)(puVar17 + 8) = puVar5;
  puVar17[0x10] = (char)uVar2;
  iVar1 = *(int *)(lVar4 + 0x1c);
  *(undefined **)(puVar17 + iVar1) = puVar6;
  *(code **)((long)(puVar17 + iVar1) + 8) = pcVar12;
  puVar17[*(int *)(lVar4 + 0x20)] = (char)puVar7;
  FUN_1000d27dc(puVar17,FUN_1000d4610);
  if (((ulong)pcVar11 & 1) == 0) {
    return (ulong)puVar5 & ((long)puVar5 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar13 = *(ulong *)(unaff_x20 + 0x28);
  lVar3 = unaff_x20 + 0x10;
  FUN_10003f030();
  __s10Foundation3URLV4pathSSvg();
  uVar14 = uVar13;
  FUN_1000d3d58();
  _swift_bridgeObjectRelease(uVar13);
  if (lVar3 == 0) {
    local_b8[2] = 0;
    local_b8[1] = 0;
    local_b8[4] = 0;
    local_b8[3] = 0;
    goto LAB_1000d1a90;
  }
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1000d1b30:
    local_b8[2] = 0;
    local_b8[1] = 0;
    local_b8[4] = 0;
    local_b8[3] = 0;
  }
  else {
    lVar4 = *(long *)PTR__NSFileSize_1009952c8;
    _swift_bridgeObjectRetain(lVar3);
    thunk_FUN_1001a2e90(lVar4);
    if ((uVar14 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar3);
      goto LAB_1000d1b30;
    }
    FUN_10003e8bc(*(long *)(lVar3 + 0x38) + lVar4 * 0x20,local_b8 + 1);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_bridgeObjectRelease(lVar3);
  if (local_b8[4] != 0) {
    uVar8 = 0;
    FUN_1000d3848(0);
    pIVar9 = local_b8;
    _swift_dynamicCast(pIVar9,local_b8 + 1,PTR___sypN_100995e88 + 8,uVar8,6);
    if (((ulong)pIVar9 & 1) == 0) {
      return 0;
    }
    IVar10 = _objc_msgSend(local_b8[0],"unsignedLongLongValue");
    return IVar10;
  }
LAB_1000d1a90:
  FUN_100040bb4(local_b8 + 1,&DAT_100a766e0,&DAT_10080bdb0);
  return 0;
}

