// rea decompile_all
// name: FUN_100268914
// address: 0x100268914
// body: available
// range: 0x100268914-0x100268ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ***
FUN_100268914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auStack_b0 [16];
  undefined8 **local_68;
  
  lVar8 = *unaff_x20;
  uVar2 = param_1;
  FUN_1002696cc();
  uVar3 = 0;
  FUN_1002b4ae4(0);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_68,FUN_10026b81c,auStack_b0,uVar3);
  ppuVar1 = local_68;
  pppuVar4 = *(undefined8 ****)(lVar8 + 0x50);
  (**(code **)(*(long *)(lVar8 + 0x58) + 0x30))();
  pppuVar5 = pppuVar4;
  FUN_100275c44();
  FUN_10026b3ec(pppuVar4);
  if (pppuVar5[2] == (undefined8 **)0x0) {
    _swift_bridgeObjectRelease(pppuVar5);
    _swift_retain(ppuVar1);
    pppuVar4 = (undefined8 ***)ppuVar1;
  }
  else {
    puVar6 = &DAT_100a81380;
    local_68 = pppuVar5;
    FUN_100004bb4(&DAT_100a81380,&DAT_100815520);
    puVar7 = &DAT_100a81388;
    FUN_1000d61d8(&DAT_100a81388,&DAT_100a81380,&DAT_100815520);
    pppuVar4 = &local_68;
    FUN_100359270(pppuVar4,puVar6,puVar7);
    _swift_bridgeObjectRelease(pppuVar5);
  }
  pppuVar5 = pppuVar4;
  FUN_100269f9c(pppuVar4,param_1,param_3,param_6,param_7,param_8,param_9,uVar3,&PTR_PTR_1009a8cc8);
  _swift_release(uVar2);
  _swift_release(ppuVar1);
  _swift_release(pppuVar4);
  return pppuVar5;
}

