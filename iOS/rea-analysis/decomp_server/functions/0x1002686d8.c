// rea decompile_all
// name: FUN_1002686d8
// address: 0x1002686d8
// body: available
// range: 0x1002686d8-0x100268913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ***
FUN_1002686d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 **ppuVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_b0 [16];
  undefined8 **local_68;
  
  lVar9 = *unaff_x20;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = 0;
  FUN_10033b108();
  _swift_allocObject();
  FUN_10033854c(IVar2,0,0,uVar3);
  FUN_10026cd74(param_4);
  uVar3 = param_1;
  FUN_1002696cc();
  uVar4 = 0;
  FUN_1002f9a10(0);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_68,FUN_10026b7fc,auStack_b0,uVar4);
  ppuVar1 = local_68;
  pppuVar5 = *(undefined8 ****)(lVar9 + 0x50);
  (**(code **)(*(long *)(lVar9 + 0x58) + 0x30))();
  pppuVar6 = pppuVar5;
  FUN_100275c44();
  FUN_10026b3ec(pppuVar5);
  if (pppuVar6[2] == (undefined8 **)0x0) {
    _swift_bridgeObjectRelease(pppuVar6);
    _swift_retain(ppuVar1);
    pppuVar5 = (undefined8 ***)ppuVar1;
  }
  else {
    puVar7 = &DAT_100a81380;
    local_68 = pppuVar6;
    FUN_100004bb4(&DAT_100a81380,&DAT_100815520);
    puVar8 = &DAT_100a81388;
    FUN_1000d61d8(&DAT_100a81388,&DAT_100a81380,&DAT_100815520);
    pppuVar5 = &local_68;
    FUN_100358bdc(pppuVar5,puVar7,puVar8);
    _swift_bridgeObjectRelease(pppuVar6);
  }
  pppuVar6 = pppuVar5;
  FUN_100269f9c(pppuVar5,param_1,param_3,param_5,param_6,param_7,param_8,uVar4,&PTR_PTR_1009a8cb8);
  _swift_release(IVar2);
  _swift_release(uVar3);
  _swift_release(ppuVar1);
  _swift_release(pppuVar5);
  return pppuVar6;
}

