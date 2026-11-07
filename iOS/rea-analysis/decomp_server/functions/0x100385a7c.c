// rea decompile_all
// name: FUN_100385a7c
// address: 0x100385a7c
// body: available
// range: 0x100385a7c-0x100385b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100385ad8 to 0x100385b58 FUN_100385b58 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100385a7c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    std::__next_prime(param_2);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (param_2 <= uVar2) {
    if (param_2 < uVar2) {
      uVar1 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
      if ((uVar2 < 3) ||
         (uVar4 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                           CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                    CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                             CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                      CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                               CONCAT12(POPCOUNT((char)(uVar2 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar2 >> 8)),
                                                                  POPCOUNT((char)uVar2)))))))),
         uVar3 = NEON_uaddlv(uVar4,1), 1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3))) {
        std::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (param_2 <= uVar1) {
        param_2 = uVar1;
      }
      if (param_2 < uVar2) goto LAB_100385ac4;
    }
    return;
  }
LAB_100385ac4:
  FUN_100385b58(param_1,param_2);
  return;
}

