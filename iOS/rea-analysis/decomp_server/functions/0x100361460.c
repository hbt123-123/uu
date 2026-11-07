// rea decompile_all
// name: FUN_100361460
// address: 0x100361460
// body: available
// range: 0x100361460-0x100361553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100361460(undefined8 param_1,ID param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  ID self;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_58,0,0);
  puVar2 = (ulong *)(param_4 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  puVar1 = PTR__swift_isaMask_100995ee0;
  if (puVar2 != (ulong *)0x0) {
    self = param_2;
    (**(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar2) + 0xd8))();
    if (self != 0) {
      if (param_3 != 0) {
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
      }
      _objc_msgSend(self,"urlSession:task:didCompleteWithError:",param_1,param_2,param_3);
    }
    (**(code **)((*(ulong *)puVar1 & *puVar2) + 0xe0))(0,param_2);
  }
  return;
}

