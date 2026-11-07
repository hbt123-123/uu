// rea decompile_all
// name: FUN_10038dda4
// address: 0x10038dda4
// body: available
// range: 0x10038dda4-0x10038de17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038de04 to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038dda4(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar2 = (undefined8 *)*param_1;
  pvVar3 = (void *)*puVar2;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = pvVar3;
    pvVar1 = (void *)puVar2[1];
    if ((void *)puVar2[1] != pvVar3) {
      do {
        pvVar4 = (void *)((long)pvVar1 + -0x28);
        thunk_FUN_10037edac((long)pvVar1 + -0x20);
        pvVar1 = pvVar4;
      } while (pvVar4 != pvVar3);
      pvVar4 = *(void **)*param_1;
    }
    puVar2[1] = pvVar3;
    operator_delete(pvVar4);
    return;
  }
  return;
}

