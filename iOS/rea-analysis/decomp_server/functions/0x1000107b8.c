// rea decompile_all
// name: FUN_1000107b8
// address: 0x1000107b8
// body: available
// range: 0x1000107b8-0x1000107f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000107b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(unaff_x20 + 1));
  uStack_1c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0x14);
  uStack_18 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0x14) >> 0x20);
  uStack_24 = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
  uStack_20 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
  uStack_14 = CONCAT31(uStack_14._1_3_,*(undefined1 *)((long)unaff_x20 + 0x1c));
  FUN_100010438(param_1,*unaff_x20,CONCAT44(uStack_24,local_28),CONCAT44(uStack_1c,uStack_20),
                CONCAT44(uStack_14,uStack_18));
  return;
}

