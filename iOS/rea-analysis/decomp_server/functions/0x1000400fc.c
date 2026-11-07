// rea decompile_all
// name: FUN_1000400fc
// address: 0x1000400fc
// body: available
// range: 0x1000400fc-0x100040133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000400fc(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)(unaff_x20 + 0x28));
  uStack_c = (undefined4)*(undefined8 *)(unaff_x20 + 0x34);
  uStack_8 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x34) >> 0x20);
  uStack_14 = (undefined4)*(undefined8 *)(unaff_x20 + 0x2c);
  uStack_10 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
  uStack_4 = CONCAT31(uStack_4._1_3_,*(undefined1 *)(unaff_x20 + 0x3c));
                    /* WARNING: Could not recover jumptable at 0x000100040130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),CONCAT44(uStack_14,local_18),
             CONCAT44(uStack_c,uStack_10),CONCAT44(uStack_4,uStack_8));
  return;
}

