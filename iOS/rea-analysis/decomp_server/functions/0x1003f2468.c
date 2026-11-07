// rea decompile_all
// name: FUN_1003f2468
// address: 0x1003f2468
// body: available
// range: 0x1003f2468-0x1003f276f inclusive
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
/* WARNING: Removing unreachable block (ram,0x0001003f2728) */

void FUN_1003f2468(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *local_d0;
  undefined8 local_c8;
  long local_c0;
  long lStack_b8;
  
  lVar1 = 0;
  local_c8 = param_1;
  __s10Foundation17URLResourceValuesVMa();
  local_c0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar10 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar12 - extraout_x12;
  local_d0 = *(code **)(lVar9 + 0x10);
  (*local_d0)(lVar11);
  puVar2 = &DAT_100a8d368;
  FUN_100004bb4(&DAT_100a8d368,&DAT_1008236c0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSFilePosixPermissions_1009952c0;
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x40) = PTR___ss5Int16VN_100995c50;
  *(undefined2 *)(puVar2 + 0x28) = 0x1b6;
  puVar3 = puVar2;
  FUN_100406820(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_1003eacf0(puVar2 + 0x20);
  pcVar8 = "defaultManager";
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar5 = IVar4;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar8);
  IVar5 = NSFileManager::fileExistsAtPath_(IVar4,"fileExistsAtPath:",IVar5);
  if ((IVar5 & 1) == 0) {
    __s10Foundation3URLV25deletingLastPathComponentACyF(lVar12,0);
    FUN_1004064c8(puVar3);
    (**(code **)(lVar9 + 8))(lVar12,lVar1);
    pcVar8 = "defaultManager";
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    IVar5 = IVar4;
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar8);
    uVar6 = 0;
    FUN_100006050(0);
    uVar7 = uVar6;
    FUN_1000d3e68();
    puVar2 = puVar3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar3,uVar6,PTR___sypN_100995e88 + 8,uVar7);
    NSFileManager::createFileAtPath_contents_attributes_
              (IVar4,"createFileAtPath:contents:attributes:",IVar5,0,puVar2);
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    _swift_bridgeObjectRelease(puVar3);
  }
  __s10Foundation17URLResourceValuesVACycfC(lVar10);
  __s10Foundation17URLResourceValuesV8isHiddenSbSgvs(1);
  (*local_d0)(local_c8,lVar11,lVar1);
  __s10Foundation3URLV17setResourceValuesyyAA011URLResourceE0VKF(lVar10);
  (**(code **)(local_c0 + 8))(lVar10,lStack_b8);
  (**(code **)(lVar9 + 8))(lVar11,lVar1);
  return;
}

