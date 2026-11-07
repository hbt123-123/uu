// rea decompile_all
// name: FUN_1002d0698
// address: 0x1002d0698
// body: available
// range: 0x1002d0698-0x1002d073b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d0698(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (*(byte *)(param_1 + _TtC9Alamofire7Request::shouldAutomaticallyResume) == 2) {
    uVar2 = param_1 + _TtC9Alamofire7Request::delegate;
    _swift_beginAccess(uVar2,auStack_48,0,0);
    uVar1 = uVar2;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar1 == 0) {
      return;
    }
    lVar3 = *(long *)(uVar2 + 8);
    uVar2 = uVar1;
    _swift_getObjectType();
    (**(code **)(lVar3 + 0x10))();
    _swift_unknownObjectRelease(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  else if ((*(byte *)(param_1 + _TtC9Alamofire7Request::shouldAutomaticallyResume) & 1) == 0) {
    return;
  }
  FUN_1002d3e44();
  return;
}

