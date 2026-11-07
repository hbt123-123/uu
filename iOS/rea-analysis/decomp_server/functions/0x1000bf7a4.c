// rea decompile_all
// name: FUN_1000bf7a4
// address: 0x1000bf7a4
// body: available
// range: 0x1000bf7a4-0x1000bf8cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bf7a4(ID param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  ID IVar4;
  uint uVar5;
  undefined1 *puVar6;
  long *local_60;
  undefined1 auStack_58 [24];
  
  puVar6 = auStack_58;
  _swift_beginAccess(param_2 + 0x10,puVar6,0,0);
  uVar5 = (uint)puVar6;
  plVar2 = (long *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2;
    FUN_1003db8c4();
    (**(code **)(*plVar3 + 0x108))(&local_60);
    _swift_release();
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0xe8))();
      _swift_release(local_60);
      if (((uVar5 >> 0x10 & 1) == 0) && (plVar3 != (long *)0x0 || (uVar5 & 0xffff) != 0xffff)) {
        if ((long)plVar3 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000bf8cc);
          (*pcVar1)();
        }
        IVar4 = _objc_msgSend(param_1,"modifierFlags");
        if (((((uint)IVar4 ^ (uint)plVar3) & 0x1e0000) == 0) &&
           (IVar4 = _objc_msgSend(param_1,"keyCode"), (uint)IVar4 == (uVar5 & 0xffff))) {
          FUN_1000bf8cc(0x6f4d6c61626f6c67,0xed0000726f74696e);
        }
      }
    }
    _swift_release(plVar2);
  }
  return;
}

