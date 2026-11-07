// rea decompile_all
// name: FUN_100418bcc
// address: 0x100418bcc
// body: available
// range: 0x100418bcc-0x100418c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100418bcc(ulong param_1,ulong param_2,ulong param_3,undefined1 param_4,ulong param_5)

{
  ulong *unaff_x20;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  uStack_58 = (undefined1)unaff_x20[7];
  uStack_4f = *(undefined8 *)((long)unaff_x20 + 0x41);
  local_57 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  FUN_100040bb4(&local_90,&DAT_100a9eea0,&DAT_100825d78);
  *unaff_x20 = param_1 & 0xffffffff;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  unaff_x20[8] = param_5;
  *(undefined1 *)(unaff_x20 + 9) = param_4;
  return;
}

