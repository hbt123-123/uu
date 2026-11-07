// rea decompile_all
// name: FUN_100128500
// address: 0x100128500
// body: available
// range: 0x100128500-0x1001288d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010012875c) */

ID FUN_100128500(void)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID self;
  ID IVar8;
  undefined *puVar9;
  char *pcVar10;
  long extraout_x8;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [80];
  undefined *local_70;
  undefined *puStack_68;
  
  uVar3 = 0;
  __s10Foundation17URLResourceValuesVMa();
  lVar12 = *(long *)(uVar3 - 8);
  uVar4 = uVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV06isFileB0Sbvg();
  if ((uVar4 & 1) == 0) {
LAB_100128614:
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100127fa0,0,0xd0000000000000a9,0x800000010088e440,0xd000000000000016,
                  0x800000010088e550,0x82,0);
    return 0;
  }
  puVar5 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  puVar7 = &DAT_100a746a8;
  _swift_initStaticObject();
  puVar6 = puVar5;
  __s10Foundation3URLV13pathExtensionSSvg();
  puVar9 = puVar7;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(puVar7);
  local_70 = puVar6;
  puStack_68 = puVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined ***)((long)auStack_d0 + lVar1) = &local_70;
  uVar4 = 0;
  FUN_100152a38(FUN_10000d558,auStack_e0 + lVar1,puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,5,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(puVar9);
  if ((uVar4 & 1) != 0) goto LAB_100128614;
  puVar5 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 8;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)PTR__NSURLIsRegularFileKey_100995380;
  uVar11 = *(undefined8 *)PTR__NSURLIsAliasFileKey_100995370;
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)PTR__NSURLIsDirectoryKey_100995378;
  *(undefined8 *)(puVar5 + 0x30) = uVar11;
  *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)PTR__NSURLIsSymbolicLinkKey_100995388;
  puVar7 = puVar5;
  FUN_100128084();
  _swift_setDeallocating(puVar5);
  uVar11 = 0;
  FUN_10000603c(0);
  _swift_arrayDestroy(puVar5 + 0x20,4,uVar11);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (auStack_c0 + lVar1,puVar7);
  _swift_bridgeObjectRelease();
  __s10Foundation17URLResourceValuesV11isAliasFileSbSgvg();
  if (((((uint)puVar7 & 0xff) == 2) || (((ulong)puVar7 & 1) == 0)) &&
     ((__s10Foundation17URLResourceValuesV14isSymbolicLinkSbSgvg(), ((uint)puVar7 & 0xff) == 2 ||
      (((ulong)puVar7 & 1) == 0)))) {
    __s10Foundation17URLResourceValuesV13isRegularFileSbSgvg();
    uVar2 = (uint)puVar7;
    if ((((uVar2 & 0xff) != 2) && (((ulong)puVar7 & 1) != 0)) ||
       ((__s10Foundation17URLResourceValuesV11isDirectorySbSgvg(), (uVar2 & 0xff) != 2 &&
        ((uVar2 & 1) != 0)))) {
      pcVar10 = "defaultManager";
      self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      IVar8 = self;
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar10);
      IVar8 = NSFileManager::isReadableFileAtPath_(self,"isReadableFileAtPath:",IVar8);
      goto LAB_1001288bc;
    }
  }
  IVar8 = 0;
LAB_1001288bc:
  (**(code **)(lVar12 + 8))(auStack_c0 + lVar1,uVar3);
  return IVar8;
}

