// rea decompile_all
// name: FUN_100219b0c
// address: 0x100219b0c
// body: available
// range: 0x100219b0c-0x100219ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100219ce0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100219b0c(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ID self;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_70 [15];
  char local_61;
  undefined *local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  local_60 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_61 = '\0';
  pcVar6 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar6);
  IVar3 = NSFileManager::fileExistsAtPath_isDirectory_
                    (self,"fileExistsAtPath:isDirectory:",IVar3,&local_61);
  if (((int)IVar3 == 0) || (local_61 != '\x01')) {
    (**(code **)(lVar7 + 0x10))
              (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
    puVar4 = (undefined *)0x0;
    FUN_100033f0c(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033f0c(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    (**(code **)(lVar7 + 0x20))
              (puVar5 + *(long *)(lVar7 + 0x48) * uVar1 +
                        ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),
               auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  }
  else {
    FUN_1002194ac(param_1,param_2 & 1);
    FUN_10005f374();
    puVar5 = local_60;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

