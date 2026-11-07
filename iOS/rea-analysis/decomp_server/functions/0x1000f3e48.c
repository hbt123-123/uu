// rea decompile_all
// name: FUN_1000f3e48
// address: 0x1000f3e48
// body: available
// range: 0x1000f3e48-0x1000f3f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f3e48(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  code *pcVar4;
  long *local_48;
  
  FUN_1003dab3c();
  (**(code **)(*param_1 + 0x108))(&local_48);
  _swift_release(param_1);
  if (local_48 != (long *)0x0) {
    pcVar4 = *(code **)(*local_48 + 0x98);
    plVar1 = local_48;
    _swift_retain(local_48);
    (*pcVar4)();
    plVar3 = local_48;
    lVar2 = param_2;
    _swift_release(local_48);
    if ((param_2 != 0) ||
       ((**(code **)(*local_48 + 0xe0))(), plVar1 = plVar3, param_2 = lVar2, lVar2 != 0)) {
      plVar3 = *(long **)(unaff_x20 + 0xc0);
      pcVar4 = *(code **)(*plVar3 + 0x1c8);
      _swift_retain(plVar3);
      (*pcVar4)(plVar1,param_2);
      _swift_bridgeObjectRelease(param_2);
      _swift_release(plVar3);
    }
    _swift_release(local_48);
  }
  return;
}

