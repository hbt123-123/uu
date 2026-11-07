// rea decompile_all
// name: FUN_100105a34
// address: 0x100105a34
// body: available
// range: 0x100105a34-0x100105ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100105a34(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x18);
  _swift_release();
  puVar1 = (undefined8 *)(lVar2 + lVar4);
  *puVar1 = uVar6;
  *(undefined1 *)(puVar1 + 1) = 0;
  FUN_1003b2838();
  uVar5 = *puVar3;
  _swift_retain(uVar5);
  FUN_1003a9a1c(uVar6);
  _swift_release(uVar5);
  *(undefined1 *)(*(long *)(unaff_x22 + 0x10) + *(long *)(unaff_x22 + 0x30)) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100105ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

