// rea decompile_all
// name: FUN_1001c3a64
// address: 0x1001c3a64
// body: available
// range: 0x1001c3a64-0x1001c3b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c3a64(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = 0x20;
  _swift_task_alloc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  FUN_1003fb4ec(FUN_1001c4680,lVar1,0xd0000000000000a0,0x800000010089cf20,0xd00000000000001a,
                0x800000010089d040,0xc2,0);
  _swift_errorRelease(uVar2);
  _swift_task_dealloc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001c3b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

