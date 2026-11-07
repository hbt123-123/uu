// rea decompile_all
// name: FUN_100248460
// address: 0x100248460
// body: available
// range: 0x100248460-0x1002486e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100248460(undefined1 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ID self;
  ID IVar4;
  undefined8 *puVar5;
  ID IVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long unaff_x21;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined8 auStack_c0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ID local_70;
  char *pcStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffff60 + lVar1;
  pcVar7 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar6 = self;
  __s10Foundation3URLV13pathExtensionSSvg();
  IVar4 = IVar6;
  pcVar8 = pcVar7;
  __s10Foundation3URLV17lastPathComponentSSvg();
  local_80 = 0x2e;
  uStack_78 = 0xe100000000000000;
  local_70 = IVar4;
  pcStack_68 = pcVar8;
  __sSS6appendyySSF(IVar6,pcVar7);
  _swift_bridgeObjectRelease();
  uVar2 = uStack_78;
  local_90 = 0;
  uStack_88 = 0xe000000000000000;
  FUN_100248974();
  *(char **)((long)auStack_c0 + lVar1 + 0x10) = pcVar7;
  *(char **)((long)auStack_c0 + lVar1 + 0x18) = pcVar7;
  *(undefined **)((long)auStack_c0 + lVar1) = PTR___sSSN_1009957f8;
  *(char **)((long)auStack_c0 + lVar1 + 8) = pcVar7;
  puVar5 = &local_80;
  puVar9 = &local_90;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar5,puVar9,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(pcVar8);
  _swift_bridgeObjectRelease(uVar2);
  IVar6 = NSFileManager::URLsForDirectory_inDomains_(self,"URLsForDirectory:inDomains:",9,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar6,lVar3);
  if (*(long *)(IVar6 + 0x10) != 0) {
    (**(code **)(lVar11 + 0x10))
              (puVar10,IVar6 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)),lVar3);
    _swift_bridgeObjectRelease(IVar6);
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(param_1,puVar5,puVar9,1);
    _swift_bridgeObjectRelease(puVar9);
    *(undefined8 *)((long)auStack_c0 + lVar1 + 0x10) = 0;
    FUN_10024a938(param_2,param_1,1,0,0,0,0,0);
    if (unaff_x21 == 0) {
      (**(code **)(lVar11 + 8))(puVar10,lVar3);
    }
    else {
      pcVar12 = *(code **)(lVar11 + 8);
      (*pcVar12)(param_1,lVar3);
      FUN_100248d84();
      _swift_allocError(&DAT_1009a7f28,param_1,0,0);
      *param_1 = 1;
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
      (*pcVar12)(puVar10,lVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1002486e8);
  (*pcVar12)();
}

