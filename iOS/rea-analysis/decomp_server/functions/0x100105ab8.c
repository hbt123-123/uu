// rea decompile_all
// name: FUN_100105ab8
// address: 0x100105ab8
// body: available
// range: 0x100105ab8-0x100105b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100105ab8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_100401b14(0);
  lVar1 = 0x20;
  _swift_task_alloc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  FUN_1003fb4ec(FUN_100108558,lVar1,0xd000000000000097,0x8000000100889170,0xd000000000000011,
                0x800000010088ab60,0x124,0);
  _swift_errorRelease(uVar2);
  _swift_task_dealloc(lVar1);
  *(undefined1 *)(*(long *)(unaff_x22 + 0x10) + *(long *)(unaff_x22 + 0x30)) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100105b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

