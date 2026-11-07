// rea decompile_all
// name: FUN_10061487c
// address: 0x10061487c
// body: available
// range: 0x10061487c-0x1006148f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061487c(undefined8 *param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  local_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  local_50 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar1 = FUN_100614e20;
  FUN_100617350(FUN_100614e20,auStack_70,local_60,uStack_58,PTR___ss5NeverON_100995d08,local_50,
                PTR___ss5NeverOs5ErrorsWP_100995d10);
  *param_1 = pcVar1;
  return;
}

