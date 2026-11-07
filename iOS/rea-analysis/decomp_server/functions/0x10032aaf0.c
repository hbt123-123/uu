// rea decompile_all
// name: FUN_10032aaf0
// address: 0x10032aaf0
// body: available
// range: 0x10032aaf0-0x10032abdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10032aaf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  puVar3 = &DAT_1009b20c0;
  _swift_allocObject(&DAT_1009b20c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  lVar7 = *(long *)(unaff_x20 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar4 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
  _swift_retain(param_2);
  _os_unfair_lock_lock(uVar4);
  _swift_beginAccess(lVar7 + 0x18,auStack_68,1,0);
  uVar1 = *(undefined8 *)(lVar7 + 0x28);
  uVar2 = *(undefined8 *)(lVar7 + 0x30);
  uVar6 = *(undefined8 *)(lVar7 + 0x38);
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  *(code **)(lVar7 + 0x30) = FUN_10032d904;
  *(undefined **)(lVar7 + 0x38) = puVar3;
  _swift_retain(puVar3);
  FUN_10028a014(uVar1,uVar2,uVar6);
  _os_unfair_lock_unlock(uVar4);
  _swift_release(puVar3);
  return;
}

