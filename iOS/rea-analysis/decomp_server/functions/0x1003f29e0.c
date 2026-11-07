// rea decompile_all
// name: FUN_1003f29e0
// address: 0x1003f29e0
// body: available
// range: 0x1003f29e0-0x1003f2b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f29e0(long param_1)

{
  long lVar1;
  ID self;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  char *pcVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  __s10Foundation3URLV25deletingLastPathComponentACyF
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1004064c8(param_1);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  pcVar5 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar4 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar5);
  if (param_1 != 0) {
    uVar2 = 0;
    FUN_100006050(0);
    uVar3 = uVar2;
    FUN_1000d3e68();
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_1,uVar2,PTR___sypN_100995e88 + 8,uVar3);
  }
  IVar4 = NSFileManager::createFileAtPath_contents_attributes_
                    (self,"createFileAtPath:contents:attributes:",IVar4,0,param_1);
  return IVar4;
}

