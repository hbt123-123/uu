// rea decompile_all
// name: FUN_100636eb0
// address: 0x100636eb0
// body: available
// range: 0x100636eb0-0x100636fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100636eb0(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  
  uVar1 = (uint)param_3 & 0xff;
  uVar2 = uVar1 - 1;
  if ((uVar2 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100636fd0);
    (*pcVar3)();
  }
  lVar4 = 0x10;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x10,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar4 + 0x10) = 0x10;
  *(undefined8 *)(lVar4 + 0x21) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(byte *)(lVar4 + 0x20) = (byte)uVar2 & 7;
  if (uVar1 < 0xf) {
    param_3 = param_3 & 0xff;
    if (0xf - param_3 <= *(ulong *)(param_2 + 0x10)) {
      _swift_bridgeObjectRetain(param_2);
      FUN_100634178(1,0x10 - param_3,param_2,param_2 + 0x20,0,(0xf - param_3) * 2 | 1);
      _swift_bridgeObjectRelease(param_2);
      thunk_FUN_10066690c(param_1,param_3);
      FUN_10063e8ec();
      _swift_bridgeObjectRelease(param_1);
      return lVar4;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100636fd8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100636fd4);
  (*pcVar3)();
}

