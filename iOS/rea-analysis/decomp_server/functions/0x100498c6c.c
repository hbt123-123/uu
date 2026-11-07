// rea decompile_all
// name: FUN_100498c6c
// address: 0x100498c6c
// body: available
// range: 0x100498c6c-0x100498cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100498c6c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *unaff_x20;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  local_50 = unaff_x20[8];
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  FUN_100040bb4(&local_90,&DAT_100aa0b88,&DAT_10082dd70);
  *unaff_x20 = param_1 & 1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  unaff_x20[4] = 0;
  unaff_x20[7] = 0x8000000000000000;
  unaff_x20[9] = param_4;
  return;
}

