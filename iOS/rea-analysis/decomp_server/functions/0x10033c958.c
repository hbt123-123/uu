// rea decompile_all
// name: FUN_10033c958
// address: 0x10033c958
// body: available
// range: 0x10033c958-0x10033c9ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10033c958(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)0x6c696e;
  lVar1 = param_1;
  _swift_retain();
  plVar2 = (long *)(lVar1 + 0x10);
  _swift_weakLoadStrong();
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    _swift_release(plVar2);
    if (((ulong)plVar3 >> 0x20 & 1) == 0) {
      FUN_10033c9f0(plVar3);
      plVar4 = plVar3;
      goto LAB_10033c9bc;
    }
  }
  param_2 = 0xe300000000000000;
LAB_10033c9bc:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(plVar4,param_2);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return plVar4;
}

