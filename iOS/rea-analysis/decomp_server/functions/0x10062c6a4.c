// rea decompile_all
// name: FUN_10062c6a4
// address: 0x10062c6a4
// body: available
// range: 0x10062c6a4-0x10062c6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10062c6a4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return (uint)CONCAT11((&DAT_100ab15d9)[(ulong)(param_2 >> 8 & 0xff) * 4],
                        (&DAT_100ab15d9)[(ulong)(param_1 & 0xff) * 4]) |
         (*(uint *)(&DAT_100ab15d8 + (ulong)(param_3 >> 0x10 & 0xff) * 4) >> 8 & 0xff) << 0x10 |
         (*(uint *)(&DAT_100ab15d8 + (ulong)(param_4 >> 0x18) * 4) >> 8) << 0x18;
}

