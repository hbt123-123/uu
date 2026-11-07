// rea decompile_all
// name: FUN_1000d15e4
// address: 0x1000d15e4
// body: available
// range: 0x1000d15e4-0x1000d1877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d1874 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d170c) */

uint FUN_1000d15e4(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID *pIVar6;
  ID *pIVar7;
  code *pcVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ID IVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uStack_c0;
  undefined *local_b8;
  byte abStack_b0 [4];
  uint local_ac;
  byte local_99 [49];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation17URLResourceValuesVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000d4610();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar13 = (undefined1 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)PTR__NSURLIsDirectoryKey_100995378;
  puVar11 = puVar4;
  FUN_100128084();
  _swift_setDeallocating(puVar4);
  pcVar8 = FUN_10000603c;
  FUN_1000d27dc(puVar4 + 0x20);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar12,puVar11);
  _swift_bridgeObjectRelease();
  __s10Foundation17URLResourceValuesV11isDirectorySbSgvg();
  local_ac = (uint)puVar11 & 0xff;
  puVar4 = puVar11;
  __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
  uStack_c0._4_4_ = SUB84(pcVar8,0);
  local_b8 = puVar4;
  __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg
            (puVar13 + *(int *)(lVar3 + 0x18));
  __s10Foundation17URLResourceValuesV10volumeNameSSSgvg();
  puVar5 = puVar4;
  __s10Foundation17URLResourceValuesV16volumeIsReadOnlySbSgvg();
  (**(code **)(lVar14 + 8))(lVar12,lVar2);
  *puVar13 = (char)puVar11;
  *(undefined **)(puVar13 + 8) = local_b8;
  puVar13[0x10] = (byte)uStack_c0._4_4_ & 1;
  iVar1 = *(int *)(lVar3 + 0x1c);
  *(undefined **)(puVar13 + iVar1) = puVar4;
  *(code **)((long)(puVar13 + iVar1) + 8) = pcVar8;
  puVar13[*(int *)(lVar3 + 0x20)] = (char)puVar5;
  FUN_1000d27dc(puVar13,FUN_1000d4610);
  if (local_ac == 2) {
    local_99[0] = 0;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    pIVar6 = (ID *)(unaff_x20 + 0x10);
    FUN_10003f030(pIVar6,uVar9);
    pIVar7 = pIVar6;
    __s10Foundation3URLV4pathSSvg();
    IVar10 = *pIVar6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar9);
    IVar10 = _objc_msgSend(IVar10,"fileExistsAtPath:isDirectory:",pIVar7,local_99);
    if ((int)IVar10 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = (undefined *)(ulong)local_99[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (uint)puVar11 & 1;
}

