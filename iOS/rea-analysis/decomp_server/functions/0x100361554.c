// rea decompile_all
// name: FUN_100361554
// address: 0x100361554
// body: available
// range: 0x100361554-0x10036169b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100361554(long param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  ulong uVar2;
  ID self;
  long lVar3;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  puVar1 = (ulong *)(param_1 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar1 != (ulong *)0x0) {
    lVar3 = (long)puVar1 + _TtC10Filepicker25FilePickerSessionDelegate::sessionManager;
    _swift_unknownObjectWeakLoadStrong();
    if ((lVar3 != 0) && (uVar2 = param_2, FUN_100371d80(), (uVar2 & 1) != 0)) {
      self = *(ID *)(param_2 + _TtC10Filepicker17FilePickerRequest::taskLock);
      _objc_msgSend(self,"lock");
      lVar3 = *(long *)(param_2 + _TtC10Filepicker17FilePickerRequest::_task);
      _objc_msgSend(self,"unlock");
      if (lVar3 != 0) {
        (**(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar1) + 0xe0))(param_2,lVar3);
        return;
      }
    }
    (*param_3)(param_5,param_6,param_7);
  }
  return;
}

