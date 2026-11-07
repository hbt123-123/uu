// rea decompile_all
// name: FUN_1000d01f4
// address: 0x1000d01f4
// body: available
// range: 0x1000d01f4-0x1000d0547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d0354) */

undefined1  [16] FUN_1000d01f4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ID *pIVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  ID self;
  long unaff_x20;
  undefined1 *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_d0;
  undefined4 local_c4;
  undefined *local_c0;
  undefined4 local_b4;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  
  lVar4 = 0;
  __s10Foundation17URLResourceValuesVMa();
  local_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar12 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1000d4610();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar13 = (undefined1 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  __s10Foundation3URLVMa();
  local_a0 = *(long *)(lVar5 + -8);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar5 = (long)puVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar5,uVar8,uVar2);
  puVar6 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = *(undefined8 *)PTR__NSURLVolumeNameKey_100995398;
  puVar9 = puVar6;
  FUN_100128084();
  _swift_setDeallocating(puVar6);
  pcVar10 = FUN_10000603c;
  FUN_1000d27dc(puVar6 + 0x20);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar12,puVar9);
  _swift_bridgeObjectRelease();
  __s10Foundation17URLResourceValuesV11isDirectorySbSgvg();
  local_b4 = SUB84(puVar9,0);
  __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
  local_c4 = SUB84(pcVar10,0);
  local_c0 = puVar9;
  __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg
            (puVar13 + *(int *)(lVar4 + 0x18));
  __s10Foundation17URLResourceValuesV10volumeNameSSSgvg();
  puVar6 = puVar9;
  __s10Foundation17URLResourceValuesV16volumeIsReadOnlySbSgvg();
  (**(code **)(local_b0 + 8))(lVar12,lStack_a8);
  *puVar13 = (char)local_b4;
  *(undefined **)(puVar13 + 8) = local_c0;
  puVar13[0x10] = (byte)local_c4 & 1;
  iVar3 = *(int *)(lVar4 + 0x1c);
  *(undefined **)(puVar13 + iVar3) = puVar9;
  *(code **)((long)(puVar13 + iVar3) + 8) = pcVar10;
  puVar13[*(int *)(lVar4 + 0x20)] = (char)puVar6;
  _swift_bridgeObjectRetain(pcVar10);
  FUN_1000d27dc(puVar13,FUN_1000d4610);
  if (pcVar10 != (code *)0x0) {
    uVar1 = (ulong)puVar9 & 0xffffffffffff;
    if (((ulong)pcVar10 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pcVar10 >> 0x38 & 0xf;
    }
    pcVar11 = (char *)pcVar10;
    if (uVar1 != 0) goto LAB_1000d0508;
    _swift_bridgeObjectRelease(pcVar10);
  }
  pIVar7 = (ID *)(unaff_x20 + 0x10);
  FUN_10003f030(pIVar7,*(undefined8 *)(unaff_x20 + 0x28));
  self = *pIVar7;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar2);
  pcVar11 = "displayNameAtPath:";
  puVar9 = (undefined *)_objc_msgSend(self,"displayNameAtPath:",uVar8);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = (ulong)puVar9 & 0xffffffffffff;
  if (((ulong)pcVar11 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pcVar11 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pcVar11);
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_1000d139c,0,0xd0000000000000af,0x8000000100885ec0,&DAT_d000000000000010,
                  0x80000001008861d0,0xd9,0);
    pcVar11 = (char *)0xec00000044482068;
    puVar9 = (undefined *)0x736f746e6963614d;
  }
LAB_1000d0508:
  (**(code **)(local_a0 + 8))(lVar5,lStack_98);
  auVar14._8_8_ = pcVar11;
  auVar14._0_8_ = puVar9;
  return auVar14;
}

