// rea decompile_all
// name: FUN_100248b64
// address: 0x100248b64
// body: available
// range: 0x100248b64-0x100248d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100248b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  long unaff_x21;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  local_88 = param_2;
  local_80 = param_5;
  local_78 = param_6;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar4 = auStack_90 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = NSFileManager::URLsForDirectory_inDomains_(IVar3,"URLsForDirectory:inDomains:",9,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar3,lVar2);
  if (*(long *)(IVar3 + 0x10) != 0) {
    (**(code **)(lVar6 + 0x10))
              (puVar4,IVar3 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)),lVar2);
    _swift_bridgeObjectRelease(IVar3);
    local_70 = param_3;
    uStack_68 = param_4;
    _swift_bridgeObjectRetain(param_4);
    __sSS6appendyySSF(0x70697a2e,0xe400000000000000);
    uVar1 = uStack_68;
    __s10Foundation3URLV22appendingPathComponentyACSSF(param_1,local_70,uStack_68);
    _swift_bridgeObjectRelease(uVar1);
    FUN_10024bf84(local_88,param_1,0,0,2,local_80,local_78);
    if (unaff_x21 == 0) {
      (**(code **)(lVar6 + 8))(puVar4,lVar2);
    }
    else {
      pcVar5 = *(code **)(lVar6 + 8);
      (*pcVar5)(param_1,lVar2);
      (*pcVar5)(puVar4,lVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100248d18);
  (*pcVar5)();
}

