// rea decompile_all
// name: FUN_1007870d4
// address: 0x1007870d4
// body: available
// range: 0x1007870d4-0x100787147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100787134 to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007870d4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar3 = (undefined8 *)*param_1;
  pvVar4 = (void *)*puVar3;
  if (pvVar4 != (void *)0x0) {
    pvVar2 = (void *)puVar3[1];
    pvVar1 = pvVar4;
    if (pvVar2 != pvVar4) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -8);
        FUN_100787070(pvVar2,0);
      } while (pvVar2 != pvVar4);
      pvVar1 = *(void **)*param_1;
    }
    puVar3[1] = pvVar4;
    operator_delete(pvVar1);
    return;
  }
  return;
}

