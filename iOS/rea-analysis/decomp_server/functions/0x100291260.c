// rea decompile_all
// name: FUN_100291260
// address: 0x100291260
// body: available
// range: 0x100291260-0x10029131b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100291260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar3);
  _swift_beginAccess(lVar5 + 0x18,auStack_78,1,0);
  uVar1 = *(undefined8 *)(lVar5 + 0x38);
  uVar2 = *(undefined8 *)(lVar5 + 0x40);
  uVar4 = *(undefined8 *)(lVar5 + 0x48);
  *(undefined8 *)(lVar5 + 0x38) = param_1;
  *(undefined8 *)(lVar5 + 0x40) = param_2;
  *(undefined8 *)(lVar5 + 0x48) = param_3;
  _swift_retain(param_3);
  FUN_10028a014(uVar1,uVar2,uVar4);
  _os_unfair_lock_unlock(uVar3);
  _swift_retain();
  return;
}

