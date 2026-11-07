// rea decompile_all
// name: FUN_1006b8784
// address: 0x1006b8784
// body: available
// range: 0x1006b8784-0x1006b8803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b8784(undefined8 param_1)

{
  long in_x6;
  ushort uVar1;
  
  uVar1 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)*(undefined8 *)(in_x6 + 0xc) >> 0x20) - 0x1fU <
                                       0xffffffe2),
                              CONCAT24(-(ushort)((int)*(undefined8 *)(in_x6 + 0xc) - 0x1fU <
                                                0xffffffe7),
                                       CONCAT22(-(ushort)((int)((ulong)*(undefined8 *)(in_x6 + 4) >>
                                                               0x20) - 0x1fU < 0xffffffe7),
                                                -(ushort)((int)*(undefined8 *)(in_x6 + 4) - 0x20U <
                                                         0xffffffea)))),2);
  if (((((uVar1 & 1) == 0) && (0xfffffffa < *(int *)(in_x6 + 0x14) - 8U)) &&
      (*(uint *)(in_x6 + 0x18) < 0x20001)) && (*(int *)(in_x6 + 0x1c) - 1U < 9)) {
    FUN_1006b8804();
    return param_1;
  }
  return 0xffffffffffffffd6;
}

