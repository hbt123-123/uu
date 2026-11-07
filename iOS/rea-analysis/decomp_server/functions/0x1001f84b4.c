// rea decompile_all
// name: FUN_1001f84b4
// address: 0x1001f84b4
// body: available
// range: 0x1001f84b4-0x1001f8533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001f84b4(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  uVar3 = 0;
  __s10Foundation13__DataStorageCMa();
  _swift_allocObject();
  __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_1,lVar1,uVar3);
  if (lVar1 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f852c);
    (*pcVar2)();
  }
  if (0x7fffffff < lVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f8530);
    (*pcVar2)();
  }
  if (-1 < lVar1) {
    auVar4._0_8_ = lVar1 << 0x20;
    auVar4._8_8_ = param_1;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f8534);
  (*pcVar2)();
}

