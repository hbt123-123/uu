// rea decompile_all
// name: FUN_10031cf60
// address: 0x10031cf60
// body: available
// range: 0x10031cf60-0x10031cfc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031cf60(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  FUN_100004bb4();
  uVar2 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(param_1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010031cfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (unaff_x20 + uVar3,*(undefined8 *)(unaff_x20 + uVar2),*puVar1,puVar1[1],
             *(undefined8 *)(unaff_x20 + uVar2 + 0x18));
  return;
}

