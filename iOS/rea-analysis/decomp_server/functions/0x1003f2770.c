// rea decompile_all
// name: FUN_1003f2770
// address: 0x1003f2770
// body: available
// range: 0x1003f2770-0x1003f2933 inclusive
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

ID FUN_1003f2770(undefined2 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID self;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  char *pcVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auStack_a0 [80];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar2 = &DAT_100a8d368;
  FUN_100004bb4(&DAT_100a8d368,&DAT_1008236c0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSFilePosixPermissions_1009952c0;
  *(undefined **)(puVar2 + 0x40) = PTR___ss5Int16VN_100995c50;
  *(undefined2 *)(puVar2 + 0x28) = param_1;
  puVar3 = puVar2;
  FUN_100406820(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_1003eacf0(puVar2 + 0x20);
  __s10Foundation3URLV25deletingLastPathComponentACyF
            (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1004064c8(puVar3);
  (**(code **)(lVar8 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  pcVar7 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar6 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar7);
  uVar4 = 0;
  FUN_100006050(0);
  uVar5 = uVar4;
  FUN_1000d3e68();
  puVar2 = puVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar3,uVar4,PTR___sypN_100995e88 + 8,uVar5);
  IVar6 = NSFileManager::createFileAtPath_contents_attributes_
                    (self,"createFileAtPath:contents:attributes:",IVar6,0,puVar2);
  _swift_bridgeObjectRelease(puVar3);
  return IVar6;
}

