// rea decompile_all
// name: FUN_1003d9b04
// address: 0x1003d9b04
// body: available
// range: 0x1003d9b04-0x1003d9bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d9bf0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003d9b04(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_40 = (undefined *)0x0;
  _sysctlbyname("kern.osversion",(void *)0x0,(size_t *)&local_40,(void *)0x0,0);
  puVar4 = local_40;
  if ((long)local_40 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d9bf0);
    (*pcVar1)();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (local_40 != (undefined *)0x0) {
    puVar2 = local_40;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (local_40,PTR___ss4Int8VN_100995c20);
    *(undefined **)(puVar2 + 0x10) = puVar4;
    _bzero(puVar2 + 0x20,(size_t)puVar4);
  }
  puVar4 = puVar2 + 0x20;
  _sysctlbyname("kern.osversion",puVar4,(size_t *)&local_40,(void *)0x0,0);
  puVar3 = puVar2;
  FUN_100108560(puVar2);
  _swift_bridgeObjectRelease(puVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = puVar3;
  return auVar5;
}

