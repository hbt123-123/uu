// rea decompile_all
// name: FUN_1000c1180
// address: 0x1000c1180
// body: available
// range: 0x1000c1180-0x1000c12af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_1000c1180(double param_1,ID param_2)

{
  undefined1 uVar1;
  double dVar2;
  undefined1 auStack_80 [16];
  ID local_70;
  double local_68;
  undefined1 local_60;
  undefined1 local_58;
  double local_50;
  double dStack_48;
  
  _objc_msgSend(param_2,"frame");
  _CGRectGetWidth();
  dVar2 = param_1;
  _objc_msgSend(param_2,"frame");
  _CGRectGetHeight();
  local_68 = param_1 / dVar2;
  uVar1 = ABS(local_68 + -1.6) < ABS(local_68 + -1.7777777777777777);
  dStack_48 = *(double *)(&DAT_10080bcb0 + (ulong)(byte)uVar1 * 8);
  if (ABS(local_68 + -0.5625) < ABS(local_68 - dStack_48)) {
    dStack_48 = 0.5625;
    uVar1 = 2;
  }
  FUN_100401b14(0);
  local_70 = param_2;
  local_60 = uVar1;
  local_58 = uVar1;
  local_50 = local_68;
  FUN_1003fb48c(FUN_1000c12c8,auStack_80,0xd00000000000009f,0x8000000100882d60,0xd00000000000001a,
                0x8000000100883230,0x28f,0);
  return uVar1;
}

