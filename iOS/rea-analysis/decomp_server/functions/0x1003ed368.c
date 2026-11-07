// rea decompile_all
// name: FUN_1003ed368
// address: 0x1003ed368
// body: available
// range: 0x1003ed368-0x1003ed37f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1003ed368(ulong param_1,ulong param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  param_2 = param_2 ^ param_1;
  uVar2 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(param_2 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(param_2 >>
                                                                                        8)),
                                                                         POPCOUNT((char)param_2)))))
                                    )));
  uVar1 = NEON_uaddlv(uVar2,1);
  return CONCAT62((int6)((ulong)uVar2 >> 0x10),uVar1) & 0xffffffff;
}

